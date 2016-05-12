
#ifndef _COMMON_SERVICE_H_
#define _COMMON_SERVICE_H_

/*! *********************************************************************************
*************************************************************************************
* Public macros
*************************************************************************************
********************************************************************************** */

/*! *********************************************************************************
*************************************************************************************
* Public type definitions
*************************************************************************************
********************************************************************************** */


/************************************************************************************
*************************************************************************************
* Public prototypes
*************************************************************************************
************************************************************************************/
bleResult_t CommonService_RecordCharValue(deviceId_t deviceId, uint16_t serviceHandle, 
                                          uint16_t charUuid16, uint8_t *data, uint8_t size);

#endif /*_COMMON_SERVICE */

/*! *********************************************************************************
 * @}
 ********************************************************************************** */
