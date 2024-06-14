#include "err.h"
#include "memory.h"
#include "types.h"

#include <string.h> //memset

#define NB_REGISTERS 16
#define STACK_SIZE 16

/**
 * Masks
 */
#define nnn 0x0FFF
#define n000 0xF000
#define nn00 0xFF00
#define n 0x000F
#define X 0x0F00
#define Y 0x00F0
#define kk 0x00FF
/**
 * General purpose registers
 */
static byte registers[NB_REGISTERS];

/**
 * Stack pointer
 */
static word sp;

/**
 * Program counter
 */
static word pc;

/**
 * Special I register vF
 */
static byte register_I;

/**
 * Memory
 */
static Memory mem;

/**
 * Stack
 */
static word stack[STACK_SIZE];



int init_main(){
    int ret = 0;

    /******************* Setting all registers to 0 ****************/
    ret = init_mem(MEM_SIZE, &mem);
    if (ret != ERR_NONE) return ret;
    memset(registers, 0, NB_REGISTERS);
    register_I = 0;



    return ERR_NONE;
}

int main(int argc, char* argv[]){
    int runProgram = 1;

    int init_ret = init_main();
    if (init_ret != ERR_NONE) return init_ret;
    int error = ERR_NONE;

    while (runProgram){
        /************* Requirements ***************/
        //stack pointer must be between 0 and 15
        if (!(sp.WORD >= 0x0 && sp.WORD <= 0xF)){
            delete_mem(&mem);
            return ERR_MEMORY_RANGE;
        }
        //program counter should be between 0 and 4096
        if (!(pc.WORD >= 0x0 && pc.WORD <= MEM_SIZE)){
            delete_mem(&mem);
            return ERR_MEMORY_RANGE;
        }
        /******************* Fetch ****************/
        byte hi;
        byte lo;
        error = read_mem(&mem, pc, &hi);
        if (error != ERR_NONE)
        pc.WORD += 1;
        error = read_mem(&mem, pc, &lo);
        if (error != ERR_NONE)
        pc.WORD += 1;
        word instr = {hi, lo};

        /******************* Decode & Execute ****************/
        if (instr.WORD == 0x00E0){
            /*Clear screen*/ 
        }

        switch (instr.WORD & n000)
        {
        case 0x0:
            /* code */
            break;
        case 0x1:
            /* code */
            break;
        case 0x2:
            /* code */
            break;
        case 0x3:
            /* code */
            break;
        case 0x4:
            /* code */
            break;
        case 0x5:
            /* code */
            break;
        case 0x6:
            /* code */
            break;
        case 0x7:
            /* code */
            break;
        case 0x8:
            /* code */
            break;
        case 0x9:
            /* code */
            break;
        case 0xA:
            /* code */
            break;
        case 0xB:
            /* code */
            break;
        case 0xC:
            /* code */
            break;
        case 0xD:
            /* code */
            break;
        case 0xE:
            /* code */
            break;
        case 0xF:
            /* code */
            break;
        default:
            break;
        }

    }

    return ERR_NONE;
}