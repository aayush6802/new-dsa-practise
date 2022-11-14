#include <bits/stdc++.h>
using namespace std;

// APPROACH -1 -> T:O(N), S:O(N)
// int maxProfit(vector<int> &prices, int n)
// {
//     vector<int> ax(n, -1);
//     ax[n - 1] = prices[n - 1];
//     int mProfit = INT_MIN;
//     int profit = 0;

//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (prices[i] < ax[i + 1])
//         {
//             ax[i] = ax[i + 1];
//         }
//         else
//         {
//             ax[i] = prices[i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         profit = ax[i] - prices[i];

//         if (mProfit < profit){
//             mProfit = profit;
//         }
            
//     }
//     return mProfit;
// }


// APPROACH -2 -> T:O(N), S:O(1) ; minSoFar(left to right)
int maxProfit(vector<int> &prices, int n)
{

    int mProfit = 0;
    int minSoFar = prices[0];

    for (int i = 1; i < n; i++)
    {
        if(prices[i]<minSoFar){
           minSoFar= prices[i];
        }
        int profit = prices[i]-minSoFar;

        if (mProfit < profit){
            mProfit = profit;
        }
            
    }
    return mProfit;
}

int main()
{
    vector<int> prices = {3,1,4,8,7,2,5};
    int n = prices.size();
    cout << maxProfit(prices, n) << endl;
    return 0;
}