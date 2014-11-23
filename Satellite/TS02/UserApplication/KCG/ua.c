#include "kcg_sensors.h"
#include "ua.h"

/**
** File ..\UserApplication\KCG\ua.c
**
** Automatically generated by SCADE Suite UA Adaptor
** Version 6.4.2 (build i25)
**
** Date of generation: 2014-11-22T23:48:36
** Command line:  $ uaadaptor.exe -n 'C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE Display\config\Workspace\environments\UAPageCreator\A661Norm\a661.xml' -o 'ua' -outdir '..\UserApplication\KCG\' -k '..\UserApplication\KCG\kcg_trace.xml -d '..\DefinitionFile\INTEGRATION_SatelliteControlCommunication_DFDF\SatelliteControlCommunication_DF.sgfx' ..\UserApplication\missionPhases.sdy
**/

/*The following types must be consistent with the types use by the kcg generated code*/
#ifndef a661_uchar
#define a661_uchar kcg_int
#endif

#ifndef a661_short
#define a661_short kcg_int
#endif

#ifndef a661_ushort
#define a661_ushort kcg_int
#endif

#ifndef a661_ulong
#define a661_ulong kcg_int
#endif

#ifndef a661_long
#define a661_long kcg_int
#endif

#ifndef a661_bool
#define a661_bool kcg_bool
#endif

#ifndef a661_float
#define a661_float kcg_real
#endif

#ifndef A661_INTERNAL
#define A661_INTERNAL static
/*static inline*/
#endif

#ifndef GET_BYTE
#define GET_BYTE(n,d) (((unsigned)d)>>((n)*8)) & 0xFF
#endif

#ifndef GET_BYTE_0
#define GET_BYTE_0(d) GET_BYTE(0,d)
#endif

#ifndef GET_BYTE_1
#define GET_BYTE_1(d) GET_BYTE(1,d)
#endif

#ifndef GET_BYTE_2
#define GET_BYTE_2(d) GET_BYTE(2,d)
#endif

#ifndef GET_BYTE_3
#define GET_BYTE_3(d) GET_BYTE(3,d)
#endif

/*'do {} while(0)' is a clean way to ensure the macro behaves like a normal function*/

#ifndef WRITE_USHORT
#define WRITE_USHORT(msg,d)  do { *(msg) = GET_BYTE_1((unsigned short)(d)); *(msg+1) = GET_BYTE_0((unsigned short)(d)); } while (0)
#endif

#ifndef WRITE_ULONG
#define WRITE_ULONG(msg,d)  do { *(msg) = GET_BYTE_3((unsigned long)(d)); *(msg+1) = GET_BYTE_2((unsigned long)(d)); *(msg+2) = GET_BYTE_1((unsigned long)d); *(msg+3) = GET_BYTE_0((unsigned long)d); } while (0)
#endif

#ifndef WRITE_FLOAT
A661_INTERNAL void WRITE_FLOAT(buffer_el msg[], float d) {
 WRITE_ULONG( (msg),* ( (unsigned long *) (&(d)) )  );
}
#endif

#ifndef READ_BYTE
#define READ_BYTE(n,s,buffer) ( (*((buffer) + n) ) << 8*(s) ) 
#endif

#ifndef READ_USHORT
#define READ_USHORT(buffer)  ( READ_BYTE(0,1,buffer) + READ_BYTE(1,0,buffer) )
#endif

#ifndef READ_ULONG
#define READ_ULONG(buffer) ( READ_BYTE(0,3,buffer) + READ_BYTE(1,2,buffer) + READ_BYTE(2,1,buffer) + READ_BYTE(3,0,buffer) )
#endif

#ifndef READ_FLOAT
A661_INTERNAL float READ_FLOAT(const buffer_el buffer[]) 
{
	unsigned tmp = READ_ULONG(buffer);
        return  * ( (float *)(&tmp) );  
}
#endif

#ifndef a661_assign_string
#define a661_assign_string kcg_assign
#endif

#define A661_BEGIN_BLOCK 0xB0
#define A661_END_BLOCK 0XD0000000 /* Padding zero are included*/
#define A661_CMD_SET_PARAMETER 0xCA02

#define A661_NOTIFY_WIDGET_EVENT 0xCC01
#define A661_NOTIFY_EXCEPTION 0xCC03
#define A661_NOTIFY_LAYER_EVENT 0xCC02
#define A661_NOTE_REINIT_LAYER_DATA 0xDC01
#define A661_NOTE_LAYER_IS_ACTIVE 0xDC02
#define A661_NOTE_LAYER_IS_INACTIVE 0xDC03
#define A661_ERR_BAD_COMMAND 0xF001
#define A661_ERR_CREATE_ABORTED 0xF002
#define A661_ERR_SET_ABORTED 0xF003
#define A661_ERR_UA_REQUEST_ABORTED 0xF004
#define A661_ERR_MEMORY_OVERLOAD 0xF005
#define A661_ERR_PROCESS_OVERLOAD 0xF006
#define A661_ERR_RENDERING_OVERLOAD 0xF007

#ifndef TRUE
#define TRUE kcg_true
#define FALSE kcg_false
#endif

/*Block Structure Exchanged Between UA and CDS at Run Time*/
A661_INTERNAL int a661_msg_cmd_header(buffer_el msg[], const a661_uchar layer_id, 
                                       const a661_ushort context_number)
{
  msg[0] = GET_BYTE_0(A661_BEGIN_BLOCK);
  msg[1] = GET_BYTE_0(layer_id);
  msg[2] = GET_BYTE_1(context_number);
  msg[3] = GET_BYTE_0(context_number);
  return 4;
}

/*set_parameter_structure*/
A661_INTERNAL int a661_msg_csp_header(buffer_el msg[], const a661_ushort wid)
{
  msg[0]= GET_BYTE_1(A661_CMD_SET_PARAMETER);
  msg[1]= GET_BYTE_0(A661_CMD_SET_PARAMETER);
  /*size delayed*/
  msg[4]= GET_BYTE_1(wid);
  msg[5]= GET_BYTE_0(wid);
  msg[6]=0;/*padding*/
  msg[7]=0;
  return 8;
}

A661_INTERNAL int map_or (a661_bool input[], const int size){
  unsigned i=0; int res=0;
	if (input != 0) {
    for (i;i<size;i++){
      res = res || input[i];
    }
	} 
	
 return res;
}

