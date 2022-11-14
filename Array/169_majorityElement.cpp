#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // approach -1 : T->O(Nlogn) 
    // int majorityElement(vector<int> &nums)
    // {
    //     sort(nums.begin(), nums.end());
    //     return nums[nums.size() / 2];
    // }

    //APPROACH -2 : T->O(N)
    // int majorityElement(vector<int> &nums){
    //     unordered_map<int,int> mp;
    //     for(int i=0; i<nums.size(); i++){
    //         mp[nums[i]] +=1;
    //     }

    //     auto cur = mp.begin();
    //     for(auto i=cur ; i!=mp.end(); i++){
    //         if(cur->second < i->second)
    //         cur=i;
    //     }
    //     return cur->first;
    // }

    // APPROACH-3 (Moore's Voting Algorithm): S->O(1)
    // isme freq 1 s less karte rhege nye next elem k liye and last elem get is ans
    int majorityElement(vector<int> &nums){
        int idx = 0, cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==nums[idx]){
                cnt++;
            }
            else{
                cnt--;
            }

            if(cnt==0){
                idx=i;
                cnt=1;
            }
        }
        return nums[idx];
    }
    
};
int main()
{
    vector<int> nums = {1,2};
    Solution s;
    cout << s.majorityElement(nums);
    return 0;
}