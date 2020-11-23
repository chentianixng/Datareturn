/**************************************************************************************
 * Copyright (C) 2019 TTTech Automotive GmbH. All rights reserved
 * Schoenbrunnerstrasse 7, A-1040 Wien, Austria. office\tttech-automotive.com
 **************************************************************************************/
/**
 *
 *  \file
 *      BusSignals_enums.h
 *  \brief
 *      Defines physical ranges and initial value for each bus signal read by this SW-C
 **************************************************************************************/

#ifndef BUSSIGNALS_ENUMS_H_
#define BUSSIGNALS_ENUMS_H_

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/* PRQA S 3453, 0779 EOF                                                */
/* 3453: Allow Function-like macros. They are needed in this instance   */
/* 0779: Allow usage of names from model longer than 31 chars.          */
/* --- Macro to check for invalid timestamps --- */
/* returns TRUE if timestamp is invalid, else FALSE */
#define EGT_CHECK_INVALID(ts) (((ts).DeTimestampHigh == 0) && ((ts).DeTimestampLow == 0))
/* --- end Macro to check for invalid timestamps --- */
/* --- DeBMS_HSC1_FrP11 --- */
/* Constants for Bus element: BMSOnbdChrgrPlugOn_h1HSC1  -  System element: BMSOnbdChrgrPlugOn_h1HSC1 */
#define DeBMS_HSC1_FrP11_BMSOnbdChrgrPlugOn_h1HSC1_RANGE_MAX (1U)
#define DeBMS_HSC1_FrP11_BMSOnbdChrgrPlugOn_h1HSC1_RANGE_MIN (0U)
#define DeBMS_HSC1_FrP11_BMSOnbdChrgrPlugOn_h1HSC1_DEFAULT (0U)

#define DeBMS_HSC1_FrP11_BMSOnbdChrgrPlugOn_h1HSC1_Cx0_False (0U)

#define DeBMS_HSC1_FrP11_BMSOnbdChrgrPlugOn_h1HSC1_Cx1_True (1U)

/* Constants for Bus element: BMSOfbdChrgrPlugOn_h1HSC1  -  System element: BMSOfbdChrgrPlugOn_h1HSC1 */
#define DeBMS_HSC1_FrP11_BMSOfbdChrgrPlugOn_h1HSC1_RANGE_MAX (1U)
#define DeBMS_HSC1_FrP11_BMSOfbdChrgrPlugOn_h1HSC1_RANGE_MIN (0U)
#define DeBMS_HSC1_FrP11_BMSOfbdChrgrPlugOn_h1HSC1_DEFAULT (0U)

#define DeBMS_HSC1_FrP11_BMSOfbdChrgrPlugOn_h1HSC1_Cx0_False (0U)

#define DeBMS_HSC1_FrP11_BMSOfbdChrgrPlugOn_h1HSC1_Cx1_True (1U)

/* --- DeFICM_HSC4_FrP13 --- */
/* Constants for Bus element: CMDMODHSC4  -  System element: CMDMODHSC4 */
#define DeFICM_HSC4_FrP13_CMDMODHSC4_RANGE_MAX (1U)
#define DeFICM_HSC4_FrP13_CMDMODHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP13_CMDMODHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP13_CMDMODHSC4_Cx0_Autonoums (0U)

#define DeFICM_HSC4_FrP13_CMDMODHSC4_Cx1_Manual (1U)

/* Constants for Bus element: AlisysrdyHSC4  -  System element: AlisysrdyHSC4 */
#define DeFICM_HSC4_FrP13_AlisysrdyHSC4_RANGE_MAX (1U)
#define DeFICM_HSC4_FrP13_AlisysrdyHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP13_AlisysrdyHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP13_AlisysrdyHSC4_Cx0_not_ready (0U)

#define DeFICM_HSC4_FrP13_AlisysrdyHSC4_Cx1_ready (1U)

/* --- DeFICM_HSC4_FrP18_FrP35_AVM --- */
/* Constants for Bus element: SurndViewSelnVHSC4  -  System element: SurndViewSelnVHSC4 */
#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSelnVHSC4_RANGE_MAX (1U)
#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSelnVHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSelnVHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSelnVHSC4_Cx0_Valid (0U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSelnVHSC4_Cx1_Invalid (1U)

