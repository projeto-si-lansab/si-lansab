#ifndef _OPERATIONALSCENARIO_MACRO_H_
#define _OPERATIONALSCENARIO_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file OperationalScenario_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "OperationalScenario.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_OperationalScenario SAO_CTX_inC_OperationalScenario;
    outC_OperationalScenario SAO_CTX_outC_OperationalScenario;
} WU_OperationalScenario;
#define WU_CTX_TYPE_OperationalScenario WU_OperationalScenario
#define WU_CTX_TYPE_OperationalScenario_SIZE sizeof(WU_OperationalScenario)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_OperationalScenario() 

#define DECLARE_EXT_SENSORS_OperationalScenario(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_OperationalScenario_Power(context) context.SAO_CTX_inC_OperationalScenario.Power  /* OperationalScenario/Power */
#define VAR_OperationalScenario_Power VARC_OperationalScenario_Power(CTX_OperationalScenario)

#define VARC_OperationalScenario_Telemetry(context) context.SAO_CTX_inC_OperationalScenario.Telemetry  /* OperationalScenario/Telemetry */
#define VAR_OperationalScenario_Telemetry VARC_OperationalScenario_Telemetry(CTX_OperationalScenario)

#define VARC_OperationalScenario_AttitudeReference(context) context.SAO_CTX_inC_OperationalScenario.AttitudeReference  /* OperationalScenario/AttitudeReference */
#define VAR_OperationalScenario_AttitudeReference VARC_OperationalScenario_AttitudeReference(CTX_OperationalScenario)

#define VARC_OperationalScenario_takePict(context) context.SAO_CTX_inC_OperationalScenario.takePict  /* OperationalScenario/takePict */
#define VAR_OperationalScenario_takePict VARC_OperationalScenario_takePict(CTX_OperationalScenario)

#define VARC_OperationalScenario_picLocation(context) context.SAO_CTX_inC_OperationalScenario.picLocation  /* OperationalScenario/picLocation */
#define VAR_OperationalScenario_picLocation VARC_OperationalScenario_picLocation(CTX_OperationalScenario)

#define VARC_OperationalScenario_PassarFaseBtn(context) context.SAO_CTX_inC_OperationalScenario.PassarFaseBtn  /* OperationalScenario/PassarFaseBtn */
#define VAR_OperationalScenario_PassarFaseBtn VARC_OperationalScenario_PassarFaseBtn(CTX_OperationalScenario)

#define VARC_OperationalScenario_Accelerometers(context) context.SAO_CTX_inC_OperationalScenario.Accelerometers  /* OperationalScenario/Accelerometers */
#define VAR_OperationalScenario_Accelerometers VARC_OperationalScenario_Accelerometers(CTX_OperationalScenario)

#define VARC_OperationalScenario_SunSensor(context) context.SAO_CTX_inC_OperationalScenario.SunSensor  /* OperationalScenario/SunSensor */
#define VAR_OperationalScenario_SunSensor VARC_OperationalScenario_SunSensor(CTX_OperationalScenario)

#define VARC_OperationalScenario_Reactionwheels(context) context.SAO_CTX_inC_OperationalScenario.Reactionwheels  /* OperationalScenario/Reactionwheels */
#define VAR_OperationalScenario_Reactionwheels VARC_OperationalScenario_Reactionwheels(CTX_OperationalScenario)

#define VARC_OperationalScenario_MagneticTorquers(context) context.SAO_CTX_inC_OperationalScenario.MagneticTorquers  /* OperationalScenario/MagneticTorquers */
#define VAR_OperationalScenario_MagneticTorquers VARC_OperationalScenario_MagneticTorquers(CTX_OperationalScenario)

#define VARC_OperationalScenario_upDateSw(context) context.SAO_CTX_inC_OperationalScenario.upDateSw  /* OperationalScenario/upDateSw */
#define VAR_OperationalScenario_upDateSw VARC_OperationalScenario_upDateSw(CTX_OperationalScenario)

#define VARC_OperationalScenario_Gyroscopes(context) context.SAO_CTX_inC_OperationalScenario.Gyroscopes  /* OperationalScenario/Gyroscopes */
#define VAR_OperationalScenario_Gyroscopes VARC_OperationalScenario_Gyroscopes(CTX_OperationalScenario)

