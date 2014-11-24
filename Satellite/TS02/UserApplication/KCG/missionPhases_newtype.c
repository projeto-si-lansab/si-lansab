#include <stdlib.h>
#include <stddef.h>
#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "missionPhases_newtype.h"

#define skip_whitespace(str) while(*str == ' ' || *str == '\t') str++

/****************************************************************
 ** utility functions 
 ****************************************************************/

static int string_to_VTable(const char* str, const struct SimTypeVTable* pVTable, void* pValue, const char** endptr)
{
    int nRet;
    if (pVTable != NULL && pVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        nRet = pVTable->m_pfnFromType(SptString, (const void*)&str, pValue);
        if (nRet != 0)
            *endptr = str+strlen(str); /* TODO */
        return nRet;
    };
    return 0;
}

static int is_VTable_double_convertion_allowed(const struct SimTypeVTable* pVTable)
{
    if (pVTable != NULL) {
        int nConvertionAllowed = 0;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
        return nConvertionAllowed;
    }
    return 1;
}

int VTable_to_double(const void *pValue, const struct SimTypeVTable* pVTable, double *nRetValue)
{
    if (pVTable != NULL) {
        if (pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
            *nRetValue = (double)(*(long*)pVTable->m_pfnToType(SptLong, pValue));
        else if (pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
            *nRetValue = (double)(*(int*)pVTable->m_pfnToType(SptShort, pValue));
        else if (pVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
            *nRetValue = (*(double*)pVTable->m_pfnToType(SptDouble, pValue));
        else if (pVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
            *nRetValue = (double)(*(float*)pVTable->m_pfnToType(SptFloat, pValue));
        else
            return 0;
    }
    return 1;
}

static int get_enum_signature(const EnumValUtils *pEnumVals, int nSize, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("E", pData);
    for(i=0; i<nSize; i++) {
        pfnStrAppend("|", pData);
        pfnStrAppend(pEnumVals[i].m_name, pData);
    }
    return 1;
}

static int get_structure_signature(const FieldUtils *pFields, int nSize, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for(i=0; i<nSize; i++) {
        if (i > 0)
            pfnStrAppend(",", pData);
        pfnStrAppend(pFields[i].m_name, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

/****************************************************************
 ** SSM_ST_OpPhases 
 ****************************************************************/

struct SimTypeVTable* pSimSSM_ST_OpPhasesVTable;

static EnumValUtils SSM_ST_OpPhases_values[] = {
    { "Ground", SSM_st_Ground_OpPhases},
    { "Ground", SSM_st_Ground_OpPhases},
    { "Launch", SSM_st_Launch_OpPhases},
    { "Launch", SSM_st_Launch_OpPhases},
    { "AttitudeAcquisition", SSM_st_AttitudeAcquisition_OpPhases},
    { "AttitudeAcquisition", SSM_st_AttitudeAcquisition_OpPhases},
    { "NormalPhase", SSM_st_NormalPhase_OpPhases},
    { "NormalPhase", SSM_st_NormalPhase_OpPhases},
};

int SSM_ST_OpPhases_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimSSM_ST_OpPhasesVTable != NULL
        && pSimSSM_ST_OpPhasesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimSSM_ST_OpPhasesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_OpPhases*)pValue, SSM_ST_OpPhases_values, 8, pfnStrAppend, pData);
}

int string_to_SSM_ST_OpPhases(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimSSM_ST_OpPhasesVTable != NULL
        && pSimSSM_ST_OpPhasesVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimSSM_ST_OpPhasesVTable, pValue, endptr);
    }
    {
        int nTemp = 0;
        int nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_OpPhases_values, 8, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_OpPhases*)pValue = nTemp;
        return nRet;
    }
}

int is_SSM_ST_OpPhases_double_convertion_allowed()
{
    if (pSimSSM_ST_OpPhasesVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_OpPhasesVTable);
    }
    return 1;
}

