/*
 * @Description: 旋转数组
 * @Author: HLLI8
 * @Date: 2020-11-05 12:04:29
 * @LastEditTime: 2020-11-05 15:37:06
 * @LastEditors: HLLI8
 */
#include <stdio.h>
#include "Rotate.h"
#include "message.h"

int main(int argc, char *argv[]){
    int array1[] = {1, 2, 3, 4, 5, 6, 7};
    Inf_Log(array1, ArraySize(array1), GETNAME(array1));
    rotate(array1, ArraySize(array1), 3);
    Inf_Log(array1, ArraySize(array1), GETNAME(array1));
    return 0;
}




























