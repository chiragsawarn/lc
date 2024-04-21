// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int maxSum = 0, currSum = 0, start = n-k;
        
        for(int i=start; i<n; ++i){
            currSum += cardPoints[i];
        }
        maxSum = currSum;

        for(int i=0; i<k; ++i){
            currSum += cardPoints[i];
            currSum -= cardPoints[start++];
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};

int main(){
    
    return 0;
}