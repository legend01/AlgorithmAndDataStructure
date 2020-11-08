/*
 * @Description: 堆排序
 * @Author: HLLI8
 * @Date: 2020-11-08 21:09:38
 * @LastEditTime: 2020-11-08 21:40:02
 * @LastEditors: HLLI8
 */
#inlcude "HeapSort.h"

/**
 * @description: 函数完成在数组Arr[low]到Arr[high]的范围内对在位置low上的节点进行调整
 */
static void Sift(int Arr[], int low, int high){ /* Arr[]是一棵完全二叉树，关键字的存储必须从1开始 */
    int i=low, j=2*i; /* Arr[j]是Arr[i]的左孩子节点 */
    int temp = Arr[i];
    while (j<=high)
    {
        if (j < high && Arr[j] < Arr[j+1]) { /* 若右孩子比较大,把j指向右孩子 */
            ++j; /* j变为2*i+1 */
        }
        if(temp < Arr[j]){
            Arr[i] = Arr[j]; /* 将R[j]调整到双亲节点的位置 */
            i = j; /* 修改i和j的值，继续向下调整 */
            j = 2*i;
        }else{
            break; /* 调整结束 */
        }
    }
    Arr[i] = temp; /* 调整节点的值放入最终位置 */
} 

/**
 * @description:堆排序函数 
 * */
void HeapSort(int Arr[], int array_size){
    int i;
    int temp;
    for ( i = array_size/2; i >= 1; --i )
    {
        Sift(Arr, i, array_size);
    }
    for ( i = array_size; i >= 2; --i )/* 进行n-1次循环完成堆排序 */
    {
        temp = Arr[1];
        Arr[1] = Arr[i];
        Arr[i] = temp;
        Sift(Arr, 1, i-1); /* 在减少1个关键字的无序序列中进行调整 */
    }
    
}
























