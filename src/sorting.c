#include "../include/sorting.h"

/* Function that exchanges(swaps) two integers,
 * in order to avoid repeating the process across algorithms*/
static void Swap(int *a, int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}

//=====================================================================//
//===========THIS IS THE START OF THE SORTING ALGORITHMS CODE==========//
//=====================================================================//

/*BUBBLESORT:
* A sorting algorithm that brings smaller elements to the left.
* ----------------------------------------------------------------
* The name comes from how bubbles rise to the top of a carbonated drink.
* In my variation we can say that small elements "bubble" towards
* the beginning of the array, ending up with it being sorted.*/
void BubbleSort(int *v, int n){

    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            if(v[j-1]>v[j]){
                Swap(&v[j-1], &v[j]);
            }
        }
    }
}