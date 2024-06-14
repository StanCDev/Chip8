#include "err.h"
#include "memory.h"
#include "types.h"

#include <string.h> //memset

#define NB_REGISTERS 16

/**
 * Registers
 */
static short registers[NB_REGISTERS];
/**
 * Memory
 */
static Memory mem;
/**
 * Stack
 */


int init_main(){
    int ret = 0;

    ret = init_mem(MEM_SIZE, &mem);
    if (ret != ERR_NONE) return ret;


    return ERR_NONE;
}

int main(int argc, char* argv[]){
    int runProgram = 1;

    

    while (runProgram){

    }

    return ERR_NONE;
}