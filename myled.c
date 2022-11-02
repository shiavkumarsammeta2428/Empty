
#include "hardware/structs/iobank0.h"
#include "pico/stdlib.h"

#include "hardware/timer.h"


int main() {
 
stdio_init_all();

  ;
 
 iobank0_hw->io[25].ctrl=5;

 sio_hw->gpio_oe = 1 << 25;

//  sio_hw->gpio_oe_set |= 1 << 25;

 while(1)
 {


    sio_hw->gpio_out |= 1<<25;
    printf("led on ");
    sleep_ms(500);
    

    sio_hw->gpio_out &= ~(1<<25);
    printf("led off ");
    sleep_ms(500);
 }

}