/*Adds zeros to align the content of msg on a 32 bits multiple*/
/*Break is not present inside the switch case to reduce to the minimum the code size (its a feature)*/
A661_INTERNAL int align32(buffer_el msg[])
{
  int delta = ((unsigned)msg)%4;
  int n=4-delta;
  switch(delta)
    {
    case 1: msg[2]=0; 
    case 2: msg[1]=0; 
    case 3: msg[0]=0; break;
    default :
    case 0 : n=0; break;
    }
  return n;
}

A661_INTERNAL int align16(buffer_el msg[])
{
  int delta = ((unsigned)msg)%2;
  int n=2-delta;
  switch(delta)
    {
    case 1: msg[2]=0; break;
    default :
    case 0 : n=0; break;
    }
  return n;
}

A661_INTERNAL int offset_align32(int n)
{
  int delta = n % 4;
  int offset=4-delta;
  return offset;
}

/*Count the number of true inside the emit[] array*/
A661_INTERNAL int emit_count(a661_bool emit[],  const int size) {
 int i=0,res=0;
  for(;i<size;i++){
    if(emit[i]){
      res=res+1;
    }
  }
  return res;
}

/*A string copy with maximum size*/
A661_INTERNAL int write_string(buffer_el msg[], const unsigned char str[],  const int max)
{
  int i;

  for (i=0 ; ( i < max ) && ( str[i] != '\0' ); i++) {
    msg[i] = str[i];
  }
  msg[i] = '\0';

  return i;
}

/*write bitfield*/
A661_INTERNAL void write_bitfield_u8(buffer_el msg[],  const a661_ulong val,  const int startbit,  const int nb_bits)
{
  unsigned long tmp = msg[0];
  unsigned long mask = (( 1 << nb_bits) - 1);

  tmp = tmp  | ( (val & mask) << startbit );

  msg[0] = tmp;
}

A661_INTERNAL void write_bitfield_u16(buffer_el msg[],  const a661_ulong val,  const int startbit,  const int nb_bits)
{
  unsigned long tmp = READ_USHORT ( msg );
  unsigned long mask = (( 1 << nb_bits) - 1);

  tmp = tmp  | ( (val & mask) << startbit );

  WRITE_USHORT (msg, tmp);
}

#ifndef CLAMP
#define CLAMP(x, low, high)  (((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))
#endif

#ifndef REAL_TO_FR
#define REAL_TO_FR

/*
    Converts fr values from floating point values
    Result is clamped to the closest representable value
    Works with nb_bit <= 32
*/

A661_INTERNAL int real_to_fr(  const kcg_real val,  const int nb_bit,  const int max)
{
  unsigned top = ( 1 << (nb_bit -1));
  double tmp = (val * top) / max; 

  int clamp_min = -top;
  int clamp_max = top -1.0;
  tmp = CLAMP(tmp, clamp_min, clamp_max);

  return tmp;
}
#endif /*REAL_TO_FR*/

A661_INTERNAL int write_fr32_with_real(buffer_el msg[],  const kcg_real val,  const int max )
{
   WRITE_ULONG(msg, real_to_fr( val, 32, max));   

   return 4;
}

A661_INTERNAL int write_fr16_with_real(buffer_el msg[], const kcg_real val, const int max )
{
   WRITE_USHORT(msg, real_to_fr( val, 16, max));   

   return 2;
}

A661_INTERNAL int write_fr8_with_real(buffer_el msg[], const kcg_real val, const int max )
{
   msg[0] = real_to_fr( val, 8, max);   

   return 1;
}
#ifndef FR_TO_REAL
#define FR_TO_REAL
A661_INTERNAL double fr_to_real ( const int val, const int nb_bit, const int max)
{
  unsigned top = ( 1 << (nb_bit -1 ));

   return (((double)val * (double)max) / top );
}
#endif

#ifndef READ_FR
#define READ_FR
A661_INTERNAL kcg_real read_fr32_to_real(const buffer_el buffer[], const int max) 
{
	const int tmp = READ_ULONG(buffer);
        return  fr_to_real (tmp, 32, max);  
}
A661_INTERNAL kcg_real read_fr16_to_real(const buffer_el buffer[], const int max) 
{
	const int tmp = READ_USHORT(buffer);
        return  fr_to_real (tmp, 16, max);  
}
A661_INTERNAL kcg_real read_fr8_to_real(const buffer_el buffer[], const int max) 
{
	const int tmp = buffer[0];
        return  fr_to_real (tmp, 8, max);  
}
#endif /*READ_FR*/

/****/

 /*code for Simulation time : runtime check of string length*/
#ifdef SIM
#include "OperationalScenario_interface.h"
#include <stdio.h>
char * layerstring = "";
char * widgetstring = "";
char * parameterstring = "";
A661_INTERNAL void check_string_access (const char * fieldname, int stringsize, int arraysize)
{
  char buffer[16000];
  if (stringsize > arraysize) {
    sprintf (buffer, "%s/%s/%s/%s overflow, the SCADE variable used as string size (%i) is larger than the array used for the string(%i).", 
	    layerstring, widgetstring, parameterstring, fieldname, stringsize, arraysize);
    SsmOutputMessage(SIM_ERROR, buffer);
  }
}

#define CHECK_STRING_SIZE(fieldname, stringsize, arraysize)  check_string_access ((fieldname), (stringsize), (arraysize))
#define LAYER(s) (layerstring=(s))
#define WIDGET(s) (widgetstring=(s))
#define PARAMETER(s) (parameterstring=(s))

#else /*runtime code*/
#define CHECK_STRING_SIZE(fieldname, stringsize, arraysize)
#define LAYER(s)
#define WIDGET(s)
#define PARAMETER(s)
#endif 
/*****/

 
#define A661_CMD_UA_REQUEST 0xCA03
#define A661_REQ_LAYER_ACTIVE 0xDA01
#define A661_REQ_LAYER_INACTIVE 0xDA02
#define A661_REQ_FOCUS_ON_WIDGET 0xDA03
#define A661_REQ_LAYER_VISIBLE 0xDA04
#define A661_REQ_CURSOR_ON_WIDGET 0xDA05
A661_INTERNAL int a661_com_A661_CMD_UA_REQUEST_header(buffer_el msg[], int size) 
{
    WRITE_USHORT(msg, A661_CMD_UA_REQUEST);
    WRITE_USHORT(msg + 2, size);
    return 4;
}

