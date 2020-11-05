/*
 * @Description: 贪心算法
 * @Author: HLLI8
 * @Date: 2020-10-21 15:46:24
 * @LastEditTime: 2020-11-05 10:34:29
 * @LastEditors: HLLI8
 */
#include "BuyAndSellStocks.h"
struct message message0;

maxProfit_pointer maxProfit_Array[] = { maxProfit_pack, maxProfit01_pack };

int fun_entry(int index){
    if(index<0 || index>MaxProfit_max) return 0;
    maxProfit_Array[index]();
    return 1;
}

void maxProfit_pack(void){
    message0.print_logo(maxProfit(message0.prices, message0.pricesSize));
}
void maxProfit01_pack(void){
    message0.print_logo(maxProfit01(message0.prices, message0.pricesSize));
}

static int maxProfit(int *prices, int pricesSize){
    int sum_value = 0;

    for (int i = 0; i < pricesSize-1; i++)
    {
        if (prices[i + 1] > prices[i]){
            sum_value += prices[i + 1] - prices[i];
        }
        
    }
    return sum_value;
}

/**
 * @description: 
 * 解法二、贪心算法2
 * 今天持股票 ：如果明天涨，继续持有不卖，如果明天跌，今天卖出，不持有
 * 今天不持有股票： 如果明天涨，今天买入，如果明天跌，继续不持有
 * @param {*}
 * @return {*}
 */
static int maxProfit01(int *prices, int pricesSize){
    if(pricesSize<2){
        return 0;
    }
    int res = 0; /* 收益 */
    int cur = 0; /* 1持有股票 0:不持有 */
    for (int i = 0; i < pricesSize; i++)
    {
        /* 卖出：如果持有，且明天股票跌(第一天不能卖，第二天cur=0) */
        if(cur==1 && prices[i]>prices[i+1]){
            res += prices[i];
            cur = 0;
        }
        /* 买入：如果没有股票，且明天股票涨(最后一天不能买) */
        else if(cur==0 && prices[i+1]>prices[i]){
            res -= prices[i];
            cur = 1;
        }
    }
    return cur?(res+prices[pricesSize-1]):res;
}

