/* Constants for Bus element: SurndViewSeln_oldHSC4  -  System element: SurndViewSeln_oldHSC4 */
#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSeln_oldHSC4_RANGE_MAX (7U)
#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSeln_oldHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSeln_oldHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSeln_oldHSC4_Cx0_No_request (0U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSeln_oldHSC4_Cx1_Front_view_request (1U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSeln_oldHSC4_Cx2_Left_view_request (2U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSeln_oldHSC4_Cx3_Right_view_request (3U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSeln_oldHSC4_Cx4_Rear_view_request (4U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSeln_oldHSC4_Cx5_Surround_veiw_request (5U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSeln_oldHSC4_Cx6_Reserved (6U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurndViewSeln_oldHSC4_Cx7_Reserved (7U)

/* Constants for Bus element: SurVwSlcHSC4  -  System element: SurVwSlcHSC4 */
#define DeFICM_HSC4_FrP18_FrP35_AVM_SurVwSlcHSC4_RANGE_MAX (7U)
#define DeFICM_HSC4_FrP18_FrP35_AVM_SurVwSlcHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP18_FrP35_AVM_SurVwSlcHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurVwSlcHSC4_Cx0_No_request (0U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurVwSlcHSC4_Cx1_Front_view_request (1U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurVwSlcHSC4_Cx2_Left_view_request (2U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurVwSlcHSC4_Cx3_Right_view_request (3U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurVwSlcHSC4_Cx4_Rear_view_request (4U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurVwSlcHSC4_Cx5_Surround_veiw_request (5U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurVwSlcHSC4_Cx6_Reserved (6U)

#define DeFICM_HSC4_FrP18_FrP35_AVM_SurVwSlcHSC4_Cx7_Reserved (7U)

/* --- DeFICM_HSC4_FrP19 --- */
/* Constants for Bus element: AutoViewChgHSC4  -  System element: AutoViewChgHSC4 */
#define DeFICM_HSC4_FrP19_AutoViewChgHSC4_RANGE_MAX (1U)
#define DeFICM_HSC4_FrP19_AutoViewChgHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP19_AutoViewChgHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP19_AutoViewChgHSC4_Cx0_Autonoums (0U)

#define DeFICM_HSC4_FrP19_AutoViewChgHSC4_Cx1_Manual (1U)

/* --- DeFICM_HSC4_FrP32 --- */
/* Constants for Bus element: SurndViewSelnHSC4  -  System element: SurndViewSelnHSC4 */
#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_RANGE_MAX (15U)
#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_Cx0_No_request (0U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_Cx1_front_view (1U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_Cx2_front_view_wide (2U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_Cx3_Rear_view (3U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_Cx4_2D_Rear_view_wide (4U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_Cx5_left_right_view_wide (5U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_Cx6_front_left_view_3D_ (6U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_Cx7_front_right_view_3D_ (7U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_Cx8_rear_left_view_3D_ (8U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_Cx9_rear_right_view_3D_ (9U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_CxA_full_screen (10U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_CxB_Reserved (11U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_CxC_Reserved (12U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_CxD_Reserved (13U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_CxE_Reserved (14U)

#define DeFICM_HSC4_FrP32_SurndViewSelnHSC4_CxF_Reserved (15U)

/* Constants for Bus element: SCREEN_COORD_AXHSC4  -  System element: SCREEN_COORD_AXHSC4 */
#define DeFICM_HSC4_FrP32_SCREEN_COORD_AXHSC4_RANGE_MAX (4095U)
#define DeFICM_HSC4_FrP32_SCREEN_COORD_AXHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP32_SCREEN_COORD_AXHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP32_SCREEN_COORD_AXHSC4_Cx000_0x0_0xFFF_ (0U)

/* Constants for Bus element: TOUCH_SCREEN_ACMDHSC4  -  System element: TOUCH_SCREEN_ACMDHSC4 */
#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_RANGE_MAX (15U)
#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_Cx0_No_command (0U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_Cx1_Screen_touched (1U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_Cx2_Screen_hold_reserved_ (2U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_Cx3_Screen_release (3U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_Cx4_Reserved (4U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_Cx5_Reserved (5U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_Cx6_Reserved (6U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_Cx7_Reserved (7U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_Cx8_Reserved (8U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_Cx9_Reserved (9U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_CxA_Reserved (10U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_CxB_Reserved (11U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_CxC_Reserved (12U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_CxD_Reserved (13U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_CxE_Reserved (14U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_ACMDHSC4_CxF_Reserved (15U)