A661_INTERNAL int a661_com_A661_CMD_UA_REQUEST_8(buffer_el msg[], a661_ushort data1, a661_ushort data2)
{
    a661_com_A661_CMD_UA_REQUEST_header(msg, 8);
    WRITE_USHORT(msg + 4 , data1);
    WRITE_USHORT(msg + 4 + 2 , data2);
    return 8;
}

A661_INTERNAL int a661_com_A661_REQ_CURSOR_ON_WIDGET(buffer_el msg[], a661_ushort widget_ident
                                                     , a661_ulong oem_data_field) 
{
  a661_com_A661_CMD_UA_REQUEST_header(msg, 12);
  WRITE_USHORT(msg + 4, A661_REQ_CURSOR_ON_WIDGET);
  WRITE_USHORT(msg + 4 + 2, widget_ident);
  WRITE_ULONG(msg + 4 + 2 + 2, oem_data_field);
  return 12;
}
A661_INTERNAL int a661_com_msg_EditBoxNumeric_A661_VALUE(buffer_el msg[], 
  a661_ushort pid,  a661_float A661_VALUE_Value_){
  int n3 = 0;
  int n2 = 0;
  int n1 = 0;
  PARAMETER("A661_VALUE");
  WRITE_USHORT(msg + 0, pid);
  WRITE_USHORT(msg + 2, 0);
  WRITE_FLOAT(msg + 4, A661_VALUE_Value_);
  return 8 ;
}
A661_INTERNAL int a661_com_msg_GpArcCircle_A661_FILL_INDEX(buffer_el msg[], 
  a661_ushort pid,  a661_uchar A661_FILL_INDEX_FillIndex_){
  int n3 = 0;
  int n2 = 0;
  int n1 = 0;
  PARAMETER("A661_FILL_INDEX");
  WRITE_USHORT(msg + 0, pid);
  msg[2] = GET_BYTE_0(A661_FILL_INDEX_FillIndex_);
  msg[3] = GET_BYTE_0(0);
  return 4 ;
}
A661_INTERNAL int a661_com_msg_GpRectangle_A661_SIZE_X(buffer_el msg[], 
  a661_ushort pid,  a661_ulong A661_SIZE_X_SizeX_){
  int n3 = 0;
  int n2 = 0;
  int n1 = 0;
  PARAMETER("A661_SIZE_X");
  WRITE_USHORT(msg + 0, pid);
  WRITE_USHORT(msg + 2, 0);
  WRITE_ULONG(msg + 4, A661_SIZE_X_SizeX_);
  return 8 ;
}
A661_INTERNAL int a661_com_msg_Label_A661_VISIBLE(buffer_el msg[], 
  a661_ushort pid,  a661_bool A661_VISIBLE_Visible_){
  int n3 = 0;
  int n2 = 0;
  int n1 = 0;
  PARAMETER("A661_VISIBLE");
  WRITE_USHORT(msg + 0, pid);
  msg[2] = GET_BYTE_0(A661_VISIBLE_Visible_);
  msg[3] = GET_BYTE_0(0);
  return 4 ;
}
A661_INTERNAL int a661_com_msg_RotationContainer_A661_ROTATION_ANGLE(buffer_el msg[], 
  a661_ushort pid,  kcg_real A661_ROTATION_ANGLE_RotationAngle_){
  int n3 = 0;
  int n2 = 0;
  int n1 = 0;
  PARAMETER("A661_ROTATION_ANGLE");
  WRITE_USHORT(msg + 0, pid);
  WRITE_USHORT(msg + 2, 0);
  write_fr32_with_real(msg + 4, A661_ROTATION_ANGLE_RotationAngle_, 180);
  return 8 ;
}
A661_INTERNAL int a661_com_csp_widget_RotationContainer(buffer_el msg[], 
  a661_ushort wid,  a661_bool A661_ROTATION_ANGLE__emit__, 
  kcg_real A661_ROTATION_ANGLE_RotationAngle_){
  int size = 0;
  int n1 = 0;
  int n0 = 0;
  if (A661_ROTATION_ANGLE__emit__){
    n0 = 8 /*include block_size*/;
    a661_msg_csp_header(msg, wid);
    if (A661_ROTATION_ANGLE__emit__){
      n1 = a661_com_msg_RotationContainer_A661_ROTATION_ANGLE(msg + n0, 46096,
        A661_ROTATION_ANGLE_RotationAngle_);
    }
    size = n0 + n1;
    WRITE_USHORT(msg + 2, size);
  }
  return n0 + n1 ;
}
A661_INTERNAL int a661_com_csp_widget_Label(buffer_el msg[],  a661_ushort wid, 
  a661_bool A661_VISIBLE__emit__,  a661_bool A661_VISIBLE_Visible_){
  int size = 0;
  int n1 = 0;
  int n0 = 0;
  if (A661_VISIBLE__emit__){
    n0 = 8 /*include block_size*/;
    a661_msg_csp_header(msg, wid);
    if (A661_VISIBLE__emit__){
      n1 = a661_com_msg_Label_A661_VISIBLE(msg + n0, 46384,
        A661_VISIBLE_Visible_);
    }
    size = n0 + n1;
    WRITE_USHORT(msg + 2, size);
  }
  return n0 + n1 ;
}
A661_INTERNAL int a661_com_csp_widget_GpRectangle(buffer_el msg[], 
  a661_ushort wid,  a661_bool A661_SIZE_X__emit__, 
  a661_ulong A661_SIZE_X_SizeX_){
  int size = 0;
  int n1 = 0;
  int n0 = 0;
  if (A661_SIZE_X__emit__){
    n0 = 8 /*include block_size*/;
    a661_msg_csp_header(msg, wid);
    if (A661_SIZE_X__emit__){
      n1 = a661_com_msg_GpRectangle_A661_SIZE_X(msg + n0, 46160,
        A661_SIZE_X_SizeX_);
    }
    size = n0 + n1;
    WRITE_USHORT(msg + 2, size);
  }
  return n0 + n1 ;
}
A661_INTERNAL int a661_com_csp_widget_GpArcCircle(buffer_el msg[], 
  a661_ushort wid,  a661_bool A661_FILL_INDEX__emit__, 
  a661_uchar A661_FILL_INDEX_FillIndex_){
  int size = 0;
  int n1 = 0;
  int n0 = 0;
  if (A661_FILL_INDEX__emit__){
    n0 = 8 /*include block_size*/;
    a661_msg_csp_header(msg, wid);
    if (A661_FILL_INDEX__emit__){
      n1 = a661_com_msg_GpArcCircle_A661_FILL_INDEX(msg + n0, 45536,
        A661_FILL_INDEX_FillIndex_);
    }
    size = n0 + n1;
    WRITE_USHORT(msg + 2, size);
  }
  return n0 + n1 ;
}
A661_INTERNAL int a661_com_csp_widget_EditBoxNumeric(buffer_el msg[], 
  a661_ushort wid,  a661_bool A661_VALUE__emit__, 
  a661_float A661_VALUE_Value_){
  int size = 0;
  int n1 = 0;
  int n0 = 0;
  if (A661_VALUE__emit__){
    n0 = 8 /*include block_size*/;
    a661_msg_csp_header(msg, wid);
    if (A661_VALUE__emit__){
      n1 = a661_com_msg_EditBoxNumeric_A661_VALUE(msg + n0, 46368,
        A661_VALUE_Value_);
    }
    size = n0 + n1;
    WRITE_USHORT(msg + 2, size);
  }
  return n0 + n1 ;
}
A661_INTERNAL int a661_com_A661_CMD_UA_REQUEST_layer_1(buffer_el msg[], 
  outC_OperationalScenario* scade_ctx,  extern_out_ctx_t * extern_ctx){
  int n2 = 0;
  int n1 = 0;
  if (scade_ctx->Layer1Visible ||
  scade_ctx->Layer1Active){
    
    if (scade_ctx->Layer1Visible){
      n1 = a661_com_A661_CMD_UA_REQUEST_8(msg + 0, A661_REQ_LAYER_VISIBLE, 0);
    }
    if (scade_ctx->Layer1Active){
      n2 = a661_com_A661_CMD_UA_REQUEST_8(msg + n1, A661_REQ_LAYER_ACTIVE, 0);
    }
  }
  return n1 + n2 ;
}
A661_INTERNAL int a661_com_layer_1(buffer_el msg[], 
  outC_OperationalScenario* scade_ctx,  extern_out_ctx_t * extern_ctx){
  int size = 0;
  int n24 = 0;
  int n23 = 0;
  int n22 = 0;
  int n21 = 0;
  int n20 = 0;
  int n19 = 0;
  int n18 = 0;
  int n17 = 0;
  int n16 = 0;
  int n15 = 0;
  int n14 = 0;
  int n13 = 0;
  int n12 = 0;
  int n11 = 0;
  int n10 = 0;
  int n9 = 0;
  int n8 = 0;
  int n7 = 0;
  int n6 = 0;
  int n5 = 0;
  int n4 = 0;
  int n3 = 0;
  int n2 = 0;
  int n1 = 0;
  int n0 = 0;
  if (scade_ctx->Emit2CDS ||
  scade_ctx->Layer1Active ||
  scade_ctx->Layer1Visible){
    LAYER("DF_TS02#1");
    n0 = 8 /*include block_size*/;
    a661_msg_cmd_header(msg, 1, DEFAULT_CONTEXT_NUMBER);
    if (scade_ctx->Emit2CDS){
      WIDGET("GpArcCircle_Ground#15");
      n1 = a661_com_csp_widget_GpArcCircle(msg + n0, 15, scade_ctx->Emit2CDS,
        scade_ctx->ColorIndex2);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("GpArcCircle_Launch#16");
      n2 = a661_com_csp_widget_GpArcCircle(msg + n0 + n1, 16,
        scade_ctx->Emit2CDS, scade_ctx->ColorIndex);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("GpArcCircle_Attitude#17");
      n3 = a661_com_csp_widget_GpArcCircle(msg + n0 + n1 + n2, 17,
        scade_ctx->Emit2CDS, scade_ctx->ColorIndex3);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("GpArcCircle_Normal#18");
      n4 = a661_com_csp_widget_GpArcCircle(msg + n0 + n1 + n2 + n3, 18,
        scade_ctx->Emit2CDS, scade_ctx->ColorIndex4);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Ground_Label#22");
      n5 = a661_com_csp_widget_Label(msg + n0 + n1 + n2 + n3 + n4, 22,
        scade_ctx->Emit2CDS, scade_ctx->GroundVisible);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Launch_Label#23");
      n6 = a661_com_csp_widget_Label(msg + n0 + n1 + n2 + n3 + n4 + n5, 23,
        scade_ctx->Emit2CDS, scade_ctx->LaunchVisible);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("AttitudeAcquisition_Label#24");
      n7 = a661_com_csp_widget_Label(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6, 24,
        scade_ctx->Emit2CDS, scade_ctx->AttitudeVisible);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("NormalPhase_Label#25");
      n8 = a661_com_csp_widget_Label(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7,
        25, scade_ctx->Emit2CDS, scade_ctx->NormalPhaseVisible);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("GpArcCircle_AtAcquired#27");
      n9 = a661_com_csp_widget_GpArcCircle(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8,
        27, scade_ctx->Emit2CDS, scade_ctx->ColorIndex5);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("AcRd_EditBoxNumeric#43");
      n10 = a661_com_csp_widget_EditBoxNumeric(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9,
        43, scade_ctx->Emit2CDS, scade_ctx->AcRdValue);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("GiroRd_EditBoxNumeric#45");
      n11 = a661_com_csp_widget_EditBoxNumeric(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10,
        45, scade_ctx->Emit2CDS, scade_ctx->SpinRd);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("GiroTg_EditBoxNumeric#46");
      n12 = a661_com_csp_widget_EditBoxNumeric(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11,
        46, scade_ctx->Emit2CDS, scade_ctx->SpinTg);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("FuelMeter_EditBoxNumeric#57");
      n13 = a661_com_csp_widget_EditBoxNumeric(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12,
        57, scade_ctx->Emit2CDS, scade_ctx->FuelMeter);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Fuel#59");
      n14 = a661_com_csp_widget_GpRectangle(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13,
        59, scade_ctx->Emit2CDS, scade_ctx->FuelMeterGraphic);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Longitude_EditBoxNumeric#70");
      n15 = a661_com_csp_widget_EditBoxNumeric(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14,
        70, scade_ctx->Emit2CDS, scade_ctx->SAT_Longitude_Value);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Latitude_EditBoxNumeric#71");
      n16 = a661_com_csp_widget_EditBoxNumeric(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15,
        71, scade_ctx->Emit2CDS, scade_ctx->SAT_Latitude_Value);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("RotationContainerDireita#77");
      n17 = a661_com_csp_widget_RotationContainer(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16,
        77, scade_ctx->Emit2CDS, scade_ctx->angleright);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("RotationContainerEsquerda#80");
      n18 = a661_com_csp_widget_RotationContainer(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16 + n17,
        80, scade_ctx->Emit2CDS, scade_ctx->angleleft);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Longitude_Sec_EditBoxNumeric#119");
      n19 = a661_com_csp_widget_EditBoxNumeric(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16 + n17 + n18,
        119, scade_ctx->Emit2CDS, scade_ctx->SAT_Longitude_Sec_Value);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Longitude_Min_EditBoxNumeric#120");
      n20 = a661_com_csp_widget_EditBoxNumeric(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16 + n17 + n18 + n19,
        120, scade_ctx->Emit2CDS, scade_ctx->SAT_Longitude_Min_Value);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Latitude_Min_EditBoxNumeric#124");
      n21 = a661_com_csp_widget_EditBoxNumeric(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16 + n17 + n18 + n19 + n20,
        124, scade_ctx->Emit2CDS, scade_ctx->SAT_Latitude_Min_Value);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Latitude_Sec_EditBoxNumeric#125");
      n22 = a661_com_csp_widget_EditBoxNumeric(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16 + n17 + n18 + n19 + n20 + n21,
        125, scade_ctx->Emit2CDS, scade_ctx->SAT_Latitude_Sec_Value);
    }
    if (scade_ctx->Layer1Active ||
    scade_ctx->Layer1Visible){
      n23 = a661_com_A661_CMD_UA_REQUEST_layer_1(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16 + n17 + n18 + n19 + n20 + n21 + n22,
        scade_ctx, extern_ctx);
    }
    n24 = 4;
    WRITE_ULONG(msg + n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16 + n17 + n18 + n19 + n20 + n21 + n22 + n23,
      A661_END_BLOCK);
    size = n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16 + n17 + n18 + n19 + n20 + n21 + n22 + n23 + n24;
    WRITE_ULONG(msg + 4, size);
  }
  return n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16 + n17 + n18 + n19 + n20 + n21 + n22 + n23 + n24 ;
}
 int ua_send(buffer_el msg[],  outC_OperationalScenario* scade_ctx, 
  extern_out_ctx_t * extern_ctx){
  int n1 = 0;
  
  n1 = a661_com_layer_1(msg + 0, scade_ctx, extern_ctx);
  return n1 ;
}

