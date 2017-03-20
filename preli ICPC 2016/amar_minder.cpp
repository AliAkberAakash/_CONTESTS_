#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define MX 1002
int stock_prices[MX], nDay, marked[MX];

bool check(int stock_prices[], int nDay){
  int k;
  for(k = 1 ; k <= nDay - 4 ; k++ ){
      int X = getProfit(1, k);
      int Y = optimalResult(stock_prices, 1, k);
      if(X != Y) return false;
  }
  return true;
}

int getProfit(int start, int end){
   int profit = 0, i;
   for(i = start; i <= end; i++) marked[i] = 0;
   while(1){
       int X = getMaximum(start, end);
       int Y = getMinimum(start, X - 1);
       if(X==-1 || Y==-1)break;
       profit += stock_prices[X] - stock_prices[Y];
       marked[X] = marked[Y] = 1;
   }
   return profit;
}

int main()
{
    int a={2,4,6,8,10};
    int nDay=5;

    printf("%d\n", check(a,nday));

    return 0;
}