/* Constants for Bus element: SCREEN_COORD_AYHSC4  -  System element: SCREEN_COORD_AYHSC4 */
#define DeFICM_HSC4_FrP32_SCREEN_COORD_AYHSC4_RANGE_MAX (4095U)
#define DeFICM_HSC4_FrP32_SCREEN_COORD_AYHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP32_SCREEN_COORD_AYHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP32_SCREEN_COORD_AYHSC4_Cx000_0x0_0xFFF_ (0U)

/* Constants for Bus element: TOUCH_SCREEN_STATUSHSC4  -  System element: TOUCH_SCREEN_STATUSHSC4 */
#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_RANGE_MAX (15U)
#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_Cx0_No_command (0U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_Cx1_2_Points_Screen_touched (1U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_Cx2_reserved_ (2U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_Cx3_less_than_2_Points_Screen_touched (3U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_Cx4_Reserved (4U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_Cx5_Reserved (5U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_Cx6_Reserved (6U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_Cx7_Reserved (7U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_Cx8_Reserved (8U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_Cx9_Reserved (9U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_CxA_Reserved (10U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_CxB_Reserved (11U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_CxC_Reserved (12U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_CxD_Reserved (13U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_CxE_Reserved (14U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_STATUSHSC4_CxF_Reserved (15U)

/* Constants for Bus element: SCREEN_COORD_BXHSC4  -  System element: SCREEN_COORD_BXHSC4 */
#define DeFICM_HSC4_FrP32_SCREEN_COORD_BXHSC4_RANGE_MAX (4095U)
#define DeFICM_HSC4_FrP32_SCREEN_COORD_BXHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP32_SCREEN_COORD_BXHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP32_SCREEN_COORD_BXHSC4_Cx000_0x0_0xFFF_ (0U)

/* Constants for Bus element: TOUCH_SCREEN_BCMDHSC4  -  System element: TOUCH_SCREEN_BCMDHSC4 */
#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_RANGE_MAX (15U)
#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_Cx0_No_command (0U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_Cx1_Screen_touched (1U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_Cx2_Screen_hold_reserved_ (2U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_Cx3_Screen_release (3U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_Cx4_Reserved (4U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_Cx5_Reserved (5U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_Cx6_Reserved (6U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_Cx7_Reserved (7U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_Cx8_Reserved (8U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_Cx9_Reserved (9U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_CxA_Reserved (10U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_CxB_Reserved (11U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_CxC_Reserved (12U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_CxD_Reserved (13U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_CxE_Reserved (14U)

#define DeFICM_HSC4_FrP32_TOUCH_SCREEN_BCMDHSC4_CxF_Reserved (15U)

/* Constants for Bus element: SCREEN_COORD_BYHSC4  -  System element: SCREEN_COORD_BYHSC4 */
#define DeFICM_HSC4_FrP32_SCREEN_COORD_BYHSC4_RANGE_MAX (4095U)
#define DeFICM_HSC4_FrP32_SCREEN_COORD_BYHSC4_RANGE_MIN (0U)
#define DeFICM_HSC4_FrP32_SCREEN_COORD_BYHSC4_DEFAULT (0U)

#define DeFICM_HSC4_FrP32_SCREEN_COORD_BYHSC4_Cx000_0x0_0xFFF_ (0U)

/* --- DeTPMS_HSC3_FrP01 --- */
/* Constants for Bus element: RRTireTemVHSC4  -  System element: RRTireTemVHSC4 */
#define DeTPMS_HSC3_FrP01_RRTireTemVHSC4_RANGE_MAX (1U)
#define DeTPMS_HSC3_FrP01_RRTireTemVHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_RRTireTemVHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP01_RRTireTemVHSC4_Cx0_Valid (0U)

#define DeTPMS_HSC3_FrP01_RRTireTemVHSC4_Cx1_Invalid (1U)

