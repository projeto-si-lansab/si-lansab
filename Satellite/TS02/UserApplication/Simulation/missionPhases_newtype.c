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
    { "Launch:<2>", SSM_TR_Launch_2_OpPhases},
    { "Launch:<2>", SSM_TR_Launch_2_OpPhases},
    { "AttitudeAcquisition:<1>", SSM_TR_AttitudeAcquisition_1_OpPhases},
    { "AttitudeAcquisition:<1>", SSM_TR_AttitudeAcquisition_1_OpPhases},
    { "AttitudeAcquisition:<2>", SSM_TR_AttitudeAcquisition_2_OpPhases},
    { "AttitudeAcquisition:<2>", SSM_TR_AttitudeAcquisition_2_OpPhases},
};

int SSM_TR_OpPhases_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimSSM_TR_OpPhasesVTable != NULL
        && pSimSSM_TR_OpPhasesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimSSM_TR_OpPhasesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_OpPhases*)pValue, SSM_TR_OpPhases_values, 14, pfnStrAppend, pData);
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
        int nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_OpPhases_values, 14, endptr);
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
    return pConverter->m_pfnEnumComparison(pStatus, *(SSM_TR_OpPhases*)pValue1, *(SSM_TR_OpPhases*)pValue2, SSM_TR_OpPhases_values, 14, pData);
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
    return get_enum_signature(SSM_TR_OpPhases_values, 14, pfnStrAppend, pData);
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
 ** SSM_ST_atacquisition_OpPhases_AttitudeAcquisition 
 ****************************************************************/

struct SimTypeVTable* pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable;

static EnumValUtils SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_values[] = {
    { "readsensors", SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition},
    { "readsensors", SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition},
    { "refAttitude", SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition},
    { "refAttitude", SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition},
    { "SafeMode", SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition},
    { "SafeMode", SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition},
};

int SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable != NULL
        && pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pValue, SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_values, 6, pfnStrAppend, pData);
}

int string_to_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable != NULL
        && pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable, pValue, endptr);
    }
    {
        int nTemp = 0;
        int nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pValue = nTemp;
        return nRet;
    }
}

int is_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_double_convertion_allowed()
{
    if (pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable);
    }
    return 1;
}

int compare_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable != NULL
        && pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_version >= Scv612
        && pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_pfnCompare != NULL)
        return pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnEnumComparison(pStatus, *(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pValue1, *(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pValue2, SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_values, 6, pData);
}

int SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable != NULL) {
        return  VTable_to_double(pValue, pSimSSM_ST_atacquisition_OpPhases_AttitudeAcquisitionVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pValue);
    return 1;
}

int get_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_values, 6, pfnStrAppend, pData);
}

int set_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_default_value(void *pValue)
{
    *(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pValue = SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
    return 1;
}

int check_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_string(const char* str, const char** endptr)
{
    return string_to_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition(str, NULL, endptr);
}

TypeUtils _Type_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_Utils = {
    SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_to_string,
    check_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_string,
    string_to_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition,
    is_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_double_convertion_allowed,
    SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_to_double,
    compare_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition,
    get_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_signature,
    set_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_default_value,
    sizeof(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition)
};

/****************************************************************
 ** SSM_TR_atacquisition_OpPhases_AttitudeAcquisition 
 ****************************************************************/

struct SimTypeVTable* pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable;

static EnumValUtils SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_values[] = {
    { "SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_no_trans", 0},
    { "SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_no_trans", 0},
    { "readsensors:<1>", SSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisition},
    { "readsensors:<1>", SSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisition},
    { "readsensors:<2>", SSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisition},
    { "readsensors:<2>", SSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisition},
    { "refAttitude:<1>", SSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisition},
    { "refAttitude:<1>", SSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisition},
    { "refAttitude:<2>", SSM_TR_refAttitude_2_atacquisition_OpPhases_AttitudeAcquisition},
    { "refAttitude:<2>", SSM_TR_refAttitude_2_atacquisition_OpPhases_AttitudeAcquisition},
    { "SafeMode:<1>", SSM_TR_SafeMode_1_atacquisition_OpPhases_AttitudeAcquisition},
    { "SafeMode:<1>", SSM_TR_SafeMode_1_atacquisition_OpPhases_AttitudeAcquisition},
};

int SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable != NULL
        && pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_atacquisition_OpPhases_AttitudeAcquisition*)pValue, SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_values, 12, pfnStrAppend, pData);
}

int string_to_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable != NULL
        && pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable, pValue, endptr);
    }
    {
        int nTemp = 0;
        int nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_values, 12, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_atacquisition_OpPhases_AttitudeAcquisition*)pValue = nTemp;
        return nRet;
    }
}

int is_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_double_convertion_allowed()
{
    if (pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable);
    }
    return 1;
}

int compare_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable != NULL
        && pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_version >= Scv612
        && pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_pfnCompare != NULL)
        return pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnEnumComparison(pStatus, *(SSM_TR_atacquisition_OpPhases_AttitudeAcquisition*)pValue1, *(SSM_TR_atacquisition_OpPhases_AttitudeAcquisition*)pValue2, SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_values, 12, pData);
}

int SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable != NULL) {
        return  VTable_to_double(pValue, pSimSSM_TR_atacquisition_OpPhases_AttitudeAcquisitionVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_atacquisition_OpPhases_AttitudeAcquisition*)pValue);
    return 1;
}

int get_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_values, 12, pfnStrAppend, pData);
}

int set_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_default_value(void *pValue)
{
    *(SSM_TR_atacquisition_OpPhases_AttitudeAcquisition*)pValue = 0;
    return 1;
}

int check_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_string(const char* str, const char** endptr)
{
    return string_to_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition(str, NULL, endptr);
}

TypeUtils _Type_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_Utils = {
    SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_to_string,
    check_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_string,
    string_to_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition,
    is_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_double_convertion_allowed,
    SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_to_double,
    compare_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition,
    get_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_signature,
    set_SSM_TR_atacquisition_OpPhases_AttitudeAcquisition_default_value,
    sizeof(SSM_TR_atacquisition_OpPhases_AttitudeAcquisition)
};

/****************************************************************
 ** SSM_ST_NPhase_OpPhases_NormalPhase 
 ****************************************************************/

struct SimTypeVTable* pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable;

static EnumValUtils SSM_ST_NPhase_OpPhases_NormalPhase_values[] = {
    { "AttControl", SSM_st_AttControl_OpPhases_NormalPhase_NPhase},
    { "AttControl", SSM_st_AttControl_OpPhases_NormalPhase_NPhase},
    { "Payload", SSM_st_Payload_OpPhases_NormalPhase_NPhase},
    { "Payload", SSM_st_Payload_OpPhases_NormalPhase_NPhase},
    { "SafeMode", SSM_st_SafeMode_OpPhases_NormalPhase_NPhase},
    { "SafeMode", SSM_st_SafeMode_OpPhases_NormalPhase_NPhase},
};

int SSM_ST_NPhase_OpPhases_NormalPhase_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable != NULL
        && pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_NPhase_OpPhases_NormalPhase*)pValue, SSM_ST_NPhase_OpPhases_NormalPhase_values, 6, pfnStrAppend, pData);
}

int string_to_SSM_ST_NPhase_OpPhases_NormalPhase(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable != NULL
        && pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable, pValue, endptr);
    }
    {
        int nTemp = 0;
        int nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_NPhase_OpPhases_NormalPhase_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_NPhase_OpPhases_NormalPhase*)pValue = nTemp;
        return nRet;
    }
}

int is_SSM_ST_NPhase_OpPhases_NormalPhase_double_convertion_allowed()
{
    if (pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable);
    }
    return 1;
}

int compare_SSM_ST_NPhase_OpPhases_NormalPhase(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable != NULL
        && pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable->m_version >= Scv612
        && pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable->m_pfnCompare != NULL)
        return pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnEnumComparison(pStatus, *(SSM_ST_NPhase_OpPhases_NormalPhase*)pValue1, *(SSM_ST_NPhase_OpPhases_NormalPhase*)pValue2, SSM_ST_NPhase_OpPhases_NormalPhase_values, 6, pData);
}

int SSM_ST_NPhase_OpPhases_NormalPhase_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable != NULL) {
        return  VTable_to_double(pValue, pSimSSM_ST_NPhase_OpPhases_NormalPhaseVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_NPhase_OpPhases_NormalPhase*)pValue);
    return 1;
}

int get_SSM_ST_NPhase_OpPhases_NormalPhase_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_NPhase_OpPhases_NormalPhase_values, 6, pfnStrAppend, pData);
}

int set_SSM_ST_NPhase_OpPhases_NormalPhase_default_value(void *pValue)
{
    *(SSM_ST_NPhase_OpPhases_NormalPhase*)pValue = SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
    return 1;
}

int check_SSM_ST_NPhase_OpPhases_NormalPhase_string(const char* str, const char** endptr)
{
    return string_to_SSM_ST_NPhase_OpPhases_NormalPhase(str, NULL, endptr);
}

TypeUtils _Type_SSM_ST_NPhase_OpPhases_NormalPhase_Utils = {
    SSM_ST_NPhase_OpPhases_NormalPhase_to_string,
    check_SSM_ST_NPhase_OpPhases_NormalPhase_string,
    string_to_SSM_ST_NPhase_OpPhases_NormalPhase,
    is_SSM_ST_NPhase_OpPhases_NormalPhase_double_convertion_allowed,
    SSM_ST_NPhase_OpPhases_NormalPhase_to_double,
    compare_SSM_ST_NPhase_OpPhases_NormalPhase,
    get_SSM_ST_NPhase_OpPhases_NormalPhase_signature,
    set_SSM_ST_NPhase_OpPhases_NormalPhase_default_value,
    sizeof(SSM_ST_NPhase_OpPhases_NormalPhase)
};

