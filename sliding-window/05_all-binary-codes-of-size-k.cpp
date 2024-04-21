// https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/
// Difficulty : Medium - 2 [Prepare your mask with XOR -1, not with `!`]
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasAllCodes(string s, int k) {

        // Because k <= 20 : We can use long long to store the currWindow
        // If k > 63 : We will use a unordered_set<string> to store unique windows and not long long

        long long win=0, i=0;
        unordered_set<long long> st;

        for(int j=0; j<s.length(); ++j){
            int digit = s[j] - '0';
            win = win<<1;
            win += digit;

            if(j-i+1 == k){
                st.insert(win);
                // offset the kth bit for next cycle
                long long mask = (1<<(k-1))^-1;
                win = win&mask;
                ++i;
            }
        }

        return st.size() == (1<<k);
    }
};

int main(){
    
    return 0;
}