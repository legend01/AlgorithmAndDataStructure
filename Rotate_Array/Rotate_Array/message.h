/*
 * @Description: 
 * @Author: HLLI8
 * @Date: 2020-11-05 15:27:26
 * @LastEditTime: 2020-11-05 15:33:09
 * @LastEditors: HLLI8
 */
#ifndef __MESSAGE_H__
#define __MESSAGE_H__
#define ArraySize(table) (sizeof(table) / sizeof(table[0]))
#define GETNAME(name) (#name)

void Inf_Log(int *array, int array_size,char *array_name);
#endif // !__MESSAGE_H__