#define A661_ACTIVE_AREA 0xA010

#define A661_BASIC_CONTAINER 0xA020

#define A661_BLINKING_CONTAINER 0xA030

#define A661_BUFFER_FORMAT 0xA040

#define A661_CHECK_BUTTON 0xA050

#define A661_COMBO_BOX 0xA070

#define A661_CONNECTOR 0xA080

#define A661_CURSOR_POS_OVERLAY 0xA090

#define A661_EDIT_BOX_MASKED 0xA0A0

#define A661_EDIT_BOX_NUMERIC 0xA0C0

#define A661_EDIT_BOX_NUMERIC_BCD 0xA0C2

#define A661_EDIT_BOX_TEXT 0xA0D0

#define A661_GP_ARC_CIRCLE 0xA0F0

#define A661_GP_ARC_ELLIPSE 0xA100

#define A661_GP_CROWN 0xA110

#define A661_GP_LINE 0xA120

#define A661_GP_LINE_POLAR 0xA130

#define A661_GP_RECTANGLE 0xA140

#define A661_GP_TRIANGLE 0xA150

#define A661_LABEL 0xA160

#define A661_LABEL_COMPLEX 0xA170

#define A661_MAP_HORZ_ITEMLIST 0xA180

#define A661_MAP_LEGACY 0xA190

