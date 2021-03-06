/*****************************************************************************
 *
 * MODULE:             ZCL Options
 *
 * COMPONENT:          zcl_options.h
 *
 * DESCRIPTION:        Options Header for ZigBee Cluster Library functions
 *                     [Dimmable Plug]
 *
 ****************************************************************************
 *
 * This software is owned by NXP B.V. and/or its supplier and is protected
 * under applicable copyright laws. All rights are reserved. We grant You,
 * and any third parties, a license to use this software solely and
 * exclusively on NXP products [NXP Microcontrollers such as JN5168, JN5164,
 * JN5161, JN5148, JN5142, JN5139].
 * You, and any third parties must reproduce the copyright and warranty notice
 * and any other legend of ownership on each copy or partial copy of the
 * software.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Copyright NXP B.V. 2012. All rights reserved
 *
 ***************************************************************************/

#ifndef ZCL_OPTIONS_H
#define ZCL_OPTIONS_H

#include <jendefs.h>


PUBLIC void vSaveScenesNVM(void);
PUBLIC void vLoadScenesNVM(void);
/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/

#define MONO_WITH_LEVEL

/*
 * Define ONE of the following to set the Primary and Secondary ZLL Channels
 *
 *                      Primaries          Secondaries
 * ZLL_PRIMARY ->       [ 11 15 20 25] and [ 12 13 14 16 17 18 19 21 22 23 24 26]
 * ZLL_PRIMARY_PLUS1 -> [ 12 16 21 26] and [ 11 13 14 15 17 18 19 20 22 23 24 25]
 * ZLL_PRIMARY_PLUS2 -> [ 13 17 22 19] and [ 11 12 14 15 16 18 20 21 23 24 25 26]
 * ZLL_PRIMARY_PLUS3 -> [ 14 18 23 24] and [ 11 12 13 15 16 17 19 20 21 22 25 26]
 *
 */
#define ZLL_PRIMARY
//#define ZLL_PRIMARY_PLUS1
//#define ZLL_PRIMARY_PLUS2
//#define ZLL_PRIMARY_PLUS3

//#define ZLL_NO_APS_ACK

/* Sets the number of endpoints that will be created by the ZCL library */
#define ZLL_NUMBER_OF_ENDPOINTS                             2
#define ZLL_NUMBER_DEVICES                                  1

#define ZLL_MANUFACTURER_CODE                                0x1037

/* Set this Tue to disable non error default responses from clusters */
#define ZLL_DISABLE_DEFAULT_RESPONSES       (TRUE)

#define ZLL_NUMBER_OF_ZCL_APPLICATION_TIMERS                 3

#define NUM_ENDPOINT_RECORDS         1
#define NUM_GROUP_RECORDS            1


/* Clusters used by this application */
#define CLD_BASIC
#define BASIC_SERVER

#define CLD_ZLL_COMMISSION
#define ZLL_COMMISSION_SERVER
//#define ZLL_COMMISSION_CLIENT

#define ZLL_CMD_RESPONSE_OPTION

#define CLD_IDENTIFY
#define IDENTIFY_SERVER
#define CLD_IDENTIFY_TICKS_PER_SECOND    10
#define CLD_IDENTIFY_SUPPORT_ZLL_ENHANCED_COMMANDS

#define CLD_GROUPS
#define GROUPS_SERVER
#define CLD_GROUPS_MAX_NUMBER_OF_GROUPS                     16
#define CLD_GROUPS_DISABLE_NAME_SUPPORT


#define CLD_ONOFF
#define ONOFF_SERVER

#define CLD_LEVEL_CONTROL
#define LEVEL_CONTROL_SERVER
#define CLD_LEVELCONTROL_ATTR_ON_OFF_TRANSITION_TIME        (10)
#define CLD_LEVELCONTROL_TICKS_PER_SECOND                   10
#define CLD_LEVELCONTROL_MIN_LEVEL                          (12)
#define CLD_LEVELCONTROL_MAX_LEVEL                          (0xfe)


#define CLD_SCENES
#define SCENES_SERVER
#define CLD_SCENES_MAX_NUMBER_OF_SCENES                     9
#define CLD_SCENES_DISABLE_NAME_SUPPORT
#define CLD_SCENES_MAX_SCENE_NAME_LENGTH                    0
#define CLD_SCENES_MAX_SCENE_STORAGE_BYTES                  22
#define CLD_SCENES_ATTR_LAST_CONFIGURED_BY



/****************************************************************************/
/*             Basic Cluster - Optional Attributes                          */
/*                                                                          */
/* Add the following #define's to your zcl_options.h file to add optional   */
/* attributes to the basic cluster.                                         */
/****************************************************************************/

#define ZCL_ATTRIBUTE_READ_SERVER_SUPPORTED
#define ZCL_ATTRIBUTE_WRITE_SERVER_SUPPORTED

#define CLD_BAS_ATTR_APPLICATION_VERSION
#define CLD_BAS_ATTR_STACK_VERSION
#define CLD_BAS_ATTR_HARDWARE_VERSION
#define CLD_BAS_ATTR_MANUFACTURER_NAME
#define CLD_BAS_ATTR_MODEL_IDENTIFIER
#define CLD_BAS_ATTR_DATE_CODE
#define CLD_BAS_ATTR_SW_BUILD_ID


#define CLD_BAS_APP_VERSION         (1)
#define CLD_BAS_STACK_VERSION       (1)
#define CLD_BAS_HARDWARE_VERSION    (1)
#define CLD_BAS_MANUF_NAME_SIZE     (3)
#define CLD_BAS_MODEL_ID_SIZE       (16)
#define CLD_BAS_DATE_SIZE           (8)
#define CLD_BAS_POWER_SOURCE        E_CLD_BAS_PS_SINGLE_PHASE_MAINS
#define CLD_BAS_SW_BUILD_SIZE       (9)


#define CLD_IDENTIFY_SUPPORT_ZLL_ENHANCED_COMMANDS

#define CLD_SCENES_SUPPORT_ZLL_ENHANCED_COMMANDS
#define CLD_SCENES_SUPPORT_ZLL

#define CLD_ONOFF_ATTR_GLOBAL_SCENE_CONTROL
#define CLD_ONOFF_ATTR_ON_TIME
#define CLD_ONOFF_ATTR_OFF_WAIT_TIME
#define CLD_ONOFF_SUPPORT_ZLL_ENHANCED_COMMANDS

/****************************************************************************/
/*             Level Control Cluster - Optional Attributes                  */
/*                                                                          */
/* Add the following #define's to your zcl_options.h file to add optional   */
/* attributes to the level control cluster.                                 */
/****************************************************************************/

#define CLD_LEVELCONTROL_ATTR_REMAINING_TIME
//#define CLD_LEVELCONTROL_ATTR_ON_LEVEL

/****************************************************************************/
/*             Scenes Cluster - Optional Attributes                         */
/*                                                                          */
/* Add the following #define's to your zcl_options.h file to add optional   */
/* attributes to the scenes cluster.                                        */
/****************************************************************************/



/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Functions                                            ***/
/****************************************************************************/
PUBLIC void* psGetDeviceTable(void);

/****************************************************************************/
/***        External Variables                                            ***/
/****************************************************************************/

/****************************************************************************/
/***        END OF FILE                                                   ***/
/****************************************************************************/

#endif /* ZCL_OPTIONS_H */
