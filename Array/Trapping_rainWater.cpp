#include <bits/stdc++.h>
using namespace std;
int trap(vector<int> &height)
{
    int n = height.size();
    vector<int> left(n);
    vector<int> right(n);

    left[0]=height[0];
    for(int i=1; i<n ; i++){
        left[i] = max(left[i-1],height[i]);
    }
    
    right[n-1]=height[n-1];
    for(int j=n-2; j>=0 ; j--){
        right[j]=max(right[j+1],height[j]);
    }
    int sum=0;
    for(int k=0; k<n; k++){
        sum += (min(right[k],left[k])-height[k]);
    }
    return sum;
}
int main()
{
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height);
    return 0;
}