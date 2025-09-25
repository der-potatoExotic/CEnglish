#ifndef UTIL_H
#define UTIL_H

#include <Windows.h>
#define IF if(
#define THEN ) {
#define IDFK }
#define BUT_IF else if(
#define ETHEN ) {
#define IDFK }
#define IS_EQUALS ==
#define IS_EQUALS_TO IS_EQUALS
#define EQUALS =
#define EQUALS_TO EQUALS
#define IS =
#define IOF ||
#define PAND ,
#define IAND &&
#define N_EQUALS !=
#define ELSE else {
#define ENDIF }
#define END_WHEN ENDIF
#define S_PROGRAM int main(int argc, char* argv[]){ 
#define S_WIN int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdSHow) {
#define END_PROGRAM return 0; }
#define END_PROGRAM_WITH(x) return (x); }
#define ARRAY(x) [(x)]
#define P_START (
#define P_END );
#define P_FEND )
#define CALL
#define MAKE
#define MBOX MessageBoxA
#define ILET int
#define DLET double
#define FLET float
#define CLET char
#define SLET const char*
#define POSITIVE unsigned
#define CONSTANT const
#define POINTER *
#define REFERENCE &
#define REFERENCE_TO REFERENCE
#define END ;
#define NOT !
#define CANNOT NOT
#define CANT CANNOT
#define SHOULD_NOT NOT
#define SHOULDNT SHOULD_NOT
#define STOP_WITH_CODE(x) return (x);
#define NONE 0
#define WHILE while(
#define WHEN WHILE
#define BE
#define AS
#define WITH
#define GENERIC_SIZE(x) sizeof((x))
#if __cplusplus
#define SZERO(x) {0}
#else
#define SZERO(x) (x){0}
#endif

#endif