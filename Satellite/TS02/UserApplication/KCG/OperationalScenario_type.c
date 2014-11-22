
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "OperationalScenario_type.h"
#include "OperationalScenario_mapping.h"

extern ScSimulator * pSimulator;

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
int _SCSIM_BoolEntity_is_active(void* pValue) {
	return *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
}

/****************************************************************
 ** Type utils declarations
 ****************************************************************/
TypeUtils _SCSIM_kcg_real_Utils = {kcg_real_to_string,
	check_kcg_real_string,
	string_to_kcg_real,
	is_kcg_real_allow_double_convertion,
	kcg_real_to_double,
	compare_kcg_real_type,
	get_kcg_real_signature,
	get_kcg_real_filter_utils,
	kcg_real_filter_size,
	kcg_real_filter_values};
TypeUtils _SCSIM_kcg_bool_Utils = {kcg_bool_to_string,
	check_kcg_bool_string,
	string_to_kcg_bool,
	is_kcg_bool_allow_double_convertion,
	kcg_bool_to_double,
	compare_kcg_bool_type,
	get_kcg_bool_signature,
	get_kcg_bool_filter_utils,
	kcg_bool_filter_size,
	kcg_bool_filter_values};
TypeUtils _SCSIM_kcg_char_Utils = {kcg_char_to_string,
	check_kcg_char_string,
	string_to_kcg_char,
	is_kcg_char_allow_double_convertion,
	kcg_char_to_double,
	compare_kcg_char_type,
	get_kcg_char_signature,
	get_kcg_char_filter_utils,
	kcg_char_filter_size,
	kcg_char_filter_values};
TypeUtils _SCSIM_kcg_int_Utils = {kcg_int_to_string,
	check_kcg_int_string,
	string_to_kcg_int,
	is_kcg_int_allow_double_convertion,
	kcg_int_to_double,
	compare_kcg_int_type,
	get_kcg_int_signature,
	get_kcg_int_filter_utils,
	kcg_int_filter_size,
	kcg_int_filter_values};
TypeUtils _SCSIM_struct__5854_Utils = {struct__5854_to_string,
	check_struct__5854_string,
	string_to_struct__5854,
	is_struct__5854_allow_double_convertion,
	0,
	compare_struct__5854_type,
	get_struct__5854_signature,
	get_struct__5854_filter_utils,
	struct__5854_filter_size,
	struct__5854_filter_values};
TypeUtils _SCSIM_fr_Utils = {fr_to_string,
	check_fr_string,
	string_to_fr,
	is_fr_allow_double_convertion,
	fr_to_double,
	compare_fr_type,
	get_fr_signature,
	get_fr_filter_utils,
	fr_filter_size,
	fr_filter_values};
TypeUtils _SCSIM_TruthTableValues_truthtables_Utils = {TruthTableValues_truthtables_to_string,
	check_TruthTableValues_truthtables_string,
	string_to_TruthTableValues_truthtables,
	is_TruthTableValues_truthtables_allow_double_convertion,
	TruthTableValues_truthtables_to_double,
	compare_TruthTableValues_truthtables_type,
	get_TruthTableValues_truthtables_signature,
	get_TruthTableValues_truthtables_filter_utils,
	TruthTableValues_truthtables_filter_size,
	TruthTableValues_truthtables_filter_values};
TypeUtils _SCSIM_LutIndex_lut_Utils = {LutIndex_lut_to_string,
	check_LutIndex_lut_string,
	string_to_LutIndex_lut,
	is_LutIndex_lut_allow_double_convertion,
	LutIndex_lut_to_double,
	compare_LutIndex_lut_type,
	get_LutIndex_lut_signature,
	get_LutIndex_lut_filter_utils,
	LutIndex_lut_filter_size,
	LutIndex_lut_filter_values};

/****************************************************************
 ** kcg_real
 ****************************************************************/
