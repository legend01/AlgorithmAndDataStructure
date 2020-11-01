/*
 * @Description: 贪心算法
 * @Author: HLLI8
 * @Date: 2020-10-21 15:46:24
 * @LastEditTime: 2020-11-01 17:13:54
 * @LastEditors: HLLI8
 */
#include "BuyAndSellStocks.h"

int maxProfit(int *prices, int pricesSize){
    int sum_value = 0;

    for (int i = 0; i < pricesSize-1; i++)
    {
        if (prices[i + 1] > prices[i]){
            sum_value += prices[i + 1] - prices[i];
        }
        
    }
    return sum_value;
}