#define VARC_OperationalScenario_Input13(context) context.SAO_CTX_inC_OperationalScenario.Input13  /* OperationalScenario/Input13 */
#define VAR_OperationalScenario_Input13 VARC_OperationalScenario_Input13(CTX_OperationalScenario)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_OperationalScenario_StartLaunchPhase(context) context.SAO_CTX_outC_OperationalScenario.StartLaunchPhase  /* OperationalScenario/StartLaunchPhase */
#define VAR_OperationalScenario_StartLaunchPhase VARC_OperationalScenario_StartLaunchPhase(CTX_OperationalScenario)

#define VARC_OperationalScenario_Layer1Active(context) context.SAO_CTX_outC_OperationalScenario.Layer1Active  /* OperationalScenario/Layer1Active */
#define VAR_OperationalScenario_Layer1Active VARC_OperationalScenario_Layer1Active(CTX_OperationalScenario)

#define VARC_OperationalScenario_Layer1Visible(context) context.SAO_CTX_outC_OperationalScenario.Layer1Visible  /* OperationalScenario/Layer1Visible */
#define VAR_OperationalScenario_Layer1Visible VARC_OperationalScenario_Layer1Visible(CTX_OperationalScenario)

#define VARC_OperationalScenario_Emit2CDS(context) context.SAO_CTX_outC_OperationalScenario.Emit2CDS  /* OperationalScenario/Emit2CDS */
#define VAR_OperationalScenario_Emit2CDS VARC_OperationalScenario_Emit2CDS(CTX_OperationalScenario)

#define VARC_OperationalScenario_ColorIndex(context) context.SAO_CTX_outC_OperationalScenario.ColorIndex  /* OperationalScenario/ColorIndex */
#define VAR_OperationalScenario_ColorIndex VARC_OperationalScenario_ColorIndex(CTX_OperationalScenario)

#define VARC_OperationalScenario_ColorIndex2(context) context.SAO_CTX_outC_OperationalScenario.ColorIndex2  /* OperationalScenario/ColorIndex2 */
#define VAR_OperationalScenario_ColorIndex2 VARC_OperationalScenario_ColorIndex2(CTX_OperationalScenario)

#define VARC_OperationalScenario_ColorIndex3(context) context.SAO_CTX_outC_OperationalScenario.ColorIndex3  /* OperationalScenario/ColorIndex3 */
#define VAR_OperationalScenario_ColorIndex3 VARC_OperationalScenario_ColorIndex3(CTX_OperationalScenario)

#define VARC_OperationalScenario_ColorIndex4(context) context.SAO_CTX_outC_OperationalScenario.ColorIndex4  /* OperationalScenario/ColorIndex4 */
#define VAR_OperationalScenario_ColorIndex4 VARC_OperationalScenario_ColorIndex4(CTX_OperationalScenario)

#define VARC_OperationalScenario_GroundVisible(context) context.SAO_CTX_outC_OperationalScenario.GroundVisible  /* OperationalScenario/GroundVisible */
#define VAR_OperationalScenario_GroundVisible VARC_OperationalScenario_GroundVisible(CTX_OperationalScenario)

#define VARC_OperationalScenario_AttitudeVisible(context) context.SAO_CTX_outC_OperationalScenario.AttitudeVisible  /* OperationalScenario/AttitudeVisible */
#define VAR_OperationalScenario_AttitudeVisible VARC_OperationalScenario_AttitudeVisible(CTX_OperationalScenario)

#define VARC_OperationalScenario_NormalPhaseVisible(context) context.SAO_CTX_outC_OperationalScenario.NormalPhaseVisible  /* OperationalScenario/NormalPhaseVisible */
#define VAR_OperationalScenario_NormalPhaseVisible VARC_OperationalScenario_NormalPhaseVisible(CTX_OperationalScenario)

#define VARC_OperationalScenario_AltitudeValue(context) context.SAO_CTX_outC_OperationalScenario.AltitudeValue  /* OperationalScenario/AltitudeValue */
#define VAR_OperationalScenario_AltitudeValue VARC_OperationalScenario_AltitudeValue(CTX_OperationalScenario)