int compare_SSM_ST_OpPhases(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimSSM_ST_OpPhasesVTable != NULL
        && pSimSSM_ST_OpPhasesVTable->m_version >= Scv612
        && pSimSSM_ST_OpPhasesVTable->m_pfnCompare != NULL)
        return pSimSSM_ST_OpPhasesVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnEnumComparison(pStatus, *(SSM_ST_OpPhases*)pValue1, *(SSM_ST_OpPhases*)pValue2, SSM_ST_OpPhases_values, 8, pData);
}

int SSM_ST_OpPhases_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_OpPhasesVTable != NULL) {
        return  VTable_to_double(pValue, pSimSSM_ST_OpPhasesVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_OpPhases*)pValue);
    return 1;
}

int get_SSM_ST_OpPhases_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_OpPhases_values, 8, pfnStrAppend, pData);
}

int set_SSM_ST_OpPhases_default_value(void *pValue)
{
    *(SSM_ST_OpPhases*)pValue = SSM_st_Ground_OpPhases;
    return 1;
}

int check_SSM_ST_OpPhases_string(const char* str, const char** endptr)
{
    return string_to_SSM_ST_OpPhases(str, NULL, endptr);
}

TypeUtils _Type_SSM_ST_OpPhases_Utils = {
    SSM_ST_OpPhases_to_string,
    check_SSM_ST_OpPhases_string,
    string_to_SSM_ST_OpPhases,
    is_SSM_ST_OpPhases_double_convertion_allowed,
    SSM_ST_OpPhases_to_double,
    compare_SSM_ST_OpPhases,
    get_SSM_ST_OpPhases_signature,
    set_SSM_ST_OpPhases_default_value,
    sizeof(SSM_ST_OpPhases)
};

/****************************************************************
 ** SSM_TR_OpPhases 
 ****************************************************************/

struct SimTypeVTable* pSimSSM_TR_OpPhasesVTable;

static EnumValUtils SSM_TR_OpPhases_values[] = {
    { "SSM_TR_OpPhases_no_trans", 0},
    { "SSM_TR_OpPhases_no_trans", 0},
    { "Ground:<2>", SSM_TR_Ground_2_OpPhases},
    { "Ground:<2>", SSM_TR_Ground_2_OpPhases},
    { "Ground:<1>", SSM_TR_Ground_1_OpPhases},
    { "Ground:<1>", SSM_TR_Ground_1_OpPhases},
    { "Launch:<1>", SSM_TR_Launch_1_OpPhases},
    { "Launch:<1>", SSM_TR_Launch_1_OpPhases},
    { "AttitudeAcquisition:<1>", SSM_TR_AttitudeAcquisition_1_OpPhases},
    { "AttitudeAcquisition:<1>", SSM_TR_AttitudeAcquisition_1_OpPhases},
};

int SSM_TR_OpPhases_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimSSM_TR_OpPhasesVTable != NULL
        && pSimSSM_TR_OpPhasesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimSSM_TR_OpPhasesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_OpPhases*)pValue, SSM_TR_OpPhases_values, 10, pfnStrAppend, pData);
}

int string_to_SSM_TR_OpPhases(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimSSM_TR_OpPhasesVTable != NULL
        && pSimSSM_TR_OpPhasesVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimSSM_TR_OpPhasesVTable, pValue, endptr);
    }
    {
        int nTemp = 0;
        int nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_OpPhases_values, 10, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_OpPhases*)pValue = nTemp;
        return nRet;
    }
}

int is_SSM_TR_OpPhases_double_convertion_allowed()
{
    if (pSimSSM_TR_OpPhasesVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_OpPhasesVTable);
    }
    return 1;
}

int compare_SSM_TR_OpPhases(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimSSM_TR_OpPhasesVTable != NULL
        && pSimSSM_TR_OpPhasesVTable->m_version >= Scv612
        && pSimSSM_TR_OpPhasesVTable->m_pfnCompare != NULL)
        return pSimSSM_TR_OpPhasesVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnEnumComparison(pStatus, *(SSM_TR_OpPhases*)pValue1, *(SSM_TR_OpPhases*)pValue2, SSM_TR_OpPhases_values, 10, pData);
}

int SSM_TR_OpPhases_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_OpPhasesVTable != NULL) {
        return  VTable_to_double(pValue, pSimSSM_TR_OpPhasesVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_OpPhases*)pValue);
    return 1;
}

