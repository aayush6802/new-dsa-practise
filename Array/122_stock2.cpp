#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{   
    int profit=0;
    int n = prices.size();
    for(int i=1; i<n; i++){ // start i=1 
        if(prices[i]>prices[i-1]){
            profit += (prices[i]-prices[i-1]);
        }
    }
    return profit;
}
int main()
{
    vector<int> prices={1,2,3,4,5};
    cout<<maxProfit(prices);
    return 0;
}