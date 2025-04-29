#include <zephyr/kernel.h>

void main(void) {
    while (1) {
        printk("Hello from STM32F407!\n");
        k_sleep(K_SECONDS(1));
    }
}