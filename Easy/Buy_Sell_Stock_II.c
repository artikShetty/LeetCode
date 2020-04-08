/******************* Problem Statement*****************/
/*
Best Time to Buy and Sell Stock II
Link to Problem Statement: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii
*/
/*****************************************************/

int max(int a, int b){return (a>b)?a:b;}
int maxProfit(int* prices, int pricesSize){
    int profits = 0;
    
    for(int i = 1; i<pricesSize;i++)
    {
        profits += max(prices[i] - prices[i-1], 0);
    }
    return profits;
}