/*
 * @Description: 快速排序
 * @Author: HLLI8
 * @Date: 2020-11-08 17:09:00
 * @LastEditTime: 2020-11-08 17:10:55
 * @LastEditors: HLLI8
 */
#include "QuickSort.h"

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







