/*
 * @Description: 冒泡排序
 * @Author: HLLI8
 * @Date: 2020-11-08 17:33:53
 * @LastEditTime: 2020-11-08 17:47:54
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
    for(i=n-1; i>=1; --i){
        flag = 0; /* 变量flag用来标记排序是否发生交换 */
        for ( j = 1; j <= i; ++j)
        {
            if(R[j-1] > R[j]){
                temp = R[j];
                R[j] = R[j-1];
                R[j-1] = temp;
                flag = 1; /* 如果没有发生交换,则flag=0,如果发生交换,flag=1 */
            }
            if(flag == 0){
                return;
            }
        }
        
    }
}