/* Constants for Bus element: RRTireTemHSC4  -  System element: RRTireTemHSC4 */
#define DeTPMS_HSC3_FrP01_RRTireTemHSC4_RANGE_MAX (194)
#define DeTPMS_HSC3_FrP01_RRTireTemHSC4_RANGE_MIN (-60)
#define DeTPMS_HSC3_FrP01_RRTireTemHSC4_DEFAULT (30.0)

#define DeTPMS_HSC3_FrP01_RRTireTemHSC4_Cx00_0x0_0x7F_ (0)

/* Constants for Bus element: RRTirePrsVHSC4  -  System element: RRTirePrsVHSC4 */
#define DeTPMS_HSC3_FrP01_RRTirePrsVHSC4_RANGE_MAX (1U)
#define DeTPMS_HSC3_FrP01_RRTirePrsVHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_RRTirePrsVHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP01_RRTirePrsVHSC4_Cx0_Valid (0U)

#define DeTPMS_HSC3_FrP01_RRTirePrsVHSC4_Cx1_Invalid (1U)

/* Constants for Bus element: RRTirePrsHSC4  -  System element: RRTirePrsHSC4 */
#define DeTPMS_HSC3_FrP01_RRTirePrsHSC4_RANGE_MAX (508U)
#define DeTPMS_HSC3_FrP01_RRTirePrsHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_RRTirePrsHSC4_DEFAULT (220.0U)

#define DeTPMS_HSC3_FrP01_RRTirePrsHSC4_Cx00_kPa_0x0_0x7F_ (0U)

/* Constants for Bus element: RLTireTemVHSC4  -  System element: RLTireTemVHSC4 */
#define DeTPMS_HSC3_FrP01_RLTireTemVHSC4_RANGE_MAX (1U)
#define DeTPMS_HSC3_FrP01_RLTireTemVHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_RLTireTemVHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP01_RLTireTemVHSC4_Cx0_Valid (0U)

#define DeTPMS_HSC3_FrP01_RLTireTemVHSC4_Cx1_Invalid (1U)

/* Constants for Bus element: RLTireTemHSC4  -  System element: RLTireTemHSC4 */
#define DeTPMS_HSC3_FrP01_RLTireTemHSC4_RANGE_MAX (194)
#define DeTPMS_HSC3_FrP01_RLTireTemHSC4_RANGE_MIN (-60)
#define DeTPMS_HSC3_FrP01_RLTireTemHSC4_DEFAULT (30.0)

#define DeTPMS_HSC3_FrP01_RLTireTemHSC4_Cx00_0x0_0x7F_ (0)

/* Constants for Bus element: RLTirePrsVHSC4  -  System element: RLTirePrsVHSC4 */
#define DeTPMS_HSC3_FrP01_RLTirePrsVHSC4_RANGE_MAX (1U)
#define DeTPMS_HSC3_FrP01_RLTirePrsVHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_RLTirePrsVHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP01_RLTirePrsVHSC4_Cx0_Valid (0U)

#define DeTPMS_HSC3_FrP01_RLTirePrsVHSC4_Cx1_Invalid (1U)

/* Constants for Bus element: RLTirePrsHSC4  -  System element: RLTirePrsHSC4 */
#define DeTPMS_HSC3_FrP01_RLTirePrsHSC4_RANGE_MAX (508U)
#define DeTPMS_HSC3_FrP01_RLTirePrsHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_RLTirePrsHSC4_DEFAULT (220.0U)

#define DeTPMS_HSC3_FrP01_RLTirePrsHSC4_Cx00_kPa_0x0_0x7F_ (0U)

/* Constants for Bus element: FRTireTemVHSC4  -  System element: FRTireTemVHSC4 */
#define DeTPMS_HSC3_FrP01_FRTireTemVHSC4_RANGE_MAX (1U)
#define DeTPMS_HSC3_FrP01_FRTireTemVHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_FRTireTemVHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP01_FRTireTemVHSC4_Cx0_Valid (0U)

#define DeTPMS_HSC3_FrP01_FRTireTemVHSC4_Cx1_Invalid (1U)

