#include <stdint.h>

typedef struct State8080 {
    // Here are the 8bit registers
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t h;
    uint8_t l;

    // 16bit stack pointer and program counter 
    uint16_t sp;
    uint16_t pc;

    // RAM
    uint8_t *memory;
} State8080;