/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_SRC_MGOS_MG_RPC_CHANNEL_UART_H_
#define CS_FW_SRC_MGOS_MG_RPC_CHANNEL_UART_H_

#include <stdbool.h>

#include "mg_rpc_channel.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct mg_rpc_channel *mg_rpc_channel_uart(int uart_no,
                                           bool wait_for_start_frame);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CS_FW_SRC_MGOS_MG_RPC_CHANNEL_UART_H_ */