/* Constants for Bus element: FRTireTemHSC4  -  System element: FRTireTemHSC4 */
#define DeTPMS_HSC3_FrP01_FRTireTemHSC4_RANGE_MAX (194)
#define DeTPMS_HSC3_FrP01_FRTireTemHSC4_RANGE_MIN (-60)
#define DeTPMS_HSC3_FrP01_FRTireTemHSC4_DEFAULT (30.0)

#define DeTPMS_HSC3_FrP01_FRTireTemHSC4_Cx00_0x0_0x7F_ (0)

/* Constants for Bus element: FRTirePrsVHSC4  -  System element: FRTirePrsVHSC4 */
#define DeTPMS_HSC3_FrP01_FRTirePrsVHSC4_RANGE_MAX (1U)
#define DeTPMS_HSC3_FrP01_FRTirePrsVHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_FRTirePrsVHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP01_FRTirePrsVHSC4_Cx0_Valid (0U)

#define DeTPMS_HSC3_FrP01_FRTirePrsVHSC4_Cx1_Invalid (1U)

/* Constants for Bus element: FRTirePrsHSC4  -  System element: FRTirePrsHSC4 */
#define DeTPMS_HSC3_FrP01_FRTirePrsHSC4_RANGE_MAX (508U)
#define DeTPMS_HSC3_FrP01_FRTirePrsHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_FRTirePrsHSC4_DEFAULT (220.0U)

#define DeTPMS_HSC3_FrP01_FRTirePrsHSC4_Cx00_kPa_0x0_0x7F_ (0U)

/* Constants for Bus element: FLTireTemVHSC4  -  System element: FLTireTemVHSC4 */
#define DeTPMS_HSC3_FrP01_FLTireTemVHSC4_RANGE_MAX (1U)
#define DeTPMS_HSC3_FrP01_FLTireTemVHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_FLTireTemVHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP01_FLTireTemVHSC4_Cx0_Valid (0U)

#define DeTPMS_HSC3_FrP01_FLTireTemVHSC4_Cx1_Invalid (1U)

/* Constants for Bus element: FLTireTemHSC4  -  System element: FLTireTemHSC4 */
#define DeTPMS_HSC3_FrP01_FLTireTemHSC4_RANGE_MAX (194)
#define DeTPMS_HSC3_FrP01_FLTireTemHSC4_RANGE_MIN (-60)
#define DeTPMS_HSC3_FrP01_FLTireTemHSC4_DEFAULT (30.0)

#define DeTPMS_HSC3_FrP01_FLTireTemHSC4_Cx00_0x0_0x7F_ (0)

/* Constants for Bus element: FLTirePrsVHSC4  -  System element: FLTirePrsVHSC4 */
#define DeTPMS_HSC3_FrP01_FLTirePrsVHSC4_RANGE_MAX (1U)
#define DeTPMS_HSC3_FrP01_FLTirePrsVHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_FLTirePrsVHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP01_FLTirePrsVHSC4_Cx0_Valid (0U)

#define DeTPMS_HSC3_FrP01_FLTirePrsVHSC4_Cx1_Invalid (1U)

/* Constants for Bus element: FLTirePrsHSC4  -  System element: FLTirePrsHSC4 */
#define DeTPMS_HSC3_FrP01_FLTirePrsHSC4_RANGE_MAX (508U)
#define DeTPMS_HSC3_FrP01_FLTirePrsHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP01_FLTirePrsHSC4_DEFAULT (220.0U)

#define DeTPMS_HSC3_FrP01_FLTirePrsHSC4_Cx00_kPa_0x0_0x7F_ (0U)

/* --- DeTPMS_HSC3_FrP02 --- */
/* Constants for Bus element: FLTireStsHSC4  -  System element: FLTireStsHSC4 */
#define DeTPMS_HSC3_FrP02_FLTireStsHSC4_RANGE_MAX (7U)
#define DeTPMS_HSC3_FrP02_FLTireStsHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP02_FLTireStsHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP02_FLTireStsHSC4_Cx0_Normal (0U)

#define DeTPMS_HSC3_FrP02_FLTireStsHSC4_Cx1_Unkown (1U)

#define DeTPMS_HSC3_FrP02_FLTireStsHSC4_Cx2_Pressure_Low (2U)