int get_SSM_TR_OpPhases_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_OpPhases_values, 10, pfnStrAppend, pData);
}

int set_SSM_TR_OpPhases_default_value(void *pValue)
{
    *(SSM_TR_OpPhases*)pValue = 0;
    return 1;
}

int check_SSM_TR_OpPhases_string(const char* str, const char** endptr)
{
    return string_to_SSM_TR_OpPhases(str, NULL, endptr);
}

TypeUtils _Type_SSM_TR_OpPhases_Utils = {
    SSM_TR_OpPhases_to_string,
    check_SSM_TR_OpPhases_string,
    string_to_SSM_TR_OpPhases,
    is_SSM_TR_OpPhases_double_convertion_allowed,
    SSM_TR_OpPhases_to_double,
    compare_SSM_TR_OpPhases,
    get_SSM_TR_OpPhases_signature,
    set_SSM_TR_OpPhases_default_value,
    sizeof(SSM_TR_OpPhases)
};

/****************************************************************
 ** kcg_real 
 ****************************************************************/

struct SimTypeVTable* pSimDoubleVTable;

int kcg_real_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimDoubleVTable != NULL
        && pSimDoubleVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimDoubleVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnRealToString((double)(*(const kcg_real*)pValue), pfnStrAppend, pData);
}

int string_to_kcg_real(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimDoubleVTable != NULL
        && pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimDoubleVTable, pValue, endptr);
    }
    {
        double nTemp = 0;
        int nRet = pConverter->m_pfnStringToReal(str, &nTemp, endptr);
        if (nRet != 0 && pValue != NULL)
            *(kcg_real*)pValue = (kcg_real)nTemp;
        return nRet;
    }
}

int is_kcg_real_double_convertion_allowed()
{
    if (pSimDoubleVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimDoubleVTable);
    }
    return 1;
}

int compare_kcg_real(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimDoubleVTable != NULL
        && pSimDoubleVTable->m_version >= Scv612
        && pSimDoubleVTable->m_pfnCompare != NULL)
        return pSimDoubleVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnRealComparison(pStatus, (double)*(kcg_real*)pValue1, (double)*(kcg_real*)pValue2, pData);
}

int kcg_real_to_double(const void *pValue, double *nRetValue)
{
    if (pSimDoubleVTable != NULL) {
        return  VTable_to_double(pValue, pSimDoubleVTable, nRetValue);
    }
    *nRetValue = (double)*((kcg_real*)pValue);
    return 1;
}

int get_kcg_real_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return pfnStrAppend("R", pData);
}

int set_kcg_real_default_value(void *pValue)
{
    *(kcg_real*)pValue = 0.0;
    return 1;
}

int check_kcg_real_string(const char* str, const char** endptr)
{
    return string_to_kcg_real(str, NULL, endptr);
}

TypeUtils _Type_kcg_real_Utils = {
    kcg_real_to_string,
    check_kcg_real_string,
    string_to_kcg_real,
    is_kcg_real_double_convertion_allowed,
    kcg_real_to_double,
    compare_kcg_real,
    get_kcg_real_signature,
    set_kcg_real_default_value,
    sizeof(kcg_real)
};

/****************************************************************
 ** kcg_bool 
 ****************************************************************/

struct SimTypeVTable* pSimBoolVTable;

int kcg_bool_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnBoolToString((*(const kcg_bool*)pValue) == kcg_true ? 1 : 0, pfnStrAppend, pData);
}

int string_to_kcg_bool(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimBoolVTable, pValue, endptr);
    }
    {
        int nTemp = 0;
        int nRet = pConverter->m_pfnStringToBool(str, &nTemp, endptr);
        if (nRet != 0 && pValue != NULL)
            *(kcg_bool*)pValue = nTemp == 1 ? kcg_true : kcg_false;
        return nRet;
    }
}

int is_kcg_bool_double_convertion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBoolVTable);
    }
    return 1;
}

