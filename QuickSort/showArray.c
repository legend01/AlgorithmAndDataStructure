/*
 * @Description: 
 * @version: 
 * @Author: HLLI8
 * @Date: 2020-09-27 15:34:34
 * @LastEditors: HLLI8
 * @LastEditTime: 2020-09-27 16:50:29
 */
#include <stdio.h>
#include "showArray.h"

void showArrayInf(int arr[], int size, char *str_data){
    printf("[INFO] %s = ", str_data);
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
























