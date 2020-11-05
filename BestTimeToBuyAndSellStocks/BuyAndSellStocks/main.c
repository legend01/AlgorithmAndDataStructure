/*
 * @Description: 
 * @version: 
 * @Author: HLLI8
 * @Date: 2020-10-12 17:04:44
 * @LastEditors: HLLI8
 * @LastEditTime: 2020-11-05 10:17:46
 */
#include <stdio.h>
#include "BuyAndSellStocks.h"
extern struct message message0;
void print_logo(int log){
    printf("[INFO] the max profit: %d \n", log);
}
int main(int argc, char *arg){
    int Stock_Price[] = { 7, 1, 5, 3, 6, 4 };
    message0.prices = Stock_Price;
    message0.pricesSize = ArraySize(Stock_Price);
    message0.print_logo = print_logo;
    fun_entry(MaxProfit_call);
    
    return 0;
}