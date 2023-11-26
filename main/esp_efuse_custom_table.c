/*
 * SPDX-FileCopyrightText: 2017-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "sdkconfig.h"
#include "esp_efuse.h"
#include <assert.h>
#include "esp_efuse_custom_table.h"

// md5_digest_table ba29b356a12ca13f7ed62b71e92f1198
// This file was generated from the file esp_efuse_custom_table.csv. DO NOT CHANGE THIS FILE MANUALLY.
// If you want to change some fields, you need to change esp_efuse_custom_table.csv file
// then run `efuse_common_table` or `efuse_custom_table` command it will generate this file.
// To show efuse_table run the command 'show_efuse_table'.

#define MAX_BLK_LEN CONFIG_EFUSE_MAX_BLK_LEN

// The last free bit in the block is counted over the entire file.
#define LAST_FREE_BIT_BLK3 184

_Static_assert(LAST_FREE_BIT_BLK3 <= MAX_BLK_LEN, "The eFuse table does not match the coding scheme. Edit the table and restart the efuse_common_table or efuse_custom_table command to regenerate the new files.");

static const esp_efuse_desc_t HARDWARE_REVISION[] = {
    {EFUSE_BLK3, 56, 16}, 	 // Revision,
};

static const esp_efuse_desc_t SERIAL_NO[] = {
    {EFUSE_BLK3, 72, 16}, 	 // SerialNo,
};

static const esp_efuse_desc_t BUILD_DATE[] = {
    {EFUSE_BLK3, 160, 24}, 	 // BuildDate,
};

static const esp_efuse_desc_t DISABLE_RESTRICTIONS[] = {
    {EFUSE_BLK3, 88, 1}, 	 // Restrictions,
};





const esp_efuse_desc_t* ESP_EFUSE_HARDWARE_REVISION[] = {
    &HARDWARE_REVISION[0],    		// Revision
    NULL
};

const esp_efuse_desc_t* ESP_EFUSE_SERIAL_NO[] = {
    &SERIAL_NO[0],    		// SerialNo
    NULL
};

const esp_efuse_desc_t* ESP_EFUSE_BUILD_DATE[] = {
    &BUILD_DATE[0],    		// BuildDate
    NULL
};

const esp_efuse_desc_t* ESP_EFUSE_DISABLE_RESTRICTIONS[] = {
    &DISABLE_RESTRICTIONS[0],    		// Restrictions
    NULL
};
