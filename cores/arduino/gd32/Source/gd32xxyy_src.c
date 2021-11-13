#ifdef GD32F30x
#include "gd32f30x_adc.c"
#include "gd32f30x_bkp.c"
#include "gd32f30x_can.c"
#include "gd32f30x_crc.c"
#include "gd32f30x_ctc.c"
#include "gd32f30x_dac.c"
#include "gd32f30x_dbg.c"
#include "gd32f30x_dma.c"
#include "gd32f30x_enet.c"
#include "gd32f30x_exmc.c"
#include "gd32f30x_exti.c"
#include "gd32f30x_fmc.c"
#include "gd32f30x_fwdgt.c"
#include "gd32f30x_gpio.c"
#include "gd32f30x_i2c.c"
#include "gd32f30x_misc.c"
#include "gd32f30x_pmu.c"
#include "gd32f30x_rcu.c"
#include "gd32f30x_rtc.c"
#include "gd32f30x_sdio.c"
#include "gd32f30x_spi.c"
#include "gd32f30x_timer.c"
#include "gd32f30x_usart.c"
#include "gd32f30x_wwdgt.c"
#elif defined(GD32F3x0)
#include "gd32f3x0_adc.c"
#include "gd32f3x0_crc.c"
#include "gd32f3x0_ctc.c"
#include "gd32f3x0_dbg.c"
#include "gd32f3x0_dma.c"
#include "gd32f3x0_exti.c"
#include "gd32f3x0_fmc.c"
#include "gd32f3x0_fwdgt.c"
#include "gd32f3x0_gpio.c"
#include "gd32f3x0_i2c.c"
#include "gd32f3x0_misc.c"
#include "gd32f3x0_pmu.c"
#include "gd32f3x0_rcu.c"
#include "gd32f3x0_rtc.c"
#include "gd32f3x0_spi.c"
#include "gd32f3x0_syscfg.c"
#include "gd32f3x0_timer.c"
#include "gd32f3x0_tsi.c"
#include "gd32f3x0_usart.c"
#ifdef GD32F350
#include "gd32f3x0_cec.c"
#include "gd32f3x0_cmp.c"
#include "gd32f3x0_dac.c"
#endif
#elif defined(GD32F1x0)
#include "gd32f1x0_adc.c"
#include "gd32f1x0_cec.c"
#include "gd32f1x0_crc.c"
#include "gd32f1x0_cmp.c"
#include "gd32f1x0_dac.c"
#include "gd32f1x0_dbg.c"
#include "gd32f1x0_dma.c"
#include "gd32f1x0_exti.c"
#include "gd32f1x0_fmc.c"
#include "gd32f1x0_gpio.c"
#include "gd32f1x0_syscfg.c"
#include "gd32f1x0_i2c.c"
#include "gd32f1x0_fwdgt.c"
#include "gd32f1x0_pmu.c"
#include "gd32f1x0_rcu.c"
#include "gd32f1x0_rtc.c"
#include "gd32f1x0_spi.c"
#include "gd32f1x0_timer.c"
#include "gd32f1x0_usart.c"
#include "gd32f1x0_wwdgt.c"
#include "gd32f1x0_misc.c"
#include "gd32f1x0_tsi.c"
#ifdef GD32F170_190
#include "gd32f1x0_slcd.c"
#include "gd32f1x0_opa.c"
#include "gd32f1x0_ivref.c"
#include "gd32f1x0_can.c"
#endif /* GD32F170_190 */
#else
#error "Unknown chip series!"
#endif
