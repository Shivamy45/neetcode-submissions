class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        unordered_map<char, int> mpp;
        int ans = 0;
        while(j < s.length()){
            if(mpp.count(s[j])){
                i = max(i, mpp[s[j]] + 1);
            }
            mpp[s[j]] = j;
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
