// https://leetcode.com/problems/maximum-average-subarray-i/
// Difficulty : Easy - 2 [contains -ve elements in array]
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // Strategy : find max sum subarray. Then return average of maxSum
        int n = nums.size(), i=0;
        double maxSum = INT_MIN, currSum = 0; // INT_MIN maxSum leke chalo, coz negative elements bhi h array mein

        for(int j=0; j<n; ++j){
            currSum += nums[j];

            if(j-i+1 == k){
                maxSum = max(maxSum, currSum);
                currSum -= nums[i];
                ++i;
            }
        }

        return maxSum/k;
    }
};

int main(){
    
    return 0;
}