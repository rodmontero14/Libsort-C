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
/*FLAGBUBBLESORT:
* A sorting algorithm that brings smaller elements to the left.
* Improved from BUBBLESORT by adding a flag that avoids unnecessary
* iterations when the array is sorted. */
void FlagBubbleSort(int *v, int n){
    int swapped=1;
    for(int i=0; i<n; i++){
        if(swapped==0){
            break;
        }
        swapped=0;
        for(int j=n-1; j>i; j--){
            if(v[j-1]>v[j]){
                Swap(&v[j-1], &v[j]);
                swapped=1;
            }
        }
    }
}
