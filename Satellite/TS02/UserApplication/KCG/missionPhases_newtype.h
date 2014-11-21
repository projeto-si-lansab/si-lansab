#ifndef MISSIONPHASES_TYPES_CONVERTION
#define MISSIONPHASES_TYPES_CONVERTION

#include "NewSmuTypes.h"

/****************************************************************
 ** SSM_ST_OpPhases 
 ****************************************************************/
extern int SSM_ST_OpPhases_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_SSM_ST_OpPhases_string(const char *str, const char** endptr);
extern int string_to_SSM_ST_OpPhases(const char *str, void* pValue, const char** endptr);
extern int is_SSM_ST_OpPhases_allow_double_convertion();
extern int SSM_ST_OpPhases_to_double(const void* pValue, double *nValue);
extern int get_SSM_ST_OpPhases_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_SSM_ST_OpPhases(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_SSM_ST_OpPhases_default_value(void *pValue);
extern TypeUtils _Type_SSM_ST_OpPhases_Utils;

/****************************************************************
 ** SSM_TR_OpPhases 
 ****************************************************************/
extern int SSM_TR_OpPhases_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_SSM_TR_OpPhases_string(const char *str, const char** endptr);
extern int string_to_SSM_TR_OpPhases(const char *str, void* pValue, const char** endptr);
extern int is_SSM_TR_OpPhases_allow_double_convertion();
extern int SSM_TR_OpPhases_to_double(const void* pValue, double *nValue);
extern int get_SSM_TR_OpPhases_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_SSM_TR_OpPhases(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_SSM_TR_OpPhases_default_value(void *pValue);
extern TypeUtils _Type_SSM_TR_OpPhases_Utils;

/****************************************************************
 ** kcg_real 
 ****************************************************************/
extern int kcg_real_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_kcg_real_string(const char *str, const char** endptr);
extern int string_to_kcg_real(const char *str, void* pValue, const char** endptr);
extern int is_kcg_real_allow_double_convertion();
extern int kcg_real_to_double(const void* pValue, double *nValue);
extern int get_kcg_real_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_kcg_real(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_kcg_real_default_value(void *pValue);
extern TypeUtils _Type_kcg_real_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_kcg_bool_string(const char *str, const char** endptr);
extern int string_to_kcg_bool(const char *str, void* pValue, const char** endptr);
extern int is_kcg_bool_allow_double_convertion();
extern int kcg_bool_to_double(const void* pValue, double *nValue);
extern int get_kcg_bool_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_kcg_bool_default_value(void *pValue);
extern TypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_kcg_char_string(const char *str, const char** endptr);
extern int string_to_kcg_char(const char *str, void* pValue, const char** endptr);
extern int is_kcg_char_allow_double_convertion();
extern int kcg_char_to_double(const void* pValue, double *nValue);
extern int get_kcg_char_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_kcg_char_default_value(void *pValue);
extern TypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_int 
 ****************************************************************/
extern int kcg_int_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_kcg_int_string(const char *str, const char** endptr);
extern int string_to_kcg_int(const char *str, void* pValue, const char** endptr);
extern int is_kcg_int_allow_double_convertion();
extern int kcg_int_to_double(const void* pValue, double *nValue);
extern int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_kcg_int(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_kcg_int_default_value(void *pValue);
extern TypeUtils _Type_kcg_int_Utils;

/****************************************************************
 ** struct__5302 
 ****************************************************************/
extern int struct__5302_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_struct__5302_string(const char *str, const char** endptr);
extern int string_to_struct__5302(const char *str, void* pValue, const char** endptr);
extern int is_struct__5302_allow_double_convertion();
extern int struct__5302_to_double(const void* pValue, double *nValue);
extern int get_struct__5302_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_struct__5302(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_struct__5302_default_value(void *pValue);
extern TypeUtils _Type_struct__5302_Utils;

/****************************************************************
 ** TruthTableValues_truthtables 
 ****************************************************************/
extern int TruthTableValues_truthtables_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_TruthTableValues_truthtables_string(const char *str, const char** endptr);
extern int string_to_TruthTableValues_truthtables(const char *str, void* pValue, const char** endptr);
extern int is_TruthTableValues_truthtables_allow_double_convertion();
extern int TruthTableValues_truthtables_to_double(const void* pValue, double *nValue);
extern int get_TruthTableValues_truthtables_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_TruthTableValues_truthtables(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_TruthTableValues_truthtables_default_value(void *pValue);
extern TypeUtils _Type_TruthTableValues_truthtables_Utils;

/****************************************************************
 ** LutIndex_lut 
 ****************************************************************/
extern int LutIndex_lut_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_LutIndex_lut_string(const char *str, const char** endptr);
extern int string_to_LutIndex_lut(const char *str, void* pValue, const char** endptr);
extern int is_LutIndex_lut_allow_double_convertion();
extern int LutIndex_lut_to_double(const void* pValue, double *nValue);
extern int get_LutIndex_lut_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_LutIndex_lut(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_LutIndex_lut_default_value(void *pValue);
extern TypeUtils _Type_LutIndex_lut_Utils;


#endif /*MISSIONPHASES_TYPES_CONVERTION */