#define DeTPMS_HSC3_FrP02_FLTireStsHSC4_Cx3_Quick_leak (3U)

#define DeTPMS_HSC3_FrP02_FLTireStsHSC4_Cx4_Pressure_High (4U)

#define DeTPMS_HSC3_FrP02_FLTireStsHSC4_Cx5_Temperature_High (5U)

#define DeTPMS_HSC3_FrP02_FLTireStsHSC4_Cx6_Axle_Pressure_imbalance (6U)

#define DeTPMS_HSC3_FrP02_FLTireStsHSC4_Cx7_Battery_Low (7U)

/* Constants for Bus element: FRTireStsHSC4  -  System element: FRTireStsHSC4 */
#define DeTPMS_HSC3_FrP02_FRTireStsHSC4_RANGE_MAX (7U)
#define DeTPMS_HSC3_FrP02_FRTireStsHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP02_FRTireStsHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP02_FRTireStsHSC4_Cx0_Normal (0U)

#define DeTPMS_HSC3_FrP02_FRTireStsHSC4_Cx1_Unkown (1U)

#define DeTPMS_HSC3_FrP02_FRTireStsHSC4_Cx2_Pressure_Low (2U)

#define DeTPMS_HSC3_FrP02_FRTireStsHSC4_Cx3_Quick_leak (3U)

#define DeTPMS_HSC3_FrP02_FRTireStsHSC4_Cx4_Pressure_High (4U)

#define DeTPMS_HSC3_FrP02_FRTireStsHSC4_Cx5_Temperature_High (5U)

#define DeTPMS_HSC3_FrP02_FRTireStsHSC4_Cx6_Axle_Pressure_imbalance (6U)

#define DeTPMS_HSC3_FrP02_FRTireStsHSC4_Cx7_Battery_Low (7U)

/* Constants for Bus element: RLTireStsHSC4  -  System element: RLTireStsHSC4 */
#define DeTPMS_HSC3_FrP02_RLTireStsHSC4_RANGE_MAX (7U)
#define DeTPMS_HSC3_FrP02_RLTireStsHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP02_RLTireStsHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP02_RLTireStsHSC4_Cx0_Normal (0U)

#define DeTPMS_HSC3_FrP02_RLTireStsHSC4_Cx1_Unkown (1U)

#define DeTPMS_HSC3_FrP02_RLTireStsHSC4_Cx2_Pressure_Low (2U)

#define DeTPMS_HSC3_FrP02_RLTireStsHSC4_Cx3_Quick_leak (3U)

#define DeTPMS_HSC3_FrP02_RLTireStsHSC4_Cx4_Pressure_High (4U)

#define DeTPMS_HSC3_FrP02_RLTireStsHSC4_Cx5_Temperature_High (5U)

#define DeTPMS_HSC3_FrP02_RLTireStsHSC4_Cx6_Axle_Pressure_imbalance (6U)

#define DeTPMS_HSC3_FrP02_RLTireStsHSC4_Cx7_Battery_Low (7U)

/* Constants for Bus element: RRTireStsHSC4  -  System element: RRTireStsHSC4 */
#define DeTPMS_HSC3_FrP02_RRTireStsHSC4_RANGE_MAX (7U)
#define DeTPMS_HSC3_FrP02_RRTireStsHSC4_RANGE_MIN (0U)
#define DeTPMS_HSC3_FrP02_RRTireStsHSC4_DEFAULT (0U)

#define DeTPMS_HSC3_FrP02_RRTireStsHSC4_Cx0_Normal (0U)

#define DeTPMS_HSC3_FrP02_RRTireStsHSC4_Cx1_Unkown (1U)

#define DeTPMS_HSC3_FrP02_RRTireStsHSC4_Cx2_Pressure_Low (2U)

#define DeTPMS_HSC3_FrP02_RRTireStsHSC4_Cx3_Quick_leak (3U)

#define DeTPMS_HSC3_FrP02_RRTireStsHSC4_Cx4_Pressure_High (4U)

#define DeTPMS_HSC3_FrP02_RRTireStsHSC4_Cx5_Temperature_High (5U)

#define DeTPMS_HSC3_FrP02_RRTireStsHSC4_Cx6_Axle_Pressure_imbalance (6U)

