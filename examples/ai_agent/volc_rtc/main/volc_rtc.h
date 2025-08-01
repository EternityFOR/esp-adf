/* volc rtc example code

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#pragma once

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief  Initialize the Volc RTC module and start the application.
 *
 * @return
 *     - ESP_OK: Initialization was successful.
 *     - Other: Appropriate erro code indicating the failure reason.
 */
esp_err_t volc_rtc_app_startup(void);

#ifdef __cplusplus
}
#endif
