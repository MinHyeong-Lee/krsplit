#pragma once

#include_next "mcuconf.h"

#undef  RP_PWM_USE_PWM6
#define RP_PWM_USE_PWM6 TRUE

#undef  RP_SPI_USE_SPI0
#define RP_SPI_USE_SPI0 TRUE