#define VARC_OperationalScenario_ColorIndex5(context) context.SAO_CTX_outC_OperationalScenario.ColorIndex5  /* OperationalScenario/ColorIndex5 */
#define VAR_OperationalScenario_ColorIndex5 VARC_OperationalScenario_ColorIndex5(CTX_OperationalScenario)

#define VARC_OperationalScenario_LaunchVisible(context) context.SAO_CTX_outC_OperationalScenario.LaunchVisible  /* OperationalScenario/LaunchVisible */
#define VAR_OperationalScenario_LaunchVisible VARC_OperationalScenario_LaunchVisible(CTX_OperationalScenario)

#define VARC_OperationalScenario_FuelMeter(context) context.SAO_CTX_outC_OperationalScenario.FuelMeter  /* OperationalScenario/FuelMeter */
#define VAR_OperationalScenario_FuelMeter VARC_OperationalScenario_FuelMeter(CTX_OperationalScenario)

#define VARC_OperationalScenario_FuelMeterGraphic(context) context.SAO_CTX_outC_OperationalScenario.FuelMeterGraphic  /* OperationalScenario/FuelMeterGraphic */
#define VAR_OperationalScenario_FuelMeterGraphic VARC_OperationalScenario_FuelMeterGraphic(CTX_OperationalScenario)

#define VARC_OperationalScenario_SAT_Longitude_Value(context) context.SAO_CTX_outC_OperationalScenario.SAT_Longitude_Value  /* OperationalScenario/SAT_Longitude_Value */
#define VAR_OperationalScenario_SAT_Longitude_Value VARC_OperationalScenario_SAT_Longitude_Value(CTX_OperationalScenario)

#define VARC_OperationalScenario_SAT_Latitude_Value(context) context.SAO_CTX_outC_OperationalScenario.SAT_Latitude_Value  /* OperationalScenario/SAT_Latitude_Value */
#define VAR_OperationalScenario_SAT_Latitude_Value VARC_OperationalScenario_SAT_Latitude_Value(CTX_OperationalScenario)

#define VARC_OperationalScenario_SpinRd(context) context.SAO_CTX_outC_OperationalScenario.SpinRd  /* OperationalScenario/SpinRd */
#define VAR_OperationalScenario_SpinRd VARC_OperationalScenario_SpinRd(CTX_OperationalScenario)

#define VARC_OperationalScenario_SpinTg(context) context.SAO_CTX_outC_OperationalScenario.SpinTg  /* OperationalScenario/SpinTg */
#define VAR_OperationalScenario_SpinTg VARC_OperationalScenario_SpinTg(CTX_OperationalScenario)

#define VARC_OperationalScenario_TorqueRd(context) context.SAO_CTX_outC_OperationalScenario.TorqueRd  /* OperationalScenario/TorqueRd */
#define VAR_OperationalScenario_TorqueRd VARC_OperationalScenario_TorqueRd(CTX_OperationalScenario)

