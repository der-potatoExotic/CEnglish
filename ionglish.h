#ifndef IONGLISH_H
#define IONGLISH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRINT printf(
#define INPUT scanf(
#define ADD_STRING snprintf(
#define COPY_STRING strcpy(
#define COMPARE_STRING strcmp(
#define SET_MEMORY memset(
#define ALLOCATE_MEMORY malloc(
#define COPY_MEMORY memcpy(
#define CONSOLE system(
#define REOPEN_FILE freopen(
#define REOPEN_FILE_SAFELY freopen_s(

#define WRITE_FILE "w"
#define READ_FILE "r"
#define STANDARD_OUTPUT stdout
#define STANDARD_INPUT stdin
#define STANDARD_ERROR stderr
#define PAUSE_CONSOLE "pause" 
#endif