struct SimTypeVTable* pSimDoubleVTable;
const char * kcg_real_to_string(const void* pValue) {
	if (pSimDoubleVTable != 0 && pSimDoubleVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		double value = (double)(*(const kcg_real*)pValue);
		return *(char**)pSimDoubleVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnRealToString((double)(*(const kcg_real*)pValue));
}

int string_to_kcg_real(const char* strValue, void* pValue) {
	double nTemp = 0;
	static double rTemp;
	int nResult;
	if (pSimDoubleVTable != 0 && pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimDoubleVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_real*)pValue = (kcg_real)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToReal(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_real*)pValue = (kcg_real)nTemp;
	return nResult;
}

int compare_kcg_real_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_real rTemp;
	const kcg_real* pCurrent = (const kcg_real*)pValue;
	if (string_to_kcg_real(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_real_allow_double_convertion() {
	if (pSimDoubleVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_real_to_double(double * nValue, const void* pValue) {
	if (pSimDoubleVTable != 0) {
		double value = (double)(*(const kcg_real*)pValue);
		if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimDoubleVTable->m_pfnToType(SptDouble, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimDoubleVTable->m_pfnToType(SptFloat, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimDoubleVTable->m_pfnToType(SptLong, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimDoubleVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_real*)pValue);
	return 1;
}

const char * get_kcg_real_signature() {
	return "R";
}

int check_kcg_real_string(const char* strValue) {
	static kcg_real rTemp;
	return string_to_kcg_real(strValue, &rTemp);
}


/****************************************************************
 ** kcg_bool
 ****************************************************************/
struct SimTypeVTable* pSimBoolVTable;
const char * kcg_bool_to_string(const void* pValue) {
	if (pSimBoolVTable != 0 && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
		return *(char**)pSimBoolVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnBoolToString((*(const kcg_bool*)pValue) == kcg_true ? 1 : 0);
}

int string_to_kcg_bool(const char* strValue, void* pValue) {
	int nTemp = 0;
	static SimBool rTemp;
	int nResult;
	if (pSimBoolVTable != 0 && pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimBoolVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((kcg_bool*)pValue) = (rTemp == SbTrue)? kcg_true : kcg_false;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToBool(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_bool*)pValue = nTemp == 1 ? kcg_true : kcg_false;
	return nResult;
}

int compare_kcg_bool_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_bool rTemp;
	const kcg_bool* pCurrent = (const kcg_bool*)pValue;
	if (string_to_kcg_bool(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_bool_allow_double_convertion() {
	if (pSimBoolVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_bool_to_double(double * nValue, const void* pValue) {
	if (pSimBoolVTable != 0) {
		SimBool value = (*(const kcg_bool*)pValue == kcg_true)? SbTrue : SbFalse;
		if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBoolVTable->m_pfnToType(SptDouble, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBoolVTable->m_pfnToType(SptFloat, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBoolVTable->m_pfnToType(SptLong, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBoolVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = *((const kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
	return 1;
}

const char * get_kcg_bool_signature() {
	return "B";
}

int check_kcg_bool_string(const char* strValue) {
	static kcg_bool rTemp;
	return string_to_kcg_bool(strValue, &rTemp);
}


/****************************************************************
 ** kcg_char
 ****************************************************************/
struct SimTypeVTable* pSimCharVTable;
const char * kcg_char_to_string(const void* pValue) {
	if (pSimCharVTable != 0 && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		char value = (char)(*(const kcg_char*)pValue);
		return *(char**)pSimCharVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnCharToString((char)(*(const kcg_char*)pValue));
}

int string_to_kcg_char(const char* strValue, void* pValue) {
	char nTemp = 0;
	static char rTemp;
	int nResult;
	if (pSimCharVTable != 0 && pSimCharVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimCharVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_char*)pValue = (kcg_char)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToChar(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_char*)pValue = (kcg_char)nTemp;
	return nResult;
}

int compare_kcg_char_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_char rTemp;
	const kcg_char* pCurrent = (const kcg_char*)pValue;
	if (string_to_kcg_char(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_char_allow_double_convertion() {
	if (pSimCharVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_char_to_double(double * nValue, const void* pValue) {
	if (pSimCharVTable != 0) {
		char value = (char)(*(const kcg_char*)pValue);
		if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCharVTable->m_pfnToType(SptDouble, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCharVTable->m_pfnToType(SptFloat, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCharVTable->m_pfnToType(SptLong, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCharVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_char*)pValue);
	return 1;
}

const char * get_kcg_char_signature() {
	return "C";
}

int check_kcg_char_string(const char* strValue) {
	static kcg_char rTemp;
	return string_to_kcg_char(strValue, &rTemp);
}


/****************************************************************
 ** kcg_int
 ****************************************************************/
struct SimTypeVTable* pSimLongVTable;
const char * kcg_int_to_string(const void* pValue) {
	if (pSimLongVTable != 0 && pSimLongVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		long value = (long)(*(const kcg_int*)pValue);
		return *(char**)pSimLongVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnIntToString(*(const int*)pValue);
}

int string_to_kcg_int(const char* strValue, void* pValue) {
	int nTemp = 0;
	static long rTemp;
	int nResult;
	if (pSimLongVTable != 0 && pSimLongVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimLongVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_int*)pValue = (kcg_int)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToInt(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_int*)pValue = (kcg_int)nTemp;
	return nResult;
}

int compare_kcg_int_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_int rTemp;
	const kcg_int* pCurrent = (const kcg_int*)pValue;
	if (string_to_kcg_int(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_int_allow_double_convertion() {
	if (pSimLongVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_int_to_double(double * nValue, const void* pValue) {
	if (pSimLongVTable != 0) {
		long value = (long)(*(const kcg_int*)pValue);
		if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLongVTable->m_pfnToType(SptDouble, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLongVTable->m_pfnToType(SptFloat, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLongVTable->m_pfnToType(SptLong, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLongVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_int*)pValue);
	return 1;
}

const char * get_kcg_int_signature() {
	return "I";
}

int check_kcg_int_string(const char* strValue) {
	static kcg_int rTemp;
	return string_to_kcg_int(strValue, &rTemp);
}


/****************************************************************
 ** struct__5854
 ****************************************************************/
static void Fill_struct__5854_StructSimValue(struct__5854 * pStruct, StructSimValue * pValues) {
	/*k label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->k) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "k";
	/*f label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->f) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[1].m_pszName = "f";
}

const char * struct__5854_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__5854_StructSimValue(((struct__5854*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__5854(const char* strValue, void* pValue) {
	static struct__5854 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__5854(&(rTemp), &(*((struct__5854*)pValue)));
	Fill_struct__5854_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__5854(&(*((struct__5854*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__5854_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__5854_StructSimValue((struct__5854*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__5854_allow_double_convertion() {
	return 0;
}


const char * get_struct__5854_signature() {
	static StructSimValue values[2];
	Fill_struct__5854_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__5854_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__5854_StructSimValue((struct__5854*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__5854_filter_values[2] = {"k", "f"};
int check_struct__5854_string(const char* strValue) {
	static struct__5854 rTemp;
	return string_to_struct__5854(strValue, &rTemp);
}


/****************************************************************
 ** fr
 ****************************************************************/
struct SimTypeVTable* pSimfrVTable;
const char * fr_to_string(const void* pValue) {
	if (pSimfrVTable != 0 && pSimfrVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimfrVTable->m_pfnToType(SptString, pValue);
	return kcg_real_to_string(pValue);
}

int string_to_fr(const char* strValue, void* pValue) {
	if (pSimfrVTable != 0 && pSimfrVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static fr rTemp;
		int nResult = pSimfrVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((fr*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_real(strValue, pValue);
}

int is_fr_allow_double_convertion() {
	if (pSimfrVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimfrVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimfrVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimfrVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimfrVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_real_allow_double_convertion();
}

int fr_to_double(double * nValue, const void* pValue) {
	if (pSimfrVTable != 0) {
		if (pSimfrVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimfrVTable->m_pfnToType(SptLong, pValue));
		else if (pSimfrVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimfrVTable->m_pfnToType(SptShort, pValue));
		else if (pSimfrVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimfrVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimfrVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimfrVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_real_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_real_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_fr_string(const char* strValue) {
	static fr rTemp;
	return string_to_fr(strValue, &rTemp);
}


/****************************************************************
 ** TruthTableValues_truthtables
 ****************************************************************/
struct SimTypeVTable* pSimTruthTableValues_truthtablesVTable;
const char * TruthTableValues_truthtables_to_string(const void* pValue) {
	if (pSimTruthTableValues_truthtablesVTable != 0 && pSimTruthTableValues_truthtablesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTruthTableValues_truthtablesVTable->m_pfnToType(SptString, pValue);
	switch (*((TruthTableValues_truthtables*)pValue)) {
	case T_truthtables:
		return "truthtables::T";
	case F_truthtables:
		return "truthtables::F";
	case X_truthtables:
		return "truthtables::X";
	default:
		return "?";
	}
}

int string_to_TruthTableValues_truthtables(const char* strValue, void* pValue) {
	if (pSimTruthTableValues_truthtablesVTable != 0 && pSimTruthTableValues_truthtablesVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		TruthTableValues_truthtables rTemp;		int nResult = pSimTruthTableValues_truthtablesVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((TruthTableValues_truthtables*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "T") == 0 || strcmp(strValue, "truthtables::T") == 0)
		*((TruthTableValues_truthtables*)pValue) = T_truthtables;
	else if(strcmp(strValue, "F") == 0 || strcmp(strValue, "truthtables::F") == 0)
		*((TruthTableValues_truthtables*)pValue) = F_truthtables;
	else if(strcmp(strValue, "X") == 0 || strcmp(strValue, "truthtables::X") == 0)
		*((TruthTableValues_truthtables*)pValue) = X_truthtables;
	else 
		return 0;
	return 1;
}

int is_TruthTableValues_truthtables_allow_double_convertion() {
	return 1;
}


int TruthTableValues_truthtables_to_double(double * nValue, const void* pValue) {
	switch (*((TruthTableValues_truthtables*)pValue)) {
	case T_truthtables:
		*nValue = 0.0;
		break;
	case F_truthtables:
		*nValue = 1.0;
		break;
	case X_truthtables:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_TruthTableValues_truthtables_type(int* pResult, const char* toCompare, const void* pValue) {
	static TruthTableValues_truthtables rTemp;
	const TruthTableValues_truthtables* pCurrent = (const TruthTableValues_truthtables*)pValue;
	if (string_to_TruthTableValues_truthtables(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_TruthTableValues_truthtables_signature() {
	return "E"
		"|truthtables::T"
		"|truthtables::F"
		"|truthtables::X"
		;
}

int check_TruthTableValues_truthtables_string(const char* strValue) {
	static TruthTableValues_truthtables rTemp;
	return string_to_TruthTableValues_truthtables(strValue, &rTemp);
}


/****************************************************************
 ** LutIndex_lut
 ****************************************************************/
struct SimTypeVTable* pSimLutIndex_lutVTable;
const char * LutIndex_lut_to_string(const void* pValue) {
	if (pSimLutIndex_lutVTable != 0 && pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimLutIndex_lutVTable->m_pfnToType(SptString, pValue);
	return struct__5854_to_string(pValue);
}

int string_to_LutIndex_lut(const char* strValue, void* pValue) {
	if (pSimLutIndex_lutVTable != 0 && pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static LutIndex_lut rTemp;
		int nResult = pSimLutIndex_lutVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__5854(&(*((LutIndex_lut*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__5854(strValue, pValue);
}

int is_LutIndex_lut_allow_double_convertion() {
	if (pSimLutIndex_lutVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__5854_allow_double_convertion();
}

int LutIndex_lut_to_double(double * nValue, const void* pValue) {
	if (pSimLutIndex_lutVTable != 0) {
		if (pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLutIndex_lutVTable->m_pfnToType(SptLong, pValue));
		else if (pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLutIndex_lutVTable->m_pfnToType(SptShort, pValue));
		else if (pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLutIndex_lutVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimLutIndex_lutVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLutIndex_lutVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__5854_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__5854_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_LutIndex_lut_string(const char* strValue) {
	static LutIndex_lut rTemp;
	return string_to_LutIndex_lut(strValue, &rTemp);
}