/****************************************************************
 ** SSM_TR_NPhase_OpPhases_NormalPhase 
 ****************************************************************/

struct SimTypeVTable* pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable;

static EnumValUtils SSM_TR_NPhase_OpPhases_NormalPhase_values[] = {
    { "SSM_TR_NPhase_OpPhases_NormalPhase_no_trans", 0},
    { "SSM_TR_NPhase_OpPhases_NormalPhase_no_trans", 0},
    { "AttControl:<1>", SSM_TR_AttControl_1_NPhase_OpPhases_NormalPhase},
    { "AttControl:<1>", SSM_TR_AttControl_1_NPhase_OpPhases_NormalPhase},
    { "AttControl:<2>", SSM_TR_AttControl_2_NPhase_OpPhases_NormalPhase},
    { "AttControl:<2>", SSM_TR_AttControl_2_NPhase_OpPhases_NormalPhase},
    { "Payload:<2>", SSM_TR_Payload_2_NPhase_OpPhases_NormalPhase},
    { "Payload:<2>", SSM_TR_Payload_2_NPhase_OpPhases_NormalPhase},
    { "Payload:<1>", SSM_TR_Payload_1_NPhase_OpPhases_NormalPhase},
    { "Payload:<1>", SSM_TR_Payload_1_NPhase_OpPhases_NormalPhase},
    { "SafeMode:<1>", SSM_TR_SafeMode_1_NPhase_OpPhases_NormalPhase},
    { "SafeMode:<1>", SSM_TR_SafeMode_1_NPhase_OpPhases_NormalPhase},
};

int SSM_TR_NPhase_OpPhases_NormalPhase_to_string(const void* pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    if (pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable != NULL
        && pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        return pfnStrAppend(*(char**)pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_NPhase_OpPhases_NormalPhase*)pValue, SSM_TR_NPhase_OpPhases_NormalPhase_values, 12, pfnStrAppend, pData);
}

int string_to_SSM_TR_NPhase_OpPhases_NormalPhase(const char* str, void* pValue, const char** endptr)
{
    skip_whitespace(str);
    if (pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable != NULL
        && pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        return string_to_VTable(str, pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable, pValue, endptr);
    }
    {
        int nTemp = 0;
        int nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_NPhase_OpPhases_NormalPhase_values, 12, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_NPhase_OpPhases_NormalPhase*)pValue = nTemp;
        return nRet;
    }
}

int is_SSM_TR_NPhase_OpPhases_NormalPhase_double_convertion_allowed()
{
    if (pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable);
    }
    return 1;
}

int compare_SSM_TR_NPhase_OpPhases_NormalPhase(int *pStatus, const void* pValue1, const void* pValue2, void *pData)
{
    if (pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable != NULL
        && pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable->m_version >= Scv612
        && pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable->m_pfnCompare != NULL)
        return pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable->m_pfnCompare(pStatus, pValue1, pValue2);
    return pConverter->m_pfnEnumComparison(pStatus, *(SSM_TR_NPhase_OpPhases_NormalPhase*)pValue1, *(SSM_TR_NPhase_OpPhases_NormalPhase*)pValue2, SSM_TR_NPhase_OpPhases_NormalPhase_values, 12, pData);
}

int SSM_TR_NPhase_OpPhases_NormalPhase_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable != NULL) {
        return  VTable_to_double(pValue, pSimSSM_TR_NPhase_OpPhases_NormalPhaseVTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_NPhase_OpPhases_NormalPhase*)pValue);
    return 1;
}

int get_SSM_TR_NPhase_OpPhases_NormalPhase_signature(int (*pfnStrAppend)(const char* str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_NPhase_OpPhases_NormalPhase_values, 12, pfnStrAppend, pData);
}

int set_SSM_TR_NPhase_OpPhases_NormalPhase_default_value(void *pValue)
{
    *(SSM_TR_NPhase_OpPhases_NormalPhase*)pValue = 0;
    return 1;
}

int check_SSM_TR_NPhase_OpPhases_NormalPhase_string(const char* str, const char** endptr)
{
    return string_to_SSM_TR_NPhase_OpPhases_NormalPhase(str, NULL, endptr);
}

TypeUtils _Type_SSM_TR_NPhase_OpPhases_NormalPhase_Utils = {
    SSM_TR_NPhase_OpPhases_NormalPhase_to_string,
    check_SSM_TR_NPhase_OpPhases_NormalPhase_string,
    string_to_SSM_TR_NPhase_OpPhases_NormalPhase,
    is_SSM_TR_NPhase_OpPhases_NormalPhase_double_convertion_allowed,
    SSM_TR_NPhase_OpPhases_NormalPhase_to_double,
    compare_SSM_TR_NPhase_OpPhases_NormalPhase,
    get_SSM_TR_NPhase_OpPhases_NormalPhase_signature,
    set_SSM_TR_NPhase_OpPhases_NormalPhase_default_value,
    sizeof(SSM_TR_NPhase_OpPhases_NormalPhase)
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

