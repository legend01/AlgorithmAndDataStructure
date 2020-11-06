/*
 * @Description: 直接插入排序算法
 * @Author: HLLI8
 * @Date: 2020-11-06 15:20:02
 * @LastEditTime: 2020-11-06 16:37:12
 * @LastEditors: HLLI8
 */
#include "InsertSort.h"

/**
 * @description: 直接插入排序
 * @note:
 * 时间复杂度：O(n^2) 空间复杂度:O(1)
 */
void InsertSort(int *array, int array_size){
    int i,j;
    int temp; 
    for ( i = 1; i < array_size; i++)
    {
        temp = array[i]; /* 将待插入关键字暂存于temp中 */
        j = i - 1;
        /* 这个循环完成了从待关键字之前的关键字开始扫描，如果大于待排关键字，后移一位 */
        while (j>=0&&temp<array[j]) {
            array[j+1] = array[j];
            --j;
        }
        array[j+1] = temp; /* 找到插入位置,将temp中暂存的待排关键字插入 */
    }
    
}
