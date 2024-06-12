#pragma once

#include "types.h"
#include <stdint.h>

typedef struct {
    byte* ram;
    uint32_t size;
} Memory;

/**
 * @brief Initialise a memory struct
 * 
 * @param mem_size : number of memory addresses
 * @param mem : pointer to memory
 * @return int : error code
 */
int init_mem(uint32_t mem_size, Memory* mem);

/**
 * @brief 
 * 
 * @param mem : memory to be freed
 * @return int : error code
 */
int delete_mem(Memory** mem);

/**
 * @brief 
 * 
 * @param mem : memory struct
 * @param addr : address in memory to read data. starts at 0x0
 * @param out : pointer to byte with read data
 * @return int 
 */
int read_mem(Memory* mem, word addr, byte out);

/**
 * @brief 
 * 
 * @param mem : memory struc
 * @param addr :address to write in memory
 * @return int : error code
 */
int write_mem(Memory* mem, word addr);