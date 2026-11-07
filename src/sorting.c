#include "../include/sorting.h"

/*Function that exchanges(swaps) two numbers,
 in order not to repeat it in every sorting algorythm that needs it*/
static void swap(int *a, int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}