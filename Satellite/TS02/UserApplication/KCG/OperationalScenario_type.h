#ifndef OPERATIONALSCENARIO_TYPES_CONVERTION
#define OPERATIONALSCENARIO_TYPES_CONVERTION

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
extern int _SCSIM_BoolEntity_is_active(void* pValue);

/****************************************************************
 ** Type utils declarations
 ****************************************************************/
extern TypeUtils _SCSIM_kcg_real_Utils;
extern TypeUtils _SCSIM_kcg_bool_Utils;
extern TypeUtils _SCSIM_kcg_char_Utils;
extern TypeUtils _SCSIM_kcg_int_Utils;
extern TypeUtils _SCSIM_struct__5707_Utils;
extern TypeUtils _SCSIM_array_int_4_Utils;
extern TypeUtils _SCSIM_struct__5715_Utils;
extern TypeUtils _SCSIM_array_real_4_Utils;
extern TypeUtils _SCSIM_struct__5723_Utils;
extern TypeUtils _SCSIM_TruthTableValues_truthtables_Utils;
extern TypeUtils _SCSIM_LutIndex_lut_Utils;

/****************************************************************
 ** kcg_real
 ****************************************************************/
extern const char * kcg_real_to_string(const void* pValue);
extern int check_kcg_real_string(const char* strValue);
extern int string_to_kcg_real(const char* strValue, void* pValue);
int is_kcg_real_allow_double_convertion();
extern int kcg_real_to_double(double * nValue, const void*);
extern const char * get_kcg_real_signature();
extern int compare_kcg_real_type(int*, const char*, const void*);
#define kcg_real_filter_size 0
#define get_kcg_real_filter_utils 0
#define kcg_real_filter_values 0
/****************************************************************
 ** kcg_bool
 ****************************************************************/
extern const char * kcg_bool_to_string(const void* pValue);
extern int check_kcg_bool_string(const char* strValue);
extern int string_to_kcg_bool(const char* strValue, void* pValue);
int is_kcg_bool_allow_double_convertion();
extern int kcg_bool_to_double(double * nValue, const void*);
extern const char * get_kcg_bool_signature();
extern int compare_kcg_bool_type(int*, const char*, const void*);
#define kcg_bool_filter_size 0
#define get_kcg_bool_filter_utils 0
#define kcg_bool_filter_values 0
/****************************************************************
 ** kcg_char
 ****************************************************************/
extern const char * kcg_char_to_string(const void* pValue);
extern int check_kcg_char_string(const char* strValue);
extern int string_to_kcg_char(const char* strValue, void* pValue);
int is_kcg_char_allow_double_convertion();
extern int kcg_char_to_double(double * nValue, const void*);
extern const char * get_kcg_char_signature();
extern int compare_kcg_char_type(int*, const char*, const void*);
#define kcg_char_filter_size 0
#define get_kcg_char_filter_utils 0
#define kcg_char_filter_values 0
/****************************************************************
 ** kcg_int
 ****************************************************************/
extern const char * kcg_int_to_string(const void* pValue);
extern int check_kcg_int_string(const char* strValue);
extern int string_to_kcg_int(const char* strValue, void* pValue);
int is_kcg_int_allow_double_convertion();
extern int kcg_int_to_double(double * nValue, const void*);
extern const char * get_kcg_int_signature();
extern int compare_kcg_int_type(int*, const char*, const void*);
#define kcg_int_filter_size 0
#define get_kcg_int_filter_utils 0
#define kcg_int_filter_values 0
/****************************************************************
 ** struct__5707
 ****************************************************************/
extern const char * struct__5707_to_string(const void* pValue);
extern int check_struct__5707_string(const char* strValue);
extern int string_to_struct__5707(const char* strValue, void* pValue);
int is_struct__5707_allow_double_convertion();
extern const char * get_struct__5707_signature();
extern int compare_struct__5707_type(int*, const char*, const void*);
#define struct__5707_filter_size 2
extern FilterUtils get_struct__5707_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5707_filter_values[2];
/****************************************************************
 ** array_int_4
 ****************************************************************/