int compare_kcg_bool(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_version >= Scv612
        && pSimBoolVTable->m_pfnCompare != NULL)
        return pSimBoolVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnBoolComparison(pStatus, (int)*(kcg_bool*)pValue1, (int)*(kcg_bool*)pValue2, pData);
}

int kcg_bool_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBoolVTable != NULL) {
        return  VTable_to_double(pValue, pSimBoolVTable, nRetValue);
    }
    *nRetValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int get_kcg_bool_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return pfnStrAppend("B", pData);
}

int set_kcg_bool_default_value(void *pValue)
{
    *(kcg_bool*)pValue = kcg_false;
    return 1;
}

int check_kcg_bool_string(const char* str, const char** endptr)
{
    return string_to_kcg_bool(str, NULL, endptr);
}

TypeUtils _Type_kcg_bool_Utils = {
    kcg_bool_to_string,
    check_kcg_bool_string,
    string_to_kcg_bool,
    is_kcg_bool_double_convertion_allowed,
    kcg_bool_to_double,
    compare_kcg_bool,
    get_kcg_bool_signature,
    set_kcg_bool_default_value,
    sizeof(kcg_bool)
};

/****************************************************************
 ** kcg_char 
 ****************************************************************/

struct SimTypeVTable* pSimCharVTable;

int kcg_char_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnCharToString((char)(*(const kcg_char*)pValue), pfnStrAppend, pData);
}

int string_to_kcg_char(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimCharVTable, pValue, endptr);
    }
    {
        char nTemp = 0;
        int nRet = pConverter->m_pfnStringToChar(str, &nTemp, endptr);
        if (nRet != 0 && pValue != NULL)
            *(kcg_char*)pValue = (kcg_char)nTemp;
        return nRet;
    }
}

int is_kcg_char_double_convertion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCharVTable);
    }
    return 1;
}

int compare_kcg_char(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_version >= Scv612
        && pSimCharVTable->m_pfnCompare != NULL)
        return pSimCharVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnCharComparison(pStatus, (char)*(kcg_char*)pValue1, (char)*(kcg_char*)pValue2, pData);
}

int kcg_char_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCharVTable != NULL) {
        return  VTable_to_double(pValue, pSimCharVTable, nRetValue);
    }
    *nRetValue = (double)*((kcg_char*)pValue);
    return 1;
}

int get_kcg_char_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return pfnStrAppend("C", pData);
}

int set_kcg_char_default_value(void *pValue)
{
    *(kcg_char*)pValue = 0;
    return 1;
}

int check_kcg_char_string(const char* str, const char** endptr)
{
    return string_to_kcg_char(str, NULL, endptr);
}

TypeUtils _Type_kcg_char_Utils = {
    kcg_char_to_string,
    check_kcg_char_string,
    string_to_kcg_char,
    is_kcg_char_double_convertion_allowed,
    kcg_char_to_double,
    compare_kcg_char,
    get_kcg_char_signature,
    set_kcg_char_default_value,
    sizeof(kcg_char)
};

/****************************************************************
 ** kcg_int 
 ****************************************************************/

struct SimTypeVTable* pSimLongVTable;

int kcg_int_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimLongVTable != NULL
        && pSimLongVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimLongVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnIntToString(*(const int*)pValue, pfnStrAppend, pData);
}

int string_to_kcg_int(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimLongVTable != NULL
        && pSimLongVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimLongVTable, pValue, endptr);
    }
    {
        int nTemp = 0;
        int nRet = pConverter->m_pfnStringToInt(str, &nTemp, endptr);
        if (nRet != 0 && pValue != NULL)
            *(kcg_int*)pValue = (kcg_int)nTemp;
        return nRet;
    }
}

int is_kcg_int_double_convertion_allowed()
{
    if (pSimLongVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimLongVTable);
    }
    return 1;
}

int compare_kcg_int(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimLongVTable != NULL
        && pSimLongVTable->m_version >= Scv612
        && pSimLongVTable->m_pfnCompare != NULL)
        return pSimLongVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnIntComparison(pStatus, (int)*(kcg_int*)pValue1, (int)*(kcg_int*)pValue2, pData);
}

