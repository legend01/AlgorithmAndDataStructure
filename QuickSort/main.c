#include <stdio.h>
#include "QuickSort.h"

int main(int argc, char *argv[]){
    quicksort_struct QS;
    QS.data[] = {3, 1, 11, 5, 8, 2, 0, 9, 13, 81};
    for (uint8_t i = 0; i < ArraySize(QS.data); i++)
    {
        printf("[INFO] QS.data[] = %d", QS.data[i]);
    }
    printf("\n");
    QuickSort(QS.data, 0, ArraySize(QS.data));
    for (uint8_t i = 0; i < ArraySize(QS.data); i++)
    {
        printf("[INFO] QS.data[] = %d", QS.data[i]);
    }
    printf("\n");
    return 0;
}