/*
 * @Description: 
 * @version: 
 * @Author: HLLI8
 * @Date: 2020-09-25 08:56:17
 * @LastEditors: HLLI8
 * @LastEditTime: 2020-09-26 09:56:42
 */
#ifndef __QUICKSORT_H__
#define __QUICKSORT_H__
#define Maxsize 100
#define ArraySize(table) (sizeof(table) / sizeof(table[0]))
typedef struct QuickSort_Stru quicksort_struct;

struct QuickSort_Stru
{
    int data[Maxsize];
};
void QuickSort(int arr[], int low, int high);
#endif // __QUICKSORT_H__