int kcg_int_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLongVTable != NULL) {
        return  VTable_to_double(pValue, pSimLongVTable, nRetValue);
    }
    *nRetValue = (double)*((kcg_int*)pValue);
    return 1;
}

int get_kcg_int_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return pfnStrAppend("I", pData);
}

int set_kcg_int_default_value(void *pValue)
{
    *(kcg_int*)pValue = 0;
    return 1;
}

int check_kcg_int_string(const char* str, const char** endptr)
{
    return string_to_kcg_int(str, NULL, endptr);
}

TypeUtils _Type_kcg_int_Utils = {
    kcg_int_to_string,
    check_kcg_int_string,
    string_to_kcg_int,
    is_kcg_int_double_convertion_allowed,
    kcg_int_to_double,
    compare_kcg_int,
    get_kcg_int_signature,
    set_kcg_int_default_value,
    sizeof(kcg_int)
};

/****************************************************************
 ** struct__5707 
 ****************************************************************/

struct SimTypeVTable* pSimstruct__5707VTable;

static FieldUtils struct__5707_fields[] = {
    {"k", offsetof(struct__5707,k), &_Type_kcg_int_Utils},
    {"f", offsetof(struct__5707,f), &_Type_kcg_real_Utils},
};

int struct__5707_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimstruct__5707VTable != NULL
        && pSimstruct__5707VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimstruct__5707VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__5707_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__5707(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimstruct__5707VTable != NULL
        && pSimstruct__5707VTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimstruct__5707VTable, pValue, endptr);
    }
    return pConverter->m_pfnStringToStructure(str, pValue, struct__5707_fields, 2, endptr);
}

int is_struct__5707_double_convertion_allowed()
{
    if (pSimstruct__5707VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__5707VTable);
    }
    return 0;
}

int compare_struct__5707(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimstruct__5707VTable != NULL
        && pSimstruct__5707VTable->m_version >= Scv612
        && pSimstruct__5707VTable->m_pfnCompare != NULL)
        return pSimstruct__5707VTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnStructureComparison(pStatus, pValue1, pValue2, struct__5707_fields, 2, pData);
}

int struct__5707_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__5707VTable != NULL) {
        return  VTable_to_double(pValue, pSimstruct__5707VTable, nRetValue);
    }
    return 0;
}

int get_struct__5707_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return get_structure_signature(struct__5707_fields, 2, pfnStrAppend, pData);
}

int set_struct__5707_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__5707*)pValue)->k));
    set_kcg_real_default_value(&(((struct__5707*)pValue)->f));
    return 1;
}

int check_struct__5707_string(const char* str, const char** endptr)
{
    return string_to_struct__5707(str, NULL, endptr);
}

TypeUtils _Type_struct__5707_Utils = {
    struct__5707_to_string,
    check_struct__5707_string,
    string_to_struct__5707,
    is_struct__5707_double_convertion_allowed,
    struct__5707_to_double,
    compare_struct__5707,
    get_struct__5707_signature,
    set_struct__5707_default_value,
    sizeof(struct__5707)
};

/****************************************************************
 ** array_int_4 
 ****************************************************************/

struct SimTypeVTable* pSimarray_int_4VTable;

int array_int_4_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimarray_int_4VTable != NULL
        && pSimarray_int_4VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimarray_int_4VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 4, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_4(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimarray_int_4VTable != NULL
        && pSimarray_int_4VTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimarray_int_4VTable, pValue, endptr);
    }
    return pConverter->m_pfnStringToArray(str, pValue, string_to_kcg_int, 4, sizeof(kcg_int), endptr);
}

int is_array_int_4_double_convertion_allowed()
{
    if (pSimarray_int_4VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_4VTable);
    }
    return 0;
}

int compare_array_int_4(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimarray_int_4VTable != NULL
        && pSimarray_int_4VTable->m_version >= Scv612
        && pSimarray_int_4VTable->m_pfnCompare != NULL)
        return pSimarray_int_4VTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnArrayComparison(pStatus, pValue1, pValue2, 
                compare_kcg_int, 4, sizeof(kcg_int), pData);
}

int array_int_4_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_4VTable != NULL) {
        return  VTable_to_double(pValue, pSimarray_int_4VTable, nRetValue);
    }
    return 0;
}

