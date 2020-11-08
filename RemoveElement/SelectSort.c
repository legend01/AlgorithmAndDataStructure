/*
 * @Description: 简单选择排序
 * @Author: HLLI8
 * @Date: 2020-11-08 18:04:38
 * @LastEditTime: 2020-11-08 18:11:07
 * @LastEditors: HLLI8
 */
#include "SelectSort.h"

void SelectSort(int Arr[], int array_size){
    int i,j,k;
    int temp;
    for ( i = 0; i < array_size; i++)
    {
        k = i;
        /* 从无序序列中挑出一个最小的关键字 */
        for ( j = i+1; j < array_size; j++)
        {
            if (Arr[k] > Arr[j]){
                k = j;
            }
        }
        /* 最小关键字与无序序列第一个关键字交换 */        
        temp = Arr[i];
        Arr[i] = Arr[k];
        Arr[k] = temp;
    }
    
}


