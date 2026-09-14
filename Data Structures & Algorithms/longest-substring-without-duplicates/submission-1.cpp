class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        unordered_map<char, int> mpp;
        int ans = 0;
        while(j < s.length()){
            while(i < j && mpp.count(s[j])){
                mpp.erase(s[i++]);
            }
            mpp[s[j]] = 1;
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
