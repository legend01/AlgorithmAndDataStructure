/*
 * @Description: 
 * @Author: HLLI8
 * @Date: 2020-11-05 15:27:51
 * @LastEditTime: 2020-11-05 15:43:38
 * @LastEditors: HLLI8
 */
#include <stdio.h>
#include "message.h"

void Inf_Log(int *array, int array_size,char *array_name){
    printf("[INFO] %s data is:", array_name);
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}









