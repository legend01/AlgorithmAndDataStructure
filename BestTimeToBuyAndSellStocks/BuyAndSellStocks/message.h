/*
 * @Description: 
 * @Author: HLLI8
 * @Date: 2020-11-01 17:44:53
 * @LastEditTime: 2020-11-03 16:32:36
 * @LastEditors: HLLI8
 */
#ifndef __MESSAGE_H__
#define __MESSAGE_H__
typedef void (*print_inf)(int);

struct message{
    int *prices;
    int pricesSize;
    print_inf print_logo;
};

enum maxProfit_Call{
    MaxProfit_call,
    MaxProfit01_call,
    MaxProfit_max
};
#endif