/*
 * Copyright (c) 2014-2018 Cesanta Software Limited
 * All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the ""License"");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an ""AS IS"" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CS_FW_SRC_MGOS_MG_RPC_CHANNEL_UART_H_
#define CS_FW_SRC_MGOS_MG_RPC_CHANNEL_UART_H_

#include <stdbool.h>

#include "mg_rpc_channel.h"
#include "mgos_sys_config.h"
#include "mgos_uart.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

// Uart dispatcher
void mg_rpc_channel_uart_dispatcher(int uart_no, void *arg);

// Uart connect to uart channel
static void mg_rpc_channel_uart_ch_connect(struct mg_rpc_channel *ch);

// Uart send frame
static bool mg_rpc_channel_uart_send_frame(struct mg_rpc_channel *ch,const struct mg_str f);

//Uart channel closed
static void mg_rpc_channel_uart_ch_close(struct mg_rpc_channel *ch);

struct mg_rpc_channel *mg_rpc_channel_uart(
    const struct mgos_config_rpc_uart *cfg,
    const struct mgos_uart_config *ucfg);

// check if config was correct
bool mgos_rpc_uart_init(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CS_FW_SRC_MGOS_MG_RPC_CHANNEL_UART_H_ */