int get_array_int_4_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 4; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    return 1;
}

int set_array_int_4_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 4; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_4_string(const char* str, const char** endptr)
{
    return string_to_array_int_4(str, NULL, endptr);
}

TypeUtils _Type_array_int_4_Utils = {
    array_int_4_to_string,
    check_array_int_4_string,
    string_to_array_int_4,
    is_array_int_4_double_convertion_allowed,
    array_int_4_to_double,
    compare_array_int_4,
    get_array_int_4_signature,
    set_array_int_4_default_value,
    sizeof(array_int_4)
};

/****************************************************************
 ** struct__5715 
 ****************************************************************/

struct SimTypeVTable* pSimstruct__5715VTable;

static FieldUtils struct__5715_fields[] = {
    {"idx", offsetof(struct__5715,idx), &_Type_kcg_int_Utils},
    {"items", offsetof(struct__5715,items), &_Type_array_int_4_Utils},
};

int struct__5715_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimstruct__5715VTable != NULL
        && pSimstruct__5715VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimstruct__5715VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__5715_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__5715(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimstruct__5715VTable != NULL
        && pSimstruct__5715VTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimstruct__5715VTable, pValue, endptr);
    }
    return pConverter->m_pfnStringToStructure(str, pValue, struct__5715_fields, 2, endptr);
}

int is_struct__5715_double_convertion_allowed()
{
    if (pSimstruct__5715VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__5715VTable);
    }
    return 0;
}

int compare_struct__5715(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimstruct__5715VTable != NULL
        && pSimstruct__5715VTable->m_version >= Scv612
        && pSimstruct__5715VTable->m_pfnCompare != NULL)
        return pSimstruct__5715VTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnStructureComparison(pStatus, pValue1, pValue2, struct__5715_fields, 2, pData);
}

int struct__5715_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__5715VTable != NULL) {
        return  VTable_to_double(pValue, pSimstruct__5715VTable, nRetValue);
    }
    return 0;
}

int get_struct__5715_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return get_structure_signature(struct__5715_fields, 2, pfnStrAppend, pData);
}

int set_struct__5715_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__5715*)pValue)->idx));
    set_array_int_4_default_value(&(((struct__5715*)pValue)->items));
    return 1;
}

int check_struct__5715_string(const char* str, const char** endptr)
{
    return string_to_struct__5715(str, NULL, endptr);
}

TypeUtils _Type_struct__5715_Utils = {
    struct__5715_to_string,
    check_struct__5715_string,
    string_to_struct__5715,
    is_struct__5715_double_convertion_allowed,
    struct__5715_to_double,
    compare_struct__5715,
    get_struct__5715_signature,
    set_struct__5715_default_value,
    sizeof(struct__5715)
};

/****************************************************************
 ** array_real_4 
 ****************************************************************/

struct SimTypeVTable* pSimarray_real_4VTable;

int array_real_4_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimarray_real_4VTable != NULL
        && pSimarray_real_4VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimarray_real_4VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_real_to_string, 4, sizeof(kcg_real), pfnStrAppend, pData);
}

int string_to_array_real_4(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimarray_real_4VTable != NULL
        && pSimarray_real_4VTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimarray_real_4VTable, pValue, endptr);
    }
    return pConverter->m_pfnStringToArray(str, pValue, string_to_kcg_real, 4, sizeof(kcg_real), endptr);
}

int is_array_real_4_double_convertion_allowed()
{
    if (pSimarray_real_4VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_real_4VTable);
    }
    return 0;
}

int compare_array_real_4(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimarray_real_4VTable != NULL
        && pSimarray_real_4VTable->m_version >= Scv612
        && pSimarray_real_4VTable->m_pfnCompare != NULL)
        return pSimarray_real_4VTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnArrayComparison(pStatus, pValue1, pValue2, 
                compare_kcg_real, 4, sizeof(kcg_real), pData);
}

int array_real_4_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_real_4VTable != NULL) {
        return  VTable_to_double(pValue, pSimarray_real_4VTable, nRetValue);
    }
    return 0;
}

