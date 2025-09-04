#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool makePalindrome(int n, vector<string> &arr) {
        unordered_map<string,int> unpaired;

        for (const string &s : arr) {
            string r = s;
            reverse(r.begin(), r.end());

            if (unpaired[r] > 0) {
                // We can pair current s with a previously unpaired rev(s)
                if (--unpaired[r] == 0) unpaired.erase(r);
            } else {
                // No partner yet; leave s unpaired for now
                unpaired[s]++;
            }
        }

        // After pairing as much as possible:
        // - If nothing is left: YES
        // - If exactly one string is left, it must be a palindrome: YES
        // - Otherwise: NO
        int leftover = 0;
        string lone;
        for (auto &p : unpaired) {
            leftover += p.second;     // total unpaired blocks
            if (p.second % 2 == 1)    // track a candidate if exactly one remains
                lone = p.first;
        }

        if (leftover == 0) return true;
        if (leftover == 1) {
            string r = lone;
            reverse(r.begin(), r.end());
            return lone == r; // middle block must be palindromic
        }
        return false;
    }
};