#define A661_MAP_HORZ_SOURCE 0xA1A0

#define A661_MAP_HORZ 0xA1B0

#define A661_MASK_CONTAINER 0xA1C0

#define A661_PANEL 0xA1F0

#define A661_PICTURE 0xA200

#define A661_PICTURE_PUSH_BUTTON 0xA240

#define A661_PICTURE_TOGGLE_BUTTON 0xA250

#define A661_POP_UP_MENU 0xA270

#define A661_POP_UP_MENU_BUTTON 0xA280

#define A661_POP_UP_PANEL 0xA290

#define A661_POP_UP_PANEL_BUTTON 0xA4E0

#define A661_PUSH_BUTTON 0xA2A0

#define A661_RADIO_BOX 0xA2B0

#define A661_ROTATION_CONTAINER 0xA2D0

#define A661_SCROLL_LIST 0xA2F0

#define A661_SCROLL_PANEL 0xA300

#define A661_SYMBOL 0xA310

#define A661_TABBED_PANEL 0xA320

#define A661_TABBED_PANEL_GROUP 0xA330

#define A661_TOGGLE_BUTTON 0xA340

#define A661_TRANSLATION_CONTAINER 0xA360

#define A661_MAP_GRID 0xA178

#define A661_EXTERNAL_SOURCE 0xA188

#define A661_MAP_VERT 0xA1B2

#define A661_MAP_VERT_SOURCE 0xA1B4

#define A661_MAP_VERT_ITEMLIST 0xA1B3

#define A661_EDIT_BOX_MULTI_LINE 0xA0B0

#define A661_COMBO_BOX_EDIT 0xA0E0

#define A661_MENU_BAR 0xA1D0

#define A661_MUTUALLY_EXCLUSIVE_CONTAINER 0xA400

#define A661_PICTURE_ANIMATED 0xA210

#define A661_PROXY_BUTTON 0xA420

#define A661_SELECTION_LIST_BUTTON 0xA370

#define A661_SLIDER 0xA440