int get_array_real_4_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 4; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_real_signature(pfnStrAppend, pData);
    }
    return 1;
}

int set_array_real_4_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 4; i++)
        set_kcg_real_default_value(&((kcg_real*)pValue)[i]);
    return 1;
}

int check_array_real_4_string(const char* str, const char** endptr)
{
    return string_to_array_real_4(str, NULL, endptr);
}

TypeUtils _Type_array_real_4_Utils = {
    array_real_4_to_string,
    check_array_real_4_string,
    string_to_array_real_4,
    is_array_real_4_double_convertion_allowed,
    array_real_4_to_double,
    compare_array_real_4,
    get_array_real_4_signature,
    set_array_real_4_default_value,
    sizeof(array_real_4)
};

/****************************************************************
 ** struct__5723 
 ****************************************************************/

struct SimTypeVTable* pSimstruct__5723VTable;

static FieldUtils struct__5723_fields[] = {
    {"idx", offsetof(struct__5723,idx), &_Type_kcg_int_Utils},
    {"items", offsetof(struct__5723,items), &_Type_array_real_4_Utils},
};

int struct__5723_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimstruct__5723VTable != NULL
        && pSimstruct__5723VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimstruct__5723VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__5723_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__5723(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimstruct__5723VTable != NULL
        && pSimstruct__5723VTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimstruct__5723VTable, pValue, endptr);
    }
    return pConverter->m_pfnStringToStructure(str, pValue, struct__5723_fields, 2, endptr);
}

int is_struct__5723_double_convertion_allowed()
{
    if (pSimstruct__5723VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__5723VTable);
    }
    return 0;
}

int compare_struct__5723(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimstruct__5723VTable != NULL
        && pSimstruct__5723VTable->m_version >= Scv612
        && pSimstruct__5723VTable->m_pfnCompare != NULL)
        return pSimstruct__5723VTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnStructureComparison(pStatus, pValue1, pValue2, struct__5723_fields, 2, pData);
}

int struct__5723_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__5723VTable != NULL) {
        return  VTable_to_double(pValue, pSimstruct__5723VTable, nRetValue);
    }
    return 0;
}

int get_struct__5723_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return get_structure_signature(struct__5723_fields, 2, pfnStrAppend, pData);
}

int set_struct__5723_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__5723*)pValue)->idx));
    set_array_real_4_default_value(&(((struct__5723*)pValue)->items));
    return 1;
}

int check_struct__5723_string(const char* str, const char** endptr)
{
    return string_to_struct__5723(str, NULL, endptr);
}

TypeUtils _Type_struct__5723_Utils = {
    struct__5723_to_string,
    check_struct__5723_string,
    string_to_struct__5723,
    is_struct__5723_double_convertion_allowed,
    struct__5723_to_double,
    compare_struct__5723,
    get_struct__5723_signature,
    set_struct__5723_default_value,
    sizeof(struct__5723)
};

/****************************************************************
 ** TruthTableValues_truthtables 
 ****************************************************************/

struct SimTypeVTable* pSimTruthTableValues_truthtablesVTable;

static EnumValUtils TruthTableValues_truthtables_values[] = {
    { "truthtables::T", T_truthtables},
    { "T", T_truthtables},
    { "truthtables::F", F_truthtables},
    { "F", F_truthtables},
    { "truthtables::X", X_truthtables},
    { "X", X_truthtables},
};

int TruthTableValues_truthtables_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimTruthTableValues_truthtablesVTable != NULL
        && pSimTruthTableValues_truthtablesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimTruthTableValues_truthtablesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(TruthTableValues_truthtables*)pValue, TruthTableValues_truthtables_values, 6, pfnStrAppend, pData);
}

int string_to_TruthTableValues_truthtables(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimTruthTableValues_truthtablesVTable != NULL
        && pSimTruthTableValues_truthtablesVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimTruthTableValues_truthtablesVTable, pValue, endptr);
    }
    {
        int nTemp = 0;
        int nRet = pConverter->m_pfnStringToEnum(str, &nTemp, TruthTableValues_truthtables_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(TruthTableValues_truthtables*)pValue = nTemp;
        return nRet;
    }
}

