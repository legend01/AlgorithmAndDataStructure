/*
 * @Description: 
 * @version: 
 * @Author: HLLI8
 * @Date: 2020-10-12 17:04:44
 * @LastEditors: HLLI8
 * @LastEditTime: 2020-10-12 17:26:33
 */
#include <stdio.h>
#include "BuyAndSellStocks.h"

int main(int argc, char *arg){
    int Stock_Price[] = { 7, 1, 5, 3, 6, 4 };
    int Profit = maxProfit(Stock_Price, ArraySize(Stock_Price));
    printf("[INFO] the max profit: %d \n", Profit);
    return 0;
}