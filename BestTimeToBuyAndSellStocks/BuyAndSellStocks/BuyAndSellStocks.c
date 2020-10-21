#include "BuyAndSellStocks.h"

int maxProfit(int *prices, int pricesSize){
    int i, j;
    int price_value = 0;
    int diff_value = 0;

    for ( i = 0; i < pricesSize; i++)
    {
        for ( j = 0; j < pricesSize; j++)
        {
            if((prices[j] - prices[i]) > diff_value){
                diff_value = prices[j] - prices[i];
            }
            if(((prices[j] - prices[i]) <= diff_value) || (j+1)>=pricesSize){
                i = j - 1;
                price_value += diff_value;
                diff_value = 0;
                break;
            }
        }
        
    }
    return price_value;
}





