// https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
// Difficulty : Easy - 1 [Easiest sliding window question]
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        double currSum = 0;
        int i=0, n = arr.size(), count = 0;

        for(int j=0; j<n; ++j){
            currSum += arr[j];

            if(j-i+1 == k){
                if(currSum/k >= threshold) ++count;
                currSum -= arr[i];
                ++i;
            }
        }

        return count;
    }
};

int main(){
    
    return 0;
}