/*
 * @Description: 移除元素 
 * @Author: HLLI8
 * @Date: 2020-11-06 14:11:18
 * @LastEditTime: 2020-11-06 14:40:33
 * @LastEditors: HLLI8
 */
#include <stdlib.h>
#include "removeElement.h"
#include "message.h"

int main(int argc, char *argv[]){
    int array[] = {0,1,2,2,3,0,4,2};
    Inf_Log(array, ArraySize(array), GETNAME(array));
    Inf_Log(array, removeElement(array, ArraySize(array), 2), GETNAME(array));
    return 0;
}
