#define A661_SYMBOL_ANIMATED 0xA450

#define A661_WATCHDOG_CONTAINER 0xA460

#define A661_CURSOR_REF 0xA470

#define A661_CURSOR_OVER 0xA480

#define A661_FOCUS_LINK 0xA490

#define A661_FOCUS_IN 0xA498

#define A661_FOCUS_OUT 0xA499

#define A661_SIZE_TO_FIT_CONTAINER 0xA4A0

#define A661_SHUFFLE_TO_FIT_CONTAINER 0xA4B0

#define A661_SYMBOL_PUSH_BUTTON 0xA4C0

#define A661_SYMBOL_TOGGLE_BUTTON 0xA4D0

#define A661_AC_LAT 0xB010

#define A661_AC_LAT_LONG 0xB030

#define A661_AC_LONG 0xB020

#define A661_AC_ORIENTATION 0xB040

#define A661_ACTIVE_TABBED_PANEL 0xB050

#define A661_ALPHA_MASK 0xB060

#define A661_ALTERN_PICTURE_REFERENCE 0xB080

#define A661_ANIMATION_FLAG 0xB090

#define A661_ANIMATION_TYPE 0xB098

#define A661_BLINKING_TYPE 0xB0A8

#define A661_BOUND_X 0xB0B0

#define A661_BOUND_Y 0xB0C0

#define A661_BOUND_XY 0xB0D0

#define A661_BOUND_SIZE_X 0xB0E0

#define A661_BOUND_SIZE_Y 0xB0F0

#define A661_BOUND_SIZE_XY 0xB100

#define A661_BUFFER_OF_PARAM 0xB110

#define A661_BUFFER_OF_MAPITEM 0xB120

#define A661_BUFFER_OF_MAPVERT_ITEMS 0xB125

#define A661_CENTER_X 0xB130

#define A661_CENTER_XY 0xB150

#define A661_CENTER_Y 0xB140

#define A661_COLOR_INDEX 0xB160

#define A661_CRP_LAT 0xB162

#define A661_CRP_LONG 0xB164

#define A661_CRP_LAT_LONG 0xB166

#define A661_CURSOR_POS 0xB170

#define A661_CURSOR_POS_BYTE 0xB172

#define A661_ENABLE 0xB180

#define A661_ENABLE_ARRAY 0xB1A0

#define A661_ENABLE_ENTRY_ARRAY 0xB1A8

#define A661_ENTRY_ARRAY 0xB190

#define A661_END_ANGLE 0xB1B0

#define A661_ENTRY_POP_UP_ARRAY 0xB1C0

#define A661_ENTRY_VALID 0xB570

#define A661_EVENT_FLAG 0xB1D0

#define A661_FILL_INDEX 0xB1E0

#define A661_FIRST_ACCESS_ENTRY 0xB1F0

#define A661_FIRST_ACCESS_UA_ENTRY 0xB1F8

#define A661_FIRST_VISIBLE_ENTRY 0xB200

#define A661_FONT 0xB590

#define A661_FORMAT_STRING 0xB550

#define A661_FRAME_X 0xB210

#define A661_FRAME_Y 0xB220

#define A661_FRAME_XY 0xB230

#define A661_INNER_RADIUS 0xB240

#define A661_INNER_STATE_CHECK 0xB244

#define A661_INNER_STATE_EDIT 0xB248

#define A661_INNER_STATE_TOGGLE 0xB258

#define A661_LEGEND_POSITION 0xB260

#define A661_LINE_LENGTH 0xB270

#define A661_LOOP_FLAG 0xB272

#define A661_LOOP_TYPE 0xB273

#define A661_MAP_SYNCHRONIZATION_NUMBER 0xB277

#define A661_MASK_REFERENCE 0xB280

#define A661_MASK_ENABLED 0xB290

#define A661_NEXT_FOCUSED_WIDGET 0xB2B8

#define A661_NEXT_WIDGET_IDENT 0xB5B0

#define A661_NUMBER_OF_ENTRIES 0xB2A0

#define A661_NUMBER_OF_VISIBLE_CHILDREN 0xB5D0

#define A661_NUMBER_OF_UA_ENTRIES 0xB2A8

#define A661_NUMERIC_MASK 0xB2B0

#define A661_ORIENTATION 0xB2C0

#define A661_OUTER_RADIUS 0xB2D0

#define A661_PICTURE_ARRAY 0xB2E0

#define A661_PICTURE_ENTRY_ARRAY 0xB2E8

#define A661_PICTURE_REFERENCE 0xB2F0

#define A661_POS_X 0xB300

#define A661_POS_X2 0xB330

#define A661_POS_X3 0xB360

#define A661_POS_XY 0xB320

#define A661_POS_XY2 0xB350

#define A661_POS_XY3 0xB380

#define A661_POS_Y 0xB310

#define A661_POS_Y2 0xB340

#define A661_POS_Y3 0xB370

#define A661_PREV_WIDGET_IDENT 0xB5A0

#define A661_PRP_LAT 0xB390

#define A661_PRP_LAT_LONG 0xB3B0

#define A661_PRP_LONG 0xB3A0

#define A661_PRP_SCREEN_X 0xB3C0

#define A661_PRP_SCREEN_XY 0xB3E0

#define A661_PRP_SCREEN_Y 0xB3D0

#define A661_RADIUS 0xB3F0

#define A661_RANGE 0xB400

#define A661_ROTATION_ANGLE 0xB410

#define A661_SCREEN_RANGE 0xB420

#define A661_SELECTED_ENTRY 0xB430

#define A661_SHIFT_FIRST_VISIBLE_ENTRY 0xB440

#define A661_SHUFFLE_TO_FIT_MODE 0xB5E0

#define A661_SIZE_TO_FIT_MODE 0xB5C0

#define A661_SIZE_X 0xB450

#define A661_SIZE_XY 0xB470

#define A661_SIZE_Y 0xB460

#define A661_START_ANGLE 0xB480

#define A661_STRING 0xB490

#define A661_STRING_ALTERNATE 0xB498

#define A661_STRING_ARRAY 0xB4A0

#define A661_STYLE_SET 0xB4B0

#define A661_SYMBOL_REFERENCE 0xB4C0

#define A661_ALTERN_SYMBOL_REFERENCE 0xB4C1