int is_TruthTableValues_truthtables_double_convertion_allowed()
{
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTruthTableValues_truthtablesVTable);
    }
    return 1;
}

int compare_TruthTableValues_truthtables(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimTruthTableValues_truthtablesVTable != NULL
        && pSimTruthTableValues_truthtablesVTable->m_version >= Scv612
        && pSimTruthTableValues_truthtablesVTable->m_pfnCompare != NULL)
        return pSimTruthTableValues_truthtablesVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnEnumComparison(pStatus, *(TruthTableValues_truthtables*)pValue1, *(TruthTableValues_truthtables*)pValue2, TruthTableValues_truthtables_values, 6, pData);
}

int TruthTableValues_truthtables_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        return  VTable_to_double(pValue, pSimTruthTableValues_truthtablesVTable, nRetValue);
    }
    *nRetValue = (double)*((TruthTableValues_truthtables*)pValue);
    return 1;
}

int get_TruthTableValues_truthtables_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return get_enum_signature(TruthTableValues_truthtables_values, 6, pfnStrAppend, pData);
}

int set_TruthTableValues_truthtables_default_value(void *pValue)
{
    *(TruthTableValues_truthtables*)pValue = T_truthtables;
    return 1;
}

int check_TruthTableValues_truthtables_string(const char* str, const char** endptr)
{
    return string_to_TruthTableValues_truthtables(str, NULL, endptr);
}

TypeUtils _Type_TruthTableValues_truthtables_Utils = {
    TruthTableValues_truthtables_to_string,
    check_TruthTableValues_truthtables_string,
    string_to_TruthTableValues_truthtables,
    is_TruthTableValues_truthtables_double_convertion_allowed,
    TruthTableValues_truthtables_to_double,
    compare_TruthTableValues_truthtables,
    get_TruthTableValues_truthtables_signature,
    set_TruthTableValues_truthtables_default_value,
    sizeof(TruthTableValues_truthtables)
};

/****************************************************************
 ** LutIndex_lut 
 ****************************************************************/

struct SimTypeVTable* pSimLutIndex_lutVTable;

int LutIndex_lut_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimLutIndex_lutVTable != NULL
        && pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimLutIndex_lutVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__5707_to_string(pValue, pfnStrAppend, pData);
}

int string_to_LutIndex_lut(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimLutIndex_lutVTable != NULL
        && pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimLutIndex_lutVTable, pValue, endptr);
    }
    return string_to_struct__5707(str, pValue, endptr);
}

int is_LutIndex_lut_double_convertion_allowed()
{
    if (pSimLutIndex_lutVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimLutIndex_lutVTable);
    }
    return is_struct__5707_double_convertion_allowed();
}

int compare_LutIndex_lut(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimLutIndex_lutVTable != NULL
        && pSimLutIndex_lutVTable->m_version >= Scv612
        && pSimLutIndex_lutVTable->m_pfnCompare != NULL)
        return pSimLutIndex_lutVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return compare_struct__5707(pStatus, pValue1, pValue2, pData);
}

int LutIndex_lut_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLutIndex_lutVTable != NULL) {
        return  VTable_to_double(pValue, pSimLutIndex_lutVTable, nRetValue);
    }
    return struct__5707_to_double(pValue, nRetValue);
}

int get_LutIndex_lut_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return get_struct__5707_signature(pfnStrAppend, pData);
}

int set_LutIndex_lut_default_value(void *pValue)
{
    return set_struct__5707_default_value(pValue);
}

int check_LutIndex_lut_string(const char* str, const char** endptr)
{
    return string_to_LutIndex_lut(str, NULL, endptr);
}

TypeUtils _Type_LutIndex_lut_Utils = {
    LutIndex_lut_to_string,
    check_LutIndex_lut_string,
    string_to_LutIndex_lut,
    is_LutIndex_lut_double_convertion_allowed,
    LutIndex_lut_to_double,
    compare_LutIndex_lut,
    get_LutIndex_lut_signature,
    set_LutIndex_lut_default_value,
    sizeof(LutIndex_lut)
};