extern const char * array_int_4_to_string(const void* pValue);
extern int check_array_int_4_string(const char* strValue);
extern int string_to_array_int_4(const char* strValue, void* pValue);
int is_array_int_4_allow_double_convertion();
extern const char * get_array_int_4_signature();
extern int compare_array_int_4_type(int*, const char*, const void*);
#define array_int_4_filter_size 4
extern FilterUtils get_array_int_4_filter_utils(const char* strFilter, void* pValue);
#define array_int_4_filter_values 0
/****************************************************************
 ** struct__5715
 ****************************************************************/
extern const char * struct__5715_to_string(const void* pValue);
extern int check_struct__5715_string(const char* strValue);
extern int string_to_struct__5715(const char* strValue, void* pValue);
int is_struct__5715_allow_double_convertion();
extern const char * get_struct__5715_signature();
extern int compare_struct__5715_type(int*, const char*, const void*);
#define struct__5715_filter_size 2
extern FilterUtils get_struct__5715_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5715_filter_values[2];
/****************************************************************
 ** array_real_4
 ****************************************************************/
extern const char * array_real_4_to_string(const void* pValue);
extern int check_array_real_4_string(const char* strValue);
extern int string_to_array_real_4(const char* strValue, void* pValue);
int is_array_real_4_allow_double_convertion();
extern const char * get_array_real_4_signature();
extern int compare_array_real_4_type(int*, const char*, const void*);
#define array_real_4_filter_size 4
extern FilterUtils get_array_real_4_filter_utils(const char* strFilter, void* pValue);
#define array_real_4_filter_values 0
/****************************************************************
 ** struct__5723
 ****************************************************************/
extern const char * struct__5723_to_string(const void* pValue);
extern int check_struct__5723_string(const char* strValue);
extern int string_to_struct__5723(const char* strValue, void* pValue);
int is_struct__5723_allow_double_convertion();
extern const char * get_struct__5723_signature();
extern int compare_struct__5723_type(int*, const char*, const void*);
#define struct__5723_filter_size 2
extern FilterUtils get_struct__5723_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5723_filter_values[2];
/****************************************************************
 ** TruthTableValues_truthtables
 ****************************************************************/
extern const char * TruthTableValues_truthtables_to_string(const void* pValue);
extern int check_TruthTableValues_truthtables_string(const char* strValue);
extern int string_to_TruthTableValues_truthtables(const char* strValue, void* pValue);
int is_TruthTableValues_truthtables_allow_double_convertion();
extern int TruthTableValues_truthtables_to_double(double * nValue, const void*);
extern const char * get_TruthTableValues_truthtables_signature();
extern int compare_TruthTableValues_truthtables_type(int*, const char*, const void*);
#define TruthTableValues_truthtables_filter_size 0
#define get_TruthTableValues_truthtables_filter_utils 0
#define TruthTableValues_truthtables_filter_values 0
/****************************************************************
 ** LutIndex_lut
 ****************************************************************/
extern const char * LutIndex_lut_to_string(const void* pValue);
extern int check_LutIndex_lut_string(const char* strValue);
extern int string_to_LutIndex_lut(const char* strValue, void* pValue);
int is_LutIndex_lut_allow_double_convertion();
extern int LutIndex_lut_to_double(double * nValue, const void*);
#define get_LutIndex_lut_signature get_struct__5707_signature
#define compare_LutIndex_lut_type compare_struct__5707_type
#define LutIndex_lut_filter_size struct__5707_filter_size
#define get_LutIndex_lut_filter_utils get_struct__5707_filter_utils
#define LutIndex_lut_filter_values struct__5707_filter_values

#endif /*OPERATIONALSCENARIO_TYPES_CONVERTION */
