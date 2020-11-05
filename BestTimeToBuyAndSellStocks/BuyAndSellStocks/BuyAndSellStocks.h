/*
 * @Description: 
 * @Author: HLLI8
 * @Date: 2020-10-21 15:46:24
 * @LastEditTime: 2020-11-03 16:47:54
 * @LastEditors: HLLI8
 */
#ifndef __BUYANDSELLSTOCKS_H__
#define __BUYANDSELLSTOCKS_H__
#include "message.h"
#define ArraySize(table) (sizeof(table) / sizeof(table[0]))

typedef int (*maxProfit_pointer)(void);

int fun_entry(int index);

static int maxProfit(int *prices, int pricesSize);
static int maxProfit01(int *prices, int pricesSize);

static void maxProfit_pack(void);
static void maxProfit01_pack(void);
#endif // !__BUYANDSELLSTOCKS_H__
