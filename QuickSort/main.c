/*
 * @Description: 
 * @version: 
 * @Author: HLLI8
 * @Date: 2020-09-25 14:03:55
 * @LastEditors: HLLI8
 * @LastEditTime: 2020-09-29 17:30:08
 */
#include <stdio.h>
#include "QuickSort.h"
#include "showArray.h"
#include <string.h>


int main(int argc, char *argv[]){
    int Array1[] = {3, 1, 11, 5, 8, 2, 0, 9, 13, 81};
    int Array2[] = {3, 5, 1, 34, 8, 23, 0, 45, 78, 93};
    showArrayInf(Array1, ArraySize(Array1), GETNAME(Array1));
    showArrayInf(Array2, ArraySize(Array2), GETNAME(Array2));
    #if 0
    QuickSort(temp_array, 0, ArraySize(temp_array)-1);
    #elif 0
    quicksort_struct qs_stru;
    qs_stru = InitQuickSort();
    qs_stru.qs_func(temp_array, 0, ArraySize(temp_array)-1);
    #else 
    InitQuickSort(Array1, ArraySize(Array1)-1);
    InitQuickSort(Array2, ArraySize(Array2)-1);
    // quicksort_struct QS_struct;
    // QS_struct.qs_func = QuickSort;
    // QS_struct.qs_func(temp_array, 0, ArraySize(temp_array)-1);
    #endif
    showArrayInf(Array1, ArraySize(Array1), GETNAME(Array1));
    showArrayInf(Array2, ArraySize(Array2), GETNAME(Array2));
    ArrayIntersection(Array1, ArraySize(Array1), Array2, ArraySize(Array2));
    return 0;
}