/*
 * @Description: 
 * @Author: HLLI8
 * @Date: 2020-11-06 14:12:14
 * @LastEditTime: 2020-11-06 14:24:51
 * @LastEditors: HLLI8
 */
#include "removeElement.h"

int removeElement(int* nums, int numsSize, int val) {
    int i = 0;
    for (int j = 0; j < numsSize; j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}




















