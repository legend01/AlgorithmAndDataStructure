/*
 * @Description: øÏÀŸ≈≈–Ú
 * @version:
 * @Author: HLLI8
 * @Date: 2020-09-24 16:11:43
 * @LastEditors: HLLI8
 * @LastEditTime: 2020-09-24 17:14:20
 */
#include <stdlib.h>
#define Quick_Choice 1

#ifdef Quick_Choice
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
#else
int Paritition(int A[], int low, int high) {
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
#endif