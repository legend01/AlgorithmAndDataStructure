/*
 * @Description: 希尔算法
 * @Author: HLLI8
 * @Date: 2020-11-07 15:54:15
 * @LastEditTime: 2020-11-08 16:55:09
 * @LastEditors: HLLI8
 */
#include "ShellSort.h"

/**
 * @description:希尔排序
 * @Note: 
 * 时间复杂度：O(n^2)
 * 空间复杂度：O(1) 
 */
void ShellSort(int arr[], int n)
{
    int i, j, k;
    int temp, gap;
    
    for (gap = n / 2; gap > 0; gap /= 2) //步长的选取
    {
        for (i = 0; i < gap; i++)        //直接插入排序原理
        {
            for (j = i + gap; j < n; j += gap)    //每次加上步长，即按列排序。
                if (arr[j] < arr[j - gap]){
                    temp = arr[j];
                    k = j - gap;
                    while (k >= 0 && arr[k] > temp) //记录后移，查找插入位置
                    {
                        arr[k + gap] = arr[k];
                        k -= gap;
                    }
                    arr[k + gap] = temp;  //找到位置插入
                }
        }
    }
}