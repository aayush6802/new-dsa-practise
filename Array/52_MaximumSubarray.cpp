#include <bits/stdc++.h>
using namespace std; 
class Solution {
public:

    // Approach -1 : O(N^2) -> DOUBT?
    // int maxSubArray(vector<int>& nums) {
    //     int maxSum=INT_MIN;
    //     int sum=0;

    //     for(int i=0; i<nums.size(); i++){
    //         sum=nums[i];
    //         for(int j=i+1; j<nums.size(); j++){
    //             sum += nums[j];
    //             if(sum==5) cout<<j<<endl;
    //         }
    //         if(sum>maxSum) maxSum=sum;
    //     }
    //     return maxSum;
    // }

    // APPROACH-2 -> Kadane's algo 
    //(negative subarray k discard karo only include +ve sum)

    int maxSubArray(vector<int>& nums) {
        int maxSum=nums[0];
        int curSum=0;

        for(int i=0; i<nums.size(); i++){
            curSum = curSum + nums[i];

            if(curSum > maxSum) maxSum = curSum;

            if(curSum<0) curSum=0;
            
        }
        return maxSum;
    }

};
int main(){ 
vector<int>nums={-2,-5,-4};
Solution s;
cout<<s.maxSubArray(nums);
return 0;
}