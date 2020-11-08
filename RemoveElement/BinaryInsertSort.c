/*
 * @Description: 折半插入排序
 * @Author: HLLI8
 * @Date: 2020-11-06 16:19:00
 * @LastEditTime: 2020-11-08 16:53:47
 * @LastEditors: HLLI8
 */
#include "BinaryInsertSort.h"

/**
 * @description: 折半插入排序
 * @Note:
 * 时间复杂度： O(n^2)
 * 空间复杂度：O(1)
 */
void HalfInsertSort(int* array, int array_size){
    for(int i=1;i<array_size;i++)
    {
        int temp = array[i];
        int left = 0; /* 在已经有序的数组中找到中点序号 */
        int right = i-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(temp<array[mid])right = mid-1; /* 如果要比较的值小于序号中点值 取左边 */
            else left = mid+1; /* 如果要比较的值大于序号中点值 取右边 */
        }
        for(int j=i-1;j>=right+1;j--){
            array[j+1] = array[j];
        }
        array[right+1] = temp;
    }
}
