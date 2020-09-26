#ifndef __QUICKSORT_H__
#define __QUICKSORT_H__
#define Maxsize 100
#define ArraySize(table) (sizeof(table) / sizeof(table[0]))

typedef struct QuickSort_Stru quicksort_struct;
typedef void (*QS_Func)(int *, int, int);

struct QuickSort_Stru
{
    QS_Func qs_func;
};
void QuickSort(int arr[], int low, int high);
quicksort_struct InitQuickSort(void);
#endif // __QUICKSORT_H__