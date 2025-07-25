#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t value = 0; // 00000000
    value |= 1;   // 0000010
    value <<= 1; // 0000010
    value <<= 1;
    

    printf("Final value: %d\n", value);  
    return 0;
}
