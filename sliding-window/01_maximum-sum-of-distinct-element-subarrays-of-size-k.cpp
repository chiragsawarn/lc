// https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> st;

        int i=0;
        long long currSum = 0, maxSum = 0;
        for(int j=0; j<nums.size(); ++j){
            if(st.find(nums[j]) == st.end()){
                st.insert(nums[j]);
                currSum += nums[j];
            } else {
                while(nums[i] != nums[j]){
                    st.erase(nums[i]);
                    currSum -= nums[i];
                    ++i;
                }
                ++i; // increment one more time coz duplicate is not a part of this window
            }

            if(st.size() == k){
                maxSum = max(maxSum, currSum);
                st.erase(nums[i]);
                currSum -= nums[i];
                ++i;
            }
        }

        return maxSum;
    }
};

int main(){
    
    return 0;
}