#define DeTPMS_HSC3_FrP02_RRTireStsHSC4_Cx7_Battery_Low (7U)

/* --- DeIECU_HSC4_FrP08_SV --- */
/* Constants for Bus element: HD_sysrdyHSC4  -  System element: HD_sysrdyHSC4 */
#define DeIECU_HSC4_FrP08_SV_HD_sysrdyHSC4_RANGE_MAX (1U)
#define DeIECU_HSC4_FrP08_SV_HD_sysrdyHSC4_RANGE_MIN (0U)
#define DeIECU_HSC4_FrP08_SV_HD_sysrdyHSC4_DEFAULT (0U)

#define DeIECU_HSC4_FrP08_SV_HD_sysrdyHSC4_Cx0_not_ready (0U)

#define DeIECU_HSC4_FrP08_SV_HD_sysrdyHSC4_Cx1_ready (1U)

/* Constants for Bus element: HD_CurViewHSC4  -  System element: HD_CurViewHSC4 */
#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_RANGE_MAX (15U)
#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_RANGE_MIN (0U)
#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_DEFAULT (0U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_Cx0_No_request (0U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_Cx1_front_view (1U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_Cx2_front_view_wide (2U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_Cx3_Rear_view (3U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_Cx4_2D_Rear_view_wide (4U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_Cx5_left_right_view_wide (5U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_Cx6_front_left_view_3D_ (6U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_Cx7_front_right_view_3D_ (7U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_Cx8_rear_left_view_3D_ (8U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_Cx9_rear_right_view_3D_ (9U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_CxA_full_screen (10U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_CxB_Reserved (11U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_CxC_Reserved (12U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_CxD_Reserved (13U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_CxE_Reserved (14U)

#define DeIECU_HSC4_FrP08_SV_HD_CurViewHSC4_CxF_Reserved (15U)

/* Constants for Bus element: HD_AVMsysrdyHSC4  -  System element: HD_AVMsysrdyHSC4 */
#define DeIECU_HSC4_FrP08_SV_HD_AVMsysrdyHSC4_RANGE_MAX (1U)
#define DeIECU_HSC4_FrP08_SV_HD_AVMsysrdyHSC4_RANGE_MIN (0U)
#define DeIECU_HSC4_FrP08_SV_HD_AVMsysrdyHSC4_DEFAULT (0U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMsysrdyHSC4_Cx0_not_ready (0U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMsysrdyHSC4_Cx1_ready (1U)

/* Constants for Bus element: HD_InfoDisplayHSC4  -  System element: HD_InfoDisplayHSC4 */
#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_RANGE_MAX (15U)
#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_RANGE_MIN (0U)
#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_DEFAULT (0U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_Cx0_No_Request (0U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_Cx1_Overspeed (1U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_Cx2_reserved (2U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_Cx3_reserved (3U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_Cx4_reserved (4U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_Cx5_reserved (5U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_Cx6_reserved (6U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_Cx7_reserved (7U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_Cx8_reserved (8U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_Cx9_reserved (9U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_CxA_reserved (10U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_CxB_reserved (11U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_CxC_reserved (12U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_CxD_reserved (13U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_CxE_reserved (14U)

#define DeIECU_HSC4_FrP08_SV_HD_InfoDisplayHSC4_CxF_reserved (15U)

/* Constants for Bus element: HD_VideoFmtStaHSC4  -  System element: HD_VideoFmtStaHSC4 */
#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_RANGE_MAX (15U)
#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_RANGE_MIN (0U)
#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_DEFAULT (0U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_Cx0_Unlocked (0U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_Cx1_1440_640 (1U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_Cx2_1200_900 (2U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_Cx3_FIRST_DRIVE (3U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_Cx4_PDC_detected (4U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_Cx5_Reserved (5U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_Cx6_Reserved (6U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_Cx7_Reserved (7U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_Cx8_Reserved (8U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_Cx9_Reserved (9U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_CxA_Reserved (10U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_CxB_Reserved (11U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_CxC_Reserved (12U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_CxD_Reserved (13U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_CxE_Reserved (14U)

#define DeIECU_HSC4_FrP08_SV_HD_VideoFmtStaHSC4_CxF_Reserved (15U)