#define A661_TICS_COARSE 0xB4D0

#define A661_TICS_FINE 0xB4E0

#define A661_TRANSLATION_X 0xB4F0

#define A661_TRANSLATION_XY 0xB510

#define A661_TRANSLATION_Y 0xB500

#define A661_VALUE 0xB520

#define A661_VISIBLE 0xB530

#define A661_VISIBLE_CHILD 0xB540

#define A661_OPENING_ENTRY 0xB560

#define A661_BUFFER_OF_FILL_STYLES 0xB0F8

#define A661_MAJOR_TICK 0xB600

#define A661_MAPGRID_CELLSIZE 0xB274

#define A661_MAPGRID_OFFSET 0xB278

#define A661_MAX_VALUE 0xB610

#define A661_MIN_VALUE 0xB620

#define A661_MINMAX_VALUES 0xB580

#define A661_MINOR_TICK 0xB630

#define A661_RANGE_X 0xB402

#define A661_RANGE_Y 0xB403

#define A661_RANGE_XY 0xB404

#define A661_PRP_X 0xB3B2

#define A661_PRP_Y 0xB3B3

#define A661_PRP_XY 0xB3B4

#define A661_SOURCE_X 0xB660

#define A661_TARGET_WIDGET_ID 0xB650

#define A661_SOURCE_Y 0xB661

#define A661_SOURCE_DX 0xB662

#define A661_SOURCE_DY 0xB663

#define A661_SOURCE_XY 0xB664

#define A661_SOURCE_DXDY 0xB665

#define A661_REFRESH 0xB670

#define A661_SHOW_FAIL 0xB671

#define A661_EVT_INCREMENT 0xE006

#define A661_EVT_CURSOR_POS_CHANGE 0xE010

#define A661_EVT_FIRST_VIS_ENTRY_CHANGE 0xE020

#define A661_EVT_FRAME_POS_CHANGE 0xE030

#define A661_EVT_POPUP_CLOSED 0xE040

#define A661_EVT_SEL_ENTRY_CHANGE 0xE050

#define A661_EVT_SELECTION 0xE060

#define A661_EVT_SELECTION_MAP 0xE068

#define A661_EVT_STATE_CHANGE 0xE070

#define A661_EVT_STRING_CHANGE 0xE080

#define A661_EVT_STRING_CHANGE_ABORTED 0xE090

#define A661_EVT_STRING_CONFIRMED 0xE0A0

#define A661_EVT_TABBED_PANEL_CHANGE 0xE0B0

#define A661_EVT_VALUE_CHANGE 0xE0C0

#define A661_EVT_EDITBOX_OPENED 0xE110

#define A661_EVT_POPUP_PANEL_CLOSED 0xE120

#define A661_EVT_ITEM_SYNCHRONIZATION 0xE150

#define A661_EVT_WATCHDOG_EXPIRED 0xE200

#define A661_EVT_WATCHDOG_NORMAL 0xE210

#define A661_EVT_CURSOR_ENTER 0xE300

#define A661_EVT_CURSOR_INSIDE 0xE310

#define A661_EVT_CURSOR_EXIT 0xE320

#define A661_FALSE 0x0

#define A661_TRUE 0x1

#define A661_TRUE_WITH_VALIDATION 0x2

#define A661_UNSELECTED 0x0

#define A661_EVENT_NONE 0x0

#define A661_SELECTED 0x1

#define A661_VALIDATION 0x1

#define A661_VALIDATION_AND_WHEEL 0x2

#define A661_WHEEL 0x3

#define A661_ABSENT 0x10

#define A661_TOP 0x11

#define A661_BOTTOM 0x12

#define A661_LEFT 0x13

#define A661_RIGHT 0x14

#define A661_CENTER 0x15

#define A661_OPEN_UP 0x16

#define A661_OPEN_CENTERED 0x17

#define A661_OPEN_DOWN 0x18

#define A661_UP 0x19

#define A661_DOWN 0x1A

#define A661_EDITING 0x1B

#define A661_ERROR 0x1C

#define A661_NORMAL 0x1D

#define A661_CDS_DEPENDENT 0x1E

#define A661_NOT_USED 0x0

#define A661_ITEM_STYLE 0x20

#define A661_LEGEND 0x21

#define A661_LEGEND_ANCHOR 0x22

#define A661_LEGEND_POP_UP 0x23

#define A661_LINE_ARC 0x24

#define A661_LINE_SEGMENT 0x25

#define A661_LINE_START 0x26

#define A661_SYMBOL_CIRCLE 0x27

#define A661_SYMBOL_GENERIC 0x28

#define A661_SYMBOL_ROTATED 0x29

#define A661_SYMBOL_RUNWAY 0x2A

#define A661_FILLED_POLY_START 0x2B

#define A661_SYMBOL_OVAL 0x2C

#define A661_SYMBOL_TARGET 0x2D

#define A661_TRIANGLE_STRIP_START 0x2E

#define A661_TRIANGLE_SEGMENT 0x2F

#define A661_TRIANGLE_SEGMENT_DOUBLE 0x31

#define A661_TRIANGLE_END 0x32

#define A661_TRIANGLE_END_DOUBLE 0x33

#define A661_TRIANGLE_FAN_START 0x34

#define A661_LEGEND_ANCHOR_ROTATED 0x35

#define A661_DRAW_LINE_TO_CURSOR 0x36

#define A661_SYMBOL_RECTANGLE 0x37

#define A661_BOTTOM_CENTER 0x30

#define A661_BOTTOM_LEFT 0x31

#define A661_BOTTOM_RIGHT 0x32

#define A661_TOP_CENTER 0x33

#define A661_TOP_LEFT 0x34

#define A661_TOP_RIGHT 0x35

#define A661_BOTTOM_TO_TOP 0x40

#define A661_LEFT_TO_RIGHT 0x41

#define A661_RIGHT_TO_LEFT 0x42

#define A661_TOP_TO_BOTTOM 0x43

#define A661_ITEM_SYNCHRONIZATION 0x51

#define A661_MDF_BRG_DIST_ACHDG 0x60

#define A661_MDF_LAT_LONG 0x61

#define A661_MDF_LEGACY 0x62

#define A661_MDF_ABSOLUTE 0x65

#define A661_MDF_RELATIVE 0x66

