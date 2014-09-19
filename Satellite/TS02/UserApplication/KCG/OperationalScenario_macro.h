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


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_OperationalScenario_StartLaunchPhase(context) context.SAO_CTX_outC_OperationalScenario.StartLaunchPhase  /* OperationalScenario/StartLaunchPhase */
#define VAR_OperationalScenario_StartLaunchPhase VARC_OperationalScenario_StartLaunchPhase(CTX_OperationalScenario)

#define VARC_OperationalScenario_StartAtAcquisition(context) context.SAO_CTX_outC_OperationalScenario.StartAtAcquisition  /* OperationalScenario/StartAtAcquisition */
#define VAR_OperationalScenario_StartAtAcquisition VARC_OperationalScenario_StartAtAcquisition(CTX_OperationalScenario)

#define VARC_OperationalScenario_safeMode(context) context.SAO_CTX_outC_OperationalScenario.safeMode  /* OperationalScenario/safeMode */
#define VAR_OperationalScenario_safeMode VARC_OperationalScenario_safeMode(CTX_OperationalScenario)

#define VARC_OperationalScenario_RefAttitude(context) context.SAO_CTX_outC_OperationalScenario.RefAttitude  /* OperationalScenario/RefAttitude */
#define VAR_OperationalScenario_RefAttitude VARC_OperationalScenario_RefAttitude(CTX_OperationalScenario)

#define VARC_OperationalScenario_NormalPhase(context) context.SAO_CTX_outC_OperationalScenario.NormalPhase  /* OperationalScenario/NormalPhase */
#define VAR_OperationalScenario_NormalPhase VARC_OperationalScenario_NormalPhase(CTX_OperationalScenario)

#define VARC_OperationalScenario_payMode(context) context.SAO_CTX_outC_OperationalScenario.payMode  /* OperationalScenario/payMode */
#define VAR_OperationalScenario_payMode VARC_OperationalScenario_payMode(CTX_OperationalScenario)

#define VARC_OperationalScenario_picture(context) context.SAO_CTX_outC_OperationalScenario.picture  /* OperationalScenario/picture */
#define VAR_OperationalScenario_picture VARC_OperationalScenario_picture(CTX_OperationalScenario)

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
#define T_StartLaunchPhase kcg_bool
#define CPY_StartLaunchPhase(DST, SRC) DST = SRC
#define T_StartAtAcquisition kcg_bool
#define CPY_StartAtAcquisition(DST, SRC) DST = SRC
#define T_safeMode kcg_bool
#define CPY_safeMode(DST, SRC) DST = SRC
#define T_RefAttitude kcg_bool
#define CPY_RefAttitude(DST, SRC) DST = SRC
#define T_NormalPhase kcg_bool
#define CPY_NormalPhase(DST, SRC) DST = SRC
#define T_payMode kcg_bool
#define CPY_payMode(DST, SRC) DST = SRC
#define T_picture kcg_real
#define CPY_picture(DST, SRC) DST = SRC
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
