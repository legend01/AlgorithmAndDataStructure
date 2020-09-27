#include <stdlib.h>
#include "QuickSort.h"
#define Quick_Choice2 0
#define Quick_Choice1 0
#if 0
quicksort_struct InitQuickSort(void){
    quicksort_struct QS_struct;
    QS_struct.qs_func = QuickSort;
    return QS_struct;
}
#else
void InitQuickSort(int A[], int length){
    quicksort_struct QS_struct;
    QS_struct.qs_func = QuickSort;
    QS_struct.qs_func(A, 0, length);
}
#endif
#if Quick_Choice1
    void QuickSort(int arr[], int low, int high) {
        int first = low;
        int last = high;
        int key = arr[first];
        if (low > high) {
            return;
        }
        while (first < last) {
            while (first < last && arr[last] > key) {
                last--;
            }
            arr[first] = arr[last];
            while (first < last && arr[first] < key) {
                first++;
            }
            arr[last] = arr[first];
        }
        arr[first] = key;
        QuickSort(arr, low, first - 1);
        QuickSort(arr, first + 1, high);
    }
#elif Quick_Choice2
    int Partition(int A[], int low, int high) {
        int pivot = A[low];
        while (low < high) {
            while (low < high && A[high] >= pivot)
            {
                --high;
            }
            A[low] = A[high];
            while (low < high && A[low] <= pivot)
            {
                ++low;
            }
            A[high] = A[low];
        }
        A[low] = pivot;
        return low;
    }
    void QuickSort(int A[], int low, int high) {
        if (low < high)
        {
            int pivot = Partition(A, low, high);
            QuickSort(A, low, pivot - 1);
            QuickSort(A, pivot + 1, high);
        }
    }
#else
void QuickSort(int arr[], int low, int high){
    int temp = 0;
    int i=low, j=high;
    if (low< high)
    {
        temp = arr[low];
        while (i<j)
        {
            while (i<j && arr[j]>=temp) --j;
            if (i<j){
                arr[i] = arr[j];
                ++i;
            }
            while (i<j && arr[i]<temp) ++i;
            if (i<j){
                arr[j] = arr[i];
                --j;
            }
        }
        arr[i] = temp;
        QuickSort(arr, low, i-1);
        QuickSort(arr, i+1, high);
    }
}

#endif




