/* Constants for Bus element: HD_ErrorDisplayHSC4  -  System element: HD_ErrorDisplayHSC4 */
#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_RANGE_MAX (15U)
#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_RANGE_MIN (0U)
#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_DEFAULT (0U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_Cx0_No_Request (0U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_Cx1_Camera_Failure (1U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_Cx2_Radar_Failure (2U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_Cx3_Auxilirary_Line_Failre (3U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_Cx4_Transparent_Car_Function_Failure (4U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_Cx5_MOD_Function_Failure (5U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_Cx6_EOL_After_Sale_Calibration_Function_Failure (6U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_Cx7_reserved (7U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_Cx8_reserved (8U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_Cx9_reserved (9U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_CxA_reserved (10U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_CxB_reserved (11U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_CxC_reserved (12U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_CxD_reserved (13U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_CxE_reserved (14U)

#define DeIECU_HSC4_FrP08_SV_HD_ErrorDisplayHSC4_CxF_reserved (15U)

/* Constants for Bus element: HD_AVMVideoFmtStaHSC4  -  System element: HD_AVMVideoFmtStaHSC4 */
#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_RANGE_MAX (15U)
#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_RANGE_MIN (0U)
#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_DEFAULT (0U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_Cx0_Unlocked (0U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_Cx1_1440_640 (1U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_Cx2_1200_900 (2U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_Cx3_FIRST_DRIVE (3U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_Cx4_PDC_detected (4U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_Cx5_Reserved (5U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_Cx6_Reserved (6U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_Cx7_Reserved (7U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_Cx8_Reserved (8U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_Cx9_Reserved (9U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_CxA_Reserved (10U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_CxB_Reserved (11U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_CxC_Reserved (12U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_CxD_Reserved (13U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_CxE_Reserved (14U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMVideoFmtStaHSC4_CxF_Reserved (15U)

/* Constants for Bus element: HD_AVMCurViewHSC4  -  System element: HD_AVMCurViewHSC4 */
#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_RANGE_MAX (15U)
#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_RANGE_MIN (0U)
#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_DEFAULT (0U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_Cx0_No_request (0U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_Cx1_front_view (1U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_Cx2_front_view_wide (2U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_Cx3_Rear_view (3U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_Cx4_2D_Rear_view_wide (4U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_Cx5_left_right_view_wide (5U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_Cx6_front_left_view_3D_ (6U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_Cx7_front_right_view_3D_ (7U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_Cx8_rear_left_view_3D_ (8U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_Cx9_rear_right_view_3D_ (9U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_CxA_full_screen (10U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_CxB_Reserved (11U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_CxC_Reserved (12U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_CxD_Reserved (13U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_CxE_Reserved (14U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMCurViewHSC4_CxF_Reserved (15U)

/* Constants for Bus element: HD_AVMInfoDisplayHSC4  -  System element: HD_AVMInfoDisplayHSC4 */
#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_RANGE_MAX (15U)
#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_RANGE_MIN (0U)
#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_DEFAULT (0U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_Cx0_No_Request (0U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_Cx1_Overspeed (1U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_Cx3_AVP_mode (3U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_Cx4_Not_AVP_mode (4U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_Cx5_reserved (5U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_Cx6_reserved (6U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_Cx7_reserved (7U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_Cx8_reserved (8U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_Cx9_reserved (9U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_CxA_reserved (10U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_CxB_reserved (11U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_CxC_reserved (12U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_CxD_reserved (13U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_CxE_reserved (14U)

#define DeIECU_HSC4_FrP08_SV_HD_AVMInfoDisplayHSC4_CxF_reserved (15U)

/* Constants for Bus element: HD_AVMErrorDisplayHSC4  -  System element: HD_AVMErrorDisplayHSC4 */
#define DeIECU_HSC4_FrP08_SV_HD_AVMErrorDisplayHSC4_RANGE_MAX (15U)
#define DeIECU_HSC4_FrP08_SV_HD_AVMErrorDisplayHSC4_RANGE_MIN (0U)
#define DeIECU_HSC4_FrP08_SV_HD_AVMErrorDisplayHSC4_DEFAULT (0U)


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BUSSIGNALS_ENUMS_H_ */

