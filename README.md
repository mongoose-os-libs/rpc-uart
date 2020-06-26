# Implementation of Mongoose OS RPC over UART
- Uart dispatcher
```C
void mg_rpc_channel_uart_dispatcher(int uart_no, void *arg);
```
- Uart connection
```C
static void mg_rpc_channel_uart_ch_connect(struct mg_rpc_channel *ch);
```
- Uart send frame
```C
static bool mg_rpc_channel_uart_send_frame(struct mg_rpc_channel *ch,const struct mg_str f);
```
- Uart channel closed
```C
static void mg_rpc_channel_uart_ch_close(struct mg_rpc_channel *ch);
```
- Uart rpc config
```C
struct mg_rpc_channel *mg_rpc_channel_uart( const struct mgos_config_rpc_uart *ccfg,
                                              const struct mgos_uart_config *ucfg); 
```
- check if config was correct
```C
bool mgos_rpc_uart_init(void)
```
