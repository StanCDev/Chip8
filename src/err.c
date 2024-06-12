/**
 * @file error.c
 * @brief error messages
 */

const char* const ERR_MESSAGES[] = {
    "", // no error
    "I/O Error",
    "Runtime error",
    "(re|m|c)alloc failed",
    "Not enough arguments",
    "Invalid filename",
    "Invalid command",
    "Invalid argument",
    "Threading error",
    "Address out of memory range",
    "no error (shall not be displayed)" // ERR_LAST
};