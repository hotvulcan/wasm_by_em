#include <stdio.h>
#include <stdlib.h>
#define is_odd(testee) ( testee & 1 )
int main(){
    volatile uint32_t got;
    fprintf(stdout,"start\n");
    for(uint32_t j=0;j< UINT32_MAX ;j++) got = is_odd( j );//,printf("%i",got);
    fprintf(stdout,"done\n");
    return 0;
}
// ./a.out  10.64s user 0.04s system 98% cpu 10.824 total