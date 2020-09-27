#include <stdio.h>
#include "QuickSort.h"
#include "showArray.h"
#include <string.h>


int main(int argc, char *argv[]){
    int temp_array[10] = {3, 1, 11, 5, 8, 2, 0, 9, 13, 81};
    showArrayInf(temp_array, ArraySize(temp_array));
    #if 0
    QuickSort(temp_array, 0, ArraySize(temp_array)-1);
    #elif 0
    quicksort_struct qs_stru;
    qs_stru = InitQuickSort();
    qs_stru.qs_func(temp_array, 0, ArraySize(temp_array)-1);
    #else 
    InitQuickSort(temp_array, ArraySize(temp_array)-1);
    // quicksort_struct QS_struct;
    // QS_struct.qs_func = QuickSort;
    // QS_struct.qs_func(temp_array, 0, ArraySize(temp_array)-1);
    #endif
    showArrayInf(temp_array, ArraySize(temp_array));
    return 0;
}