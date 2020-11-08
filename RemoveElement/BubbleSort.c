/*
 * @Description: 冒泡排序
 * @Author: HLLI8
 * @Date: 2020-11-08 17:33:53
 * @LastEditTime: 2020-11-08 18:16:38
 * @LastEditors: HLLI8
 */
#include "BubbleSort.h"

/**
 * @description: 冒泡排序
 * @note: 
 * 时间复杂度：O(n^2)
 * 空间复杂度：O(1)
 */
void BubbleSort(int Arr[], int array_size){
    int i, j, flag;
    int temp;
    for(i=array_size-1; i>=1; --i){
        flag = 0; /* 变量flag用来标记排序是否发生交换 */
        for ( j = 1; j <= i; ++j)
        {
            if(Arr[j-1] > Arr[j]){
                temp = Arr[j];
                Arr[j] = Arr[j-1];
                Arr[j-1] = temp;
                flag = 1; /* 如果没有发生交换,则flag=0,如果发生交换,flag=1 */
            }
            if(flag == 0){
                return;
            }
        }
        
    }
}