#define A661_MDF_DIST_DIST 0x67

#define A661_MDF_X_DIST 0x68

#define A661_MDF_Y_ALT 0x69

#define A661_MDF_DIST_DIST_FIX 0x6A

#define A661_REPORT_ON_TRANSITION 0x60

#define A661_REPORT_ALL 0x61

#define A661_SIZE_TOP_DOWN 0x70

#define A661_SIZE_BOTTOM_UP 0x71

#define A661_SIZE_LEFT_TO_RIGHT 0x72

#define A661_SIZE_RIGHT_TO_LEFT 0x73

#define A661_NO_SIZING 0x74

#define A661_SHUFFLE_UP 0x80

#define A661_SHUFFLE_DOWN 0x81

#define A661_SHUFFLE_LEFT 0x82

#define A661_SHUFFLE_RIGHT 0x83

#define A661_NO_SHUFFLE 0x84

#define A661_LINE_ARC_INTERACTIVE 0xA4

#define A661_LINE_SEGMENT_INTERACTIVE 0xA5

#define A661_LINE_START_INTERACTIVE 0xA6

#define A661_SYMBOL_CIRCLE_INTERACTIVE 0xA7

#define A661_SYMBOL_GENERIC_INTERACTIVE 0xA8

#define A661_SYMBOL_ROTATED_INTERACTIVE 0xA9

#define A661_SYMBOL_RUNWAY_INTERACTIVE 0xAA

#define A661_FILLED_POLY_START_INTERACTIVE 0xAB

#define A661_SYMBOL_OVAL_INTERACTIVE 0xAC

#define A661_SYMBOL_TARGET_INTERACTIVE 0xAD

#define A661_TRIANGLE_STRIP_START_INTERACTIVE 0xAE

#define A661_TRIANGLE_SEGMENT_INTERACTIVE 0xAF

#define A661_TRIANGLE_SEGMENT_DOUBLE_INTERACTIVE 0xB1

#define A661_TRIANGLE_END_INTERACTIVE 0xB2

#define A661_TRIANGLE_END_DOUBLE_INTERACTIVE 0xB3

#define A661_TRIANGLE_FAN_START_INTERACTIVE 0xB4

#define A661_SYMBOL_RECTANGLE_INTERACTIVE 0xB7

#define A661_PIX_FMT_RGBA_8 0xC0

#define A661_PIX_FMT_LUMINANCE_ALPHA_8 0xC1

#define A661_PIX_FMT_COLOR_INDEXED_8 0xC2

#define A661_DONT_RUN 0x0

#define A661_RUN 0x1

#define A661_RUN_ONCE 0x2

#define A661_LOOP_FORWARD 0x0

#define A661_LOOP_FORWARD_AND_RESET 0x1

#define A661_LOOP_FORWARD_AND_BLANK 0x2

#define A661_LOOP_FORWARD_AND_BACKWARD_AND_BLANK 0x3

#define A661_EDB_CHANGE_CONFIRMED 0x0

#define A661_EDB_ALL_CHANGE 0x1

#define A661_EDB_OPEN_CLOSE 0x2

#define A661_STYLE_SET_DEFAULT 0x0
void ua_receive_clear(inC_OperationalScenario* scade_ctx, 
  extern_in_ctx_t * extern_ctx){
  scade_ctx->PassarFaseBtn = FALSE;
  scade_ctx->Power = FALSE;
  scade_ctx->upDateSw = FALSE;
}
int ua_receive(buffer_el buffer[],  int buffer_size, 
  inC_OperationalScenario* scade_ctx,  extern_in_ctx_t * extern_ctx){
  int widget_event_structure_current_size = 0;
  int A661_Run_Time_Command_limit = 0;
  int root_current_size = 0;
  int n = 0;
  int next_n = 0;
  /*  type root */
  switch (buffer[ n ]){
    case A661_BEGIN_BLOCK : 
      root_current_size = READ_ULONG(( buffer + ( 4 + n ) ));
      next_n = ( n + root_current_size );
      /*  LayerIdent */
      switch (buffer[ ( 1 + n ) ]){
        case 1 : 
          /*  root */
          n = ( 8 + n );
          A661_Run_Time_Command_limit = ( ( n + root_current_size ) - 12 );
          while(( n < A661_Run_Time_Command_limit )){
            /*  type A661_Run_Time_Command */
            switch (READ_USHORT(( buffer + n ))){
              case A661_NOTIFY_WIDGET_EVENT : 
                widget_event_structure_current_size = READ_USHORT(( buffer + ( 2 + n ) ));
                next_n = ( n + widget_event_structure_current_size );
                /*  WidgetIdent */
                switch (READ_USHORT(( buffer + ( 4 + n ) ))){
                  case 35 : 
                    /*  widget_event_structure */
                    n = ( 6 + n );
                    /*  type EventStructure */
                    switch (READ_USHORT(( buffer + ( 2 + n ) ))){
                      case A661_EVT_SELECTION : 
                        /*  PushButton_A661_EVT_SELECTION */
                        /*  Notify */
                        scade_ctx->upDateSw = TRUE;
                        break;
                      default : break;
                    }
                    n = next_n;
                    break;
                  case 26 : 
                    /*  widget_event_structure */
                    n = ( 6 + n );
                    /*  type EventStructure */
                    switch (READ_USHORT(( buffer + ( 2 + n ) ))){
                      case A661_EVT_SELECTION : 
                        /*  PushButton_A661_EVT_SELECTION */
                        /*  Notify */
                        scade_ctx->Power = TRUE;
                        break;
                      default : break;
                    }
                    n = next_n;
                    break;
                  case 1 : 
                    /*  widget_event_structure */
                    n = ( 6 + n );
                    /*  type EventStructure */
                    switch (READ_USHORT(( buffer + ( 2 + n ) ))){
                      case A661_EVT_SELECTION : 
                        /*  PushButton_A661_EVT_SELECTION */
                        /*  Notify */
                        scade_ctx->PassarFaseBtn = TRUE;
                        break;
                      default : break;
                    }
                    n = next_n;
                    break;
                  default : break;
                }
                break;
              default : break;
            }
            n = next_n;
          }
          n = ( 4 + n );
          break;
        default : break;
      }
      break;
    default : break;
  }
  return n ;
}
