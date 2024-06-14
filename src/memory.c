#include "memory.h"
#include "types.h"
#include "err.h"

#include <stdint.h>
#include <stdlib.h>
#include <err.h>


int init_mem(uint32_t mem_size, Memory* mem){
    M_REQUIRE_NON_NULL(mem);
    byte* temp = calloc(mem_size, sizeof(byte));

    if (temp == NULL) return ERR_OUT_OF_MEMORY;

    mem->ram = temp;
    mem->size = mem_size;

    return ERR_NONE;

}

int delete_mem(Memory** mem){
    M_REQUIRE_NON_NULL(mem);
    if (*mem != NULL){
        free(*mem);
        *mem = NULL;
    }
    return ERR_NONE;
}

int read_mem(Memory* mem, word addr, byte* out){
    M_REQUIRE_NON_NULL(mem);
    M_REQUIRE_NON_NULL(mem->ram);
    M_REQUIRE_NON_NULL(out);
    if (addr.WORD >= mem->size) return ERR_MEMORY_RANGE;
    
    *out = mem->ram[addr.WORD];
    return ERR_NONE;
}

int write_mem(Memory* mem, word addr, byte in){
    M_REQUIRE_NON_NULL(mem);
    M_REQUIRE_NON_NULL(mem->ram);
    if (addr.WORD >= mem->size) return ERR_MEMORY_RANGE;
    
    mem->ram[addr.WORD] = in;
    return ERR_NONE;
}