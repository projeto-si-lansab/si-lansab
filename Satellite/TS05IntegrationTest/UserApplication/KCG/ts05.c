/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GitHub/si-lansab/Satellite/TS05IntegrationTest/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-22T22:19:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ts05.h"

void ts05_reset(outC_ts05 *outC)
{
  outC->init = kcg_true;
}

/* ts05 */
void ts05(inC_ts05 *inC, outC_ts05 *outC)
{
  /* linear::MemoryBasic::_L2 */ kcg_int _L2_3;
  /* linear::MemoryBasic::_L5 */ kcg_bool _L5_3;
  /* linear::MemoryBasic::_L6 */ kcg_int _L6_3;
  /* linear::MemoryBasic::_L7 */ kcg_int _L7_3;
  /* linear::MemoryBasic::Memorized */ kcg_int Memorized_3;
  /* linear::MemoryBasic::Write */ kcg_bool Write_3;
  /* linear::MemoryBasic::Init */ kcg_int Init_3;
  /* linear::MemoryBasic::BM_Input */ kcg_int BM_Input_3;
  /* linear::MemoryBasic::_L2 */ kcg_int _L2_2;
  /* linear::MemoryBasic::_L5 */ kcg_bool _L5_2;
  /* linear::MemoryBasic::_L6 */ kcg_int _L6_2;
  /* linear::MemoryBasic::_L7 */ kcg_int _L7_2;
  /* linear::MemoryBasic::Memorized */ kcg_int Memorized_2;
  /* linear::MemoryBasic::Write */ kcg_bool Write_2;
  /* linear::MemoryBasic::Init */ kcg_int Init_2;
  /* linear::MemoryBasic::BM_Input */ kcg_int BM_Input_2;
  /* linear::MemoryBasic::_L2 */ kcg_int _L2_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _L5_1;
  /* linear::MemoryBasic::_L6 */ kcg_int _L6_1;
  /* linear::MemoryBasic::_L7 */ kcg_int _L7_1;
  /* linear::MemoryBasic::Memorized */ kcg_int Memorized_1;
  /* linear::MemoryBasic::Write */ kcg_bool Write_1;
  /* linear::MemoryBasic::Init */ kcg_int Init_1;
  /* linear::MemoryBasic::BM_Input */ kcg_int BM_Input_1;
  /* TEST_SAT_Signal::_L4 */ kcg_int _L4_16;
  /* TEST_SAT_Signal::_L1 */ kcg_int _L1_16;
  /* TEST_SAT_Signal::_L6 */ kcg_bool _L6_16;
  /* TEST_SAT_Signal::_L7 */ kcg_bool _L7_16;
  /* TEST_SAT_Signal::_L8 */ kcg_int _L8_16;
  /* TEST_SAT_Signal::_L9 */ kcg_int _L9_16;
  /* TEST_SAT_Signal::_L11 */ kcg_int _L11_16;
  /* TEST_SAT_Signal::CDS_Color */ kcg_int CDS_Color_16;
  /* TEST_SAT_Signal::NewState */ kcg_bool NewState_16;
  /* TEST_SAT_Signal::Notify */ kcg_bool Notify_16;
  /* TEST_SAT_Signal::_L4 */ kcg_int _L4_15;
  /* TEST_SAT_Signal::_L1 */ kcg_int _L1_15;
  /* TEST_SAT_Signal::_L6 */ kcg_bool _L6_15;
  /* TEST_SAT_Signal::_L7 */ kcg_bool _L7_15;
  /* TEST_SAT_Signal::_L8 */ kcg_int _L8_15;
  /* TEST_SAT_Signal::_L9 */ kcg_int _L9_15;
  /* TEST_SAT_Signal::_L11 */ kcg_int _L11_15;
  /* TEST_SAT_Signal::CDS_Color */ kcg_int CDS_Color_15;
  /* TEST_SAT_Signal::NewState */ kcg_bool NewState_15;
  /* TEST_SAT_Signal::Notify */ kcg_bool Notify_15;
  /* TEST_SAT_Signal::_L4 */ kcg_int _L4_14;
  /* TEST_SAT_Signal::_L1 */ kcg_int _L1_14;
  /* TEST_SAT_Signal::_L6 */ kcg_bool _L6_14;
  /* TEST_SAT_Signal::_L7 */ kcg_bool _L7_14;
  /* TEST_SAT_Signal::_L8 */ kcg_int _L8_14;
  /* TEST_SAT_Signal::_L9 */ kcg_int _L9_14;
  /* TEST_SAT_Signal::_L11 */ kcg_int _L11_14;
  /* TEST_SAT_Signal::CDS_Color */ kcg_int CDS_Color_14;
  /* TEST_SAT_Signal::NewState */ kcg_bool NewState_14;
  /* TEST_SAT_Signal::Notify */ kcg_bool Notify_14;
  /* TEST_SAT_Signal::_L4 */ kcg_int _L4_13;
  /* TEST_SAT_Signal::_L1 */ kcg_int _L1_13;
  /* TEST_SAT_Signal::_L6 */ kcg_bool _L6_13;
  /* TEST_SAT_Signal::_L7 */ kcg_bool _L7_13;
  /* TEST_SAT_Signal::_L8 */ kcg_int _L8_13;
  /* TEST_SAT_Signal::_L9 */ kcg_int _L9_13;
  /* TEST_SAT_Signal::_L11 */ kcg_int _L11_13;
  /* TEST_SAT_Signal::CDS_Color */ kcg_int CDS_Color_13;
  /* TEST_SAT_Signal::NewState */ kcg_bool NewState_13;
  /* TEST_SAT_Signal::Notify */ kcg_bool Notify_13;
  /* ts05::AutoVerify */ kcg_bool AutoVerify;
  /* ts05::_L3 */ kcg_bool _L3;
  /* ts05::_L14 */ kcg_bool _L14;
  /* ts05::_L111 */ kcg_real _L111;
  /* ts05::_L110 */ kcg_real _L110;
  /* ts05::_L109 */ kcg_bool _L109;
  /* ts05::_L108 */ kcg_real _L108;
  /* ts05::_L107 */ kcg_real _L107;
  /* ts05::_L106 */ kcg_bool _L106;
  /* ts05::_L105 */ kcg_bool _L105;
  /* ts05::_L104 */ kcg_bool _L104;
  /* ts05::_L103 */ kcg_real _L103;
  /* ts05::_L102 */ kcg_real _L102;
  /* ts05::_L101 */ kcg_bool _L101;
  /* ts05::_L100 */ kcg_bool _L100;
  /* ts05::_L189 */ kcg_bool _L189;
  /* ts05::_L188 */ OperationMode _L188;
  /* ts05::_L187 */ kcg_bool _L187;
  /* ts05::_L186 */ OperationMode _L186;
  /* ts05::_L185 */ kcg_bool _L185;
  /* ts05::_L184 */ kcg_bool _L184;
  /* ts05::_L183 */ kcg_bool _L183;
  /* ts05::_L182 */ kcg_bool _L182;
  /* ts05::_L181 */ kcg_bool _L181;
  /* ts05::_L180 */ kcg_int _L180;
  /* ts05::_L179 */ kcg_bool _L179;
  /* ts05::_L178 */ kcg_bool _L178;
  /* ts05::_L177 */ kcg_bool _L177;
  /* ts05::_L176 */ kcg_bool _L176;
  /* ts05::_L175 */ OperationMode _L175;
  /* ts05::_L174 */ kcg_int _L174;
  /* ts05::_L173 */ kcg_bool _L173;
  /* ts05::_L172 */ OperationMode _L172;
  /* ts05::_L171 */ kcg_int _L171;
  /* ts05::_L170 */ kcg_int _L170;
  /* ts05::_L169 */ kcg_bool _L169;
  /* ts05::_L168 */ OperationMode _L168;
  /* ts05::_L167 */ OperationMode _L167;
  /* ts05::_L166 */ OperationMode _L166;
  /* ts05::_L165 */ kcg_bool _L165;
  /* ts05::_L164 */ OperationMode _L164;
  /* ts05::_L163 */ kcg_bool _L163;
  /* ts05::_L162 */ kcg_bool _L162;
  /* ts05::_L161 */ kcg_bool _L161;
  /* ts05::_L160 */ kcg_bool _L160;
  /* ts05::_L159 */ OperationMode _L159;
  /* ts05::_L158 */ OperationMode _L158;
  /* ts05::_L157 */ kcg_int _L157;
  /* ts05::_L201 */ kcg_bool _L201;
  /* ts05::_L200 */ kcg_int _L200;
  /* ts05::_L199 */ kcg_bool _L199;
  /* ts05::_L198 */ kcg_int _L198;
  /* ts05::_L197 */ kcg_bool _L197;
  /* ts05::_L196 */ kcg_bool _L196;
  /* ts05::_L195 */ kcg_int _L195;
  /* ts05::_L194 */ kcg_bool _L194;
  /* ts05::_L193 */ kcg_bool _L193;
  /* ts05::_L192 */ kcg_bool _L192;
  /* ts05::_L191 */ kcg_int _L191;
  /* ts05::_L190 */ kcg_bool _L190;
  /* ts05::_L210 */ kcg_int _L210;
  /* ts05::_L206 */ kcg_bool _L206;
  /* ts05::_L204 */ kcg_int _L204;
  /* ts05::_L202 */ kcg_int _L202;
  /* ts05::_L225 */ kcg_int _L225;
  /* ts05::_L224 */ kcg_int _L224;
  /* ts05::_L223 */ kcg_bool _L223;
  /* ts05::_L221 */ kcg_int _L221;
  /* ts05::_L220 */ kcg_int _L220;
  /* ts05::_L219 */ kcg_int _L219;
  /* ts05::_L217 */ kcg_bool _L217;
  /* ts05::_L215 */ kcg_bool _L215;
  /* ts05::_L227 */ kcg_bool _L227;
  /* ts05::_L228 */ kcg_bool _L228;
  /* ts05::_L229 */ kcg_int _L229;
  /* ts05::_L230 */ kcg_int _L230;
  /* ts05::_L231 */ kcg_int _L231;
  /* ts05::_L232 */ kcg_bool _L232;
  /* ts05::_L234 */ kcg_bool _L234;
  /* ts05::_L235 */ kcg_bool _L235;
  /* ts05::_L236 */ kcg_bool _L236;
  /* ts05::_L237 */ kcg_bool _L237;
  /* ts05::_L238 */ kcg_int _L238;
  /* ts05::_L239 */ kcg_int _L239;
  /* ts05::_L240 */ kcg_int _L240;
  /* ts05::_L244 */ kcg_bool _L244;
  /* ts05::_L247 */ kcg_bool _L247;
  /* ts05::_L249 */ kcg_bool _L249;
  /* ts05::_L250 */ kcg_bool _L250;
  /* ts05::_L252 */ kcg_bool _L252;
  /* ts05::_L259 */ kcg_bool _L259;
  /* ts05::_L258 */ kcg_bool _L258;
  /* ts05::_L257 */ kcg_bool _L257;
  /* ts05::_L256 */ kcg_bool _L256;
  /* ts05::_L254 */ kcg_bool _L254;
  /* ts05::_L272 */ kcg_bool _L272;
  /* ts05::_L271 */ kcg_bool _L271;
  /* ts05::_L268 */ kcg_bool _L268;
  /* ts05::_L267 */ kcg_bool _L267;
  /* ts05::_L266 */ kcg_bool _L266;
  /* ts05::_L273 */ kcg_bool _L273;
  /* ts05::_L274 */ kcg_bool _L274;
  /* ts05::_L275 */ kcg_bool _L275;
  /* ts05::_L276 */ kcg_bool _L276;
  /* ts05::_L277 */ kcg_int _L277;
  /* ts05::_L278 */ kcg_int _L278;
  /* ts05::_L279 */ kcg_int _L279;
  /* ts05::_L281 */ kcg_int _L281;
  /* ts05::_L283 */ kcg_int _L283;
  /* ts05::_L284 */ kcg_int _L284;
  
  _L236 = inC->_1_Test_HorizonSensor_Fail_Status_Changed;
  Write_3 = _L236;
  Init_3 = 0;
  _L235 = inC->Test_Gyroscope_Fail_Status_Changed;
  Write_2 = _L235;
  Init_2 = 0;
  _L234 = inC->TEST_Camera_Fail_Status_Changed;
  Write_1 = _L234;
  Init_1 = 0;
  _L196 = inC->SAT_PropellersState_ToggleTo;
  NewState_16 = _L196;
  _L194 = inC->SAT_CameraState_ToggleTo;
  NewState_15 = _L194;
  _L199 = inC->SAT_HorizonSensorState_ToggleTo;
  NewState_14 = _L199;
  _L192 = inC->SAT_GyroscopeState_ToggleTo;
  NewState_13 = _L192;
  _L232 = inC->SAT_Auto_Verify;
  _L276 = inC->SAT_Fix_Equipments;
  _L275 = _L232 | _L276;
  AutoVerify = _L275;
  _L237 = AutoVerify;
  outC->SAT_Fix_Response = _L237;
  _L7_3 = Init_3;
  if (outC->init) {
    _L6_3 = _L7_3;
  }
  else {
    _L6_3 = outC->_L4_3;
  }
  _L5_3 = Write_3;
  _L240 = inC->Test_HorizonSensor_Fail_Status_Value;
  BM_Input_3 = _L240;
  _L2_3 = BM_Input_3;
  if (_L5_3) {
    outC->_L4_3 = _L2_3;
  }
  else {
    outC->_L4_3 = _L6_3;
  }
  Memorized_3 = outC->_L4_3;
  _L284 = Memorized_3;
  _L7_2 = Init_2;
  if (outC->init) {
    _L6_2 = _L7_2;
  }
  else {
    _L6_2 = outC->_L4_2;
  }
  _L5_2 = Write_2;
  _L239 = inC->Test_Gyroscope_Fail_Status_Value;
  BM_Input_2 = _L239;
  _L2_2 = BM_Input_2;
  if (_L5_2) {
    outC->_L4_2 = _L2_2;
  }
  else {
    outC->_L4_2 = _L6_2;
  }
  Memorized_2 = outC->_L4_2;
  _L283 = Memorized_2;
  _L7_1 = Init_1;
  if (outC->init) {
    _L6_1 = _L7_1;
  }
  else {
    _L6_1 = outC->_L4_1;
  }
  _L5_1 = Write_1;
  _L238 = inC->TEST_Camera_Fail_Status_Value;
  BM_Input_1 = _L238;
  _L2_1 = BM_Input_1;
  if (_L5_1) {
    outC->_L4_1 = _L2_1;
  }
  else {
    outC->_L4_1 = _L6_1;
  }
  Memorized_1 = outC->_L4_1;
  _L281 = Memorized_1;
  _L279 = CDS_COLOR_GREEN;
  _L278 = CDS_COLOR_GRAY;
  if (_L275) {
    _L277 = _L279;
  }
  else {
    _L277 = _L278;
  }
  outC->Test_Auto_Verify = _L277;
  _L273 = AutoVerify;
  _L272 = kcg_true;
  _L266 = kcg_false;
  switch (_L284) {
    case 1 :
      _L268 = _L272;
      break;
    
    default :
      _L268 = _L266;
  }
  _L271 = kcg_false;
  if (_L273) {
    _L267 = _L268;
  }
  else {
    _L267 = _L271;
  }
  outC->SAT_HorizonSensorState_Fail = _L267;
  _L274 = AutoVerify;
  _L257 = kcg_true;
  _L258 = kcg_false;
  switch (_L283) {
    case 1 :
      _L256 = _L257;
      break;
    
    default :
      _L256 = _L258;
  }
  _L259 = kcg_false;
  if (_L274) {
    _L254 = _L256;
  }
  else {
    _L254 = _L259;
  }
  outC->SAT_GyroscopeState_Fail = _L254;
  _L249 = kcg_true;
  _L250 = kcg_false;
  switch (_L281) {
    case 1 :
      _L244 = _L249;
      break;
    
    default :
      _L244 = _L250;
  }
  _L252 = kcg_false;
  if (_L237) {
    _L247 = _L244;
  }
  else {
    _L247 = _L252;
  }
  outC->SAT_CameraState_Fail = _L247;
  _L228 = inC->cam_take_picture;
  _L230 = CDS_COLOR_GREEN;
  _L231 = CDS_COLOR_GRAY;
  if (_L228) {
    _L229 = _L230;
  }
  else {
    _L229 = _L231;
  }
  outC->display_picture_resquest_state = _L229;
  _L227 = inC->envia_foto_btn;
  outC->cam_picture_loaded = _L227;
  _L215 = inC->TEST_SAT_Initialization_Fail;
  _L223 = inC->TEST_SAT_Ejection_Signal;
  outC->SAT_Ejection_Signal = _L223;
  _L217 = inC->TEST_SAT_Initialization_Success;
  _L221 = 1;
  _L220 = 0;
  if (_L217) {
    _L219 = _L221;
  }
  else {
    _L219 = _L220;
  }
  _L224 = 2;
  if (_L215) {
    _L225 = _L224;
  }
  else {
    _L225 = _L219;
  }
  outC->SAT_Initialization_Signal = _L225;
  _L206 = inC->SAT_Initialize;
  _L202 = CDS_COLOR_GREEN;
  _L204 = CDS_COLOR_GRAY;
  if (_L206) {
    _L210 = _L202;
  }
  else {
    _L210 = _L204;
  }
  outC->TEST_SAT_Initialize_Signal = _L210;
  _L201 = inC->SAT_CameraState_Toggle;
  _L190 = inC->SAT_PropellersState_Toggle;
  Notify_16 = _L190;
  _L6_16 = Notify_16;
  _L7_16 = NewState_16;
  _L9_16 = CDS_COLOR_GREEN;
  _L11_16 = CDS_COLOR_YELLOW;
  if (_L7_16) {
    _L1_16 = _L9_16;
  }
  else {
    _L1_16 = _L11_16;
  }
  _L8_16 = CDS_COLOR_GRAY;
  if (_L6_16) {
    _L4_16 = _L1_16;
  }
  else {
    _L4_16 = _L8_16;
  }
  CDS_Color_16 = _L4_16;
  _L200 = CDS_Color_16;
  _L197 = inC->SAT_GyroscopeState_Toggle;
  Notify_13 = _L197;
  _L6_13 = Notify_13;
  _L7_13 = NewState_13;
  _L9_13 = CDS_COLOR_GREEN;
  _L11_13 = CDS_COLOR_YELLOW;
  if (_L7_13) {
    _L1_13 = _L9_13;
  }
  else {
    _L1_13 = _L11_13;
  }
  _L8_13 = CDS_COLOR_GRAY;
  if (_L6_13) {
    _L4_13 = _L1_13;
  }
  else {
    _L4_13 = _L8_13;
  }
  CDS_Color_13 = _L4_13;
  _L191 = CDS_Color_13;
  outC->TEST_SAT_GyroscopeState_Signal = _L191;
  Notify_15 = _L201;
  _L6_15 = Notify_15;
  _L7_15 = NewState_15;
  _L9_15 = CDS_COLOR_GREEN;
  _L11_15 = CDS_COLOR_YELLOW;
  if (_L7_15) {
    _L1_15 = _L9_15;
  }
  else {
    _L1_15 = _L11_15;
  }
  _L8_15 = CDS_COLOR_GRAY;
  if (_L6_15) {
    _L4_15 = _L1_15;
  }
  else {
    _L4_15 = _L8_15;
  }
  CDS_Color_15 = _L4_15;
  _L198 = CDS_Color_15;
  outC->TEST_SAT_PropellersState_Signal = _L200;
  outC->TEST_SAT_CameraState_Signal = _L198;
  _L193 = inC->SAT_HorizonSensorState_Toggle;
  Notify_14 = _L193;
  _L6_14 = Notify_14;
  _L7_14 = NewState_14;
  _L9_14 = CDS_COLOR_GREEN;
  _L11_14 = CDS_COLOR_YELLOW;
  if (_L7_14) {
    _L1_14 = _L9_14;
  }
  else {
    _L1_14 = _L11_14;
  }
  _L8_14 = CDS_COLOR_GRAY;
  if (_L6_14) {
    _L4_14 = _L1_14;
  }
  else {
    _L4_14 = _L8_14;
  }
  CDS_Color_14 = _L4_14;
  _L195 = CDS_Color_14;
  outC->TEST_SAT_HorizonSensorState_Signal = _L195;
  _L182 = inC->TEST_SAT_OperationMode_Update;
  if (outC->init) {
    _L162 = kcg_true;
  }
  else {
    _L162 = _L182;
  }
  outC->SAT_OperationMode_Update = _L162;
  _L189 = kcg_true;
  _L188 = OPMODE_GROUND_SUPPORT;
  _L157 = inC->TEST_SAT_HorizonSensorState_Value;
  _L183 = kcg_true;
  _L184 = kcg_false;
  switch (_L157) {
    case 1 :
      _L187 = _L183;
      break;
    
    default :
      _L187 = _L184;
  }
  _L186 = OPMODE_GROUND_SAFE;
  outC->SAT_HorizonSensorState_Value = _L187;
  _L185 = inC->TEST_SAT_GyroscopeState_Update;
  _L180 = inC->TEST_SAT_CameraState_Value;
  _L165 = kcg_false;
  switch (_L180) {
    case 1 :
      _L181 = _L189;
      break;
    
    default :
      _L181 = _L165;
  }
  _L179 = kcg_true;
  _L178 = kcg_false;
  _L161 = inC->TEST_SAT_CameraState_Update;
  outC->SAT_CameraState_Update = _L161;
  _L177 = inC->TEST_SAT_PropellersState_Update;
  _L170 = inC->TEST_SAT_GyroscopeState_Value;
  _L169 = kcg_true;
  _L173 = kcg_false;
  switch (_L170) {
    case 1 :
      _L176 = _L169;
      break;
    
    default :
      _L176 = _L173;
  }
  _L175 = OPMODE_ATTITUDE_SAFE;
  _L160 = inC->TEST_SAT_HorizonSensorState_Update;
  outC->SAT_HorizonSensorState_Update = _L160;
  _L174 = inC->TEST_SAT_OperationMode_Value;
  _L172 = OPMODE_ATTITUDE_CONTROL;
  outC->SAT_CameraState_Value = _L181;
  _L171 = inC->TEST_SAT_PropellersState_Value;
  _L168 = OPMODE_NORMAL_SAFE;
  _L167 = OPMODE_LAUNCH;
  _L164 = OPMODE_NORMAL_ATTITUDE;
  _L159 = OPMODE_NORMAL_PAYLOAD;
  switch (_L174) {
    case 1 :
      _L166 = _L186;
      break;
    case 2 :
      _L166 = _L188;
      break;
    case 3 :
      _L166 = _L167;
      break;
    case 4 :
      _L166 = _L172;
      break;
    case 5 :
      _L166 = _L175;
      break;
    case 6 :
      _L166 = _L168;
      break;
    case 7 :
      _L166 = _L164;
      break;
    case 8 :
      _L166 = _L159;
      break;
    
    default :
      _L166 = _L186;
  }
  switch (_L171) {
    case 1 :
      _L163 = _L179;
      break;
    
    default :
      _L163 = _L178;
  }
  outC->SAT_PropellersState_Value = _L163;
  if (outC->init) {
    _L158 = OPMODE_GROUND_SAFE;
  }
  else {
    _L158 = _L166;
  }
  outC->SAT_OperationMode_Value = _L158;
  outC->SAT_GyroscopeState_Update = _L185;
  outC->SAT_GyroscopeState_Value = _L176;
  outC->SAT_PropellersState_Update = _L177;
  _L107 = inC->TEST_SAT_Period_Value;
  outC->SAT_Period_Value = _L107;
  _L109 = inC->TEST_SAT_Period_Update;
  outC->SAT_Period_Update = _L109;
  _L111 = inC->TEST_SAT_DeclinationAngle_Value;
  outC->SAT_DeclinationAngle_Value = _L111;
  _L101 = inC->TEST_SAT_DeclinationAngle_Update;
  outC->SAT_DeclinationAngle_Update = _L101;
  _L108 = inC->TEST_SAT_Longitude_Value;
  outC->SAT_Longitude_Value = _L108;
  _L105 = inC->TEST_SAT_Longitude_Update;
  outC->SAT_Longitude_Update = _L105;
  _L102 = inC->TEST_SAT_Latitude_Value;
  outC->SAT_Latitude_Value = _L102;
  _L100 = inC->TEST_SAT_Latitude_Update;
  outC->SAT_Latitude_Update = _L100;
  _L110 = inC->TEST_SAT_Altitude_Value;
  outC->SAT_Altitude_Value = _L110;
  _L104 = inC->TEST_SAT_Altitude_Update;
  outC->SAT_Altitude_Update = _L104;
  _L103 = inC->TEST_SAT_AirSpeed_Value;
  outC->SAT_AirSpeed_Value = _L103;
  _L106 = inC->TEST_SAT_AirSpeed_Update;
  outC->SAT_AirSpeed_Update = _L106;
  if (outC->init) {
    _L3 = kcg_true;
  }
  else {
    _L3 = outC->_L2;
  }
  outC->CDS_Layer_Req_Active = _L3;
  outC->CDS_Layer_Req_Visible = _L3;
  _L14 = kcg_true;
  outC->CDS_Emit = _L14;
  outC->_L2 = kcg_false;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ts05.c
** Generation date: 2014-11-22T22:19:16
*************************************************************$ */