#define VARC_OperationalScenario_TorqueTg(context) context.SAO_CTX_outC_OperationalScenario.TorqueTg  /* OperationalScenario/TorqueTg */
#define VAR_OperationalScenario_TorqueTg VARC_OperationalScenario_TorqueTg(CTX_OperationalScenario)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_Power kcg_bool
#define CPY_Power(DST, SRC) DST = SRC
#define T_Telemetry kcg_int
#define CPY_Telemetry(DST, SRC) DST = SRC
#define T_AttitudeReference kcg_int
#define CPY_AttitudeReference(DST, SRC) DST = SRC
#define T_takePict kcg_bool
#define CPY_takePict(DST, SRC) DST = SRC
#define T_picLocation kcg_real
#define CPY_picLocation(DST, SRC) DST = SRC
#define T_PassarFaseBtn kcg_bool
#define CPY_PassarFaseBtn(DST, SRC) DST = SRC
#define T_Accelerometers kcg_bool
#define CPY_Accelerometers(DST, SRC) DST = SRC
#define T_SunSensor kcg_bool
#define CPY_SunSensor(DST, SRC) DST = SRC
#define T_Reactionwheels kcg_bool
#define CPY_Reactionwheels(DST, SRC) DST = SRC
#define T_MagneticTorquers kcg_bool
#define CPY_MagneticTorquers(DST, SRC) DST = SRC
#define T_upDateSw kcg_bool
#define CPY_upDateSw(DST, SRC) DST = SRC
#define T_Gyroscopes kcg_bool
#define CPY_Gyroscopes(DST, SRC) DST = SRC
#define T_Input13 kcg_bool
#define CPY_Input13(DST, SRC) DST = SRC
#define T_StartLaunchPhase kcg_bool
#define CPY_StartLaunchPhase(DST, SRC) DST = SRC
#define T_Layer1Active kcg_bool
#define CPY_Layer1Active(DST, SRC) DST = SRC
#define T_Layer1Visible kcg_bool
#define CPY_Layer1Visible(DST, SRC) DST = SRC
#define T_Emit2CDS kcg_bool
#define CPY_Emit2CDS(DST, SRC) DST = SRC
#define T_ColorIndex kcg_int
#define CPY_ColorIndex(DST, SRC) DST = SRC
#define T_ColorIndex2 kcg_int
#define CPY_ColorIndex2(DST, SRC) DST = SRC
#define T_ColorIndex3 kcg_int
#define CPY_ColorIndex3(DST, SRC) DST = SRC
#define T_ColorIndex4 kcg_int
#define CPY_ColorIndex4(DST, SRC) DST = SRC
#define T_GroundVisible kcg_bool
#define CPY_GroundVisible(DST, SRC) DST = SRC
#define T_AttitudeVisible kcg_bool
#define CPY_AttitudeVisible(DST, SRC) DST = SRC
#define T_NormalPhaseVisible kcg_bool
#define CPY_NormalPhaseVisible(DST, SRC) DST = SRC
#define T_AltitudeValue kcg_real
#define CPY_AltitudeValue(DST, SRC) DST = SRC
#define T_ColorIndex5 kcg_int
#define CPY_ColorIndex5(DST, SRC) DST = SRC
#define T_LaunchVisible kcg_bool
#define CPY_LaunchVisible(DST, SRC) DST = SRC
#define T_FuelMeter kcg_real
#define CPY_FuelMeter(DST, SRC) DST = SRC
#define T_FuelMeterGraphic kcg_int
#define CPY_FuelMeterGraphic(DST, SRC) DST = SRC
#define T_SAT_Longitude_Value kcg_real
#define CPY_SAT_Longitude_Value(DST, SRC) DST = SRC
#define T_SAT_Latitude_Value kcg_real
#define CPY_SAT_Latitude_Value(DST, SRC) DST = SRC
#define T_SpinRd kcg_real
#define CPY_SpinRd(DST, SRC) DST = SRC
#define T_SpinTg kcg_real
#define CPY_SpinTg(DST, SRC) DST = SRC
#define T_TorqueRd kcg_real
#define CPY_TorqueRd(DST, SRC) DST = SRC
#define T_TorqueTg kcg_real
#define CPY_TorqueTg(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_OperationalScenario(context)  WU_OperationalScenario context;

#define DECLARE_CTXT_OperationalScenario() DECLAREC_CTXT_OperationalScenario(CTX_OperationalScenario)

#define DECLAREC_EXT_CTXT_OperationalScenario(MODE , context) MODE WU_OperationalScenario context;

#define DECLARE_EXT_CTXT_OperationalScenario(MODE) DECLAREC_EXT_CTXT_OperationalScenario(MODE , CTX_OperationalScenario)

#define INITC_OperationalScenario(context) OperationalScenario_reset(&context.SAO_CTX_outC_OperationalScenario)
#define INIT_OperationalScenario() INITC_OperationalScenario(CTX_OperationalScenario)

#define PERFORMC_OperationalScenario(context) 	OperationalScenario( \
		&context.SAO_CTX_inC_OperationalScenario /* input context */,\
		&context.SAO_CTX_outC_OperationalScenario /* output/memories context */\
	)

#define PERFORM_OperationalScenario() PERFORMC_OperationalScenario(CTX_OperationalScenario)

/*$************** SCADE Macro wrapper *********************
** End of file OperationalScenario_macro.h
***********************************************************$*/

#endif /* _OPERATIONALSCENARIO_MACRO_H_ */
