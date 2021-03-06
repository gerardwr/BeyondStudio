/*****************************************************************************
 *
 * MODULE:             ZCL Options
 *
 * COMPONENT:          zcl_options.h
 *
 * DESCRIPTION:        Options Header for ZigBee Cluster Library functions
 *                     [Non Color Scene Controller]
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

/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/

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




#define ZLL_NO_APS_ACK

// Total number of group addresses required by all sub-device endpoints on the device
#define GROUPS_REQUIRED 4


/* Sets the number of endpoints that will be created by the ZCL library */
#define ZLL_NUMBER_OF_ENDPOINTS                             2
#define ZLL_NUMBER_DEVICES                                  1

#define ZLL_MANUFACTURER_CODE                                0x1037

/* Set this Tue to disable non error default responses from clusters */
#define ZLL_DISABLE_DEFAULT_RESPONSES       (TRUE)

#define ZLL_NUMBER_OF_ZCL_APPLICATION_TIMERS                 0


/* Clusters used by this application */
#define CLD_BASIC
#define BASIC_SERVER
#define BASIC_CLIENT

#define CLD_ZLL_COMMISSION
#define ZLL_COMMISSION_CLIENT

#define CLD_ZLL_UTILITY
#define ZLL_UTILITY_SERVER
#define ZLL_UTILITY_CLIENT

#define CLD_IDENTIFY
#define IDENTIFY_CLIENT
#define CLD_IDENTIFY_TICKS_PER_SECOND   10
#define CLD_IDENTIFY_SUPPORT_ZLL_ENHANCED_COMMANDS

#define CLD_GROUPS
#define GROUPS_CLIENT

#define CLD_ONOFF
#define ONOFF_CLIENT
#define CLD_ONOFF_SUPPORT_ZLL_ENHANCED_COMMANDS

#define CLD_LEVEL_CONTROL
#define LEVEL_CONTROL_CLIENT
#define CLD_LEVELCONTROL_TICKS_PER_SECOND                   10

#define CLD_SCENES
#define SCENES_CLIENT
#define CLD_SCENES_MAX_SCENE_STORAGE_BYTES                  100
#define CLD_SCENES_SUPPORT_ZLL_ENHANCED_COMMANDS

#define NUM_ENDPOINT_RECORDS        10
#define NUM_GROUP_RECORDS            4


/****************************************************************************/
/*             Basic Cluster - Optional Attributes                          */
/*                                                                          */
/* Add the following #define's to your zcl_options.h file to add optional   */
/* attributes to the basic cluster.                                         */
/****************************************************************************/

#define ZCL_ATTRIBUTE_READ_SERVER_SUPPORTED
#define ZCL_ATTRIBUTE_READ_CLIENT_SUPPORTED
#define ZCL_ATTRIBUTE_WRITE_SERVER_SUPPORTED

//#define   CLD_BAS_ATTR_LOCATION_DESCRIPTION
//#define   CLD_BAS_ATTR_PHYSICAL_ENVIRONMENT
//#define   CLD_BAS_ATTR_DEVICE_ENBLED
//#define   CLD_BAS_ATTR_ALARM_MASK

#define   CLD_BAS_ATTR_APPLICATION_VERSION
#define   CLD_BAS_ATTR_STACK_VERSION
#define   CLD_BAS_ATTR_HARDWARE_VERSION
#define   CLD_BAS_ATTR_MANUFACTURER_NAME
#define   CLD_BAS_ATTR_MODEL_IDENTIFIER
#define   CLD_BAS_ATTR_DATE_CODE
#define   CLD_BAS_ATTR_SW_BUILD_ID

#define CLD_BAS_APP_VERSION         (1)
#define CLD_BAS_STACK_VERSION       (1)
#define CLD_BAS_HARDWARE_VERSION    (1)
#define CLD_BAS_MANUF_NAME_SIZE     (3)
#define CLD_BAS_MODEL_ID_SIZE       (17)
#define CLD_BAS_DATE_SIZE           (8)
#define CLD_BAS_POWER_SOURCE        E_CLD_BAS_PS_BATTERY
#define CLD_BAS_SW_BUILD_SIZE       (9)

/* ZLL attribute in on off cluster */
#define CLD_ONOFF_ATTR_GLOBAL_SCENE_CONTROL
#define CLD_ONOFF_ATTR_ON_TIME
#define CLD_ONOFF_ATTR_OFF_WAIT_TIME


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
