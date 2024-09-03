class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int sizeOf_strs = strs.size();
        if (sizeOf_strs == 1) return strs[0];  
        string commonString = strs[0];
        for (int i = 1; i < sizeOf_strs; i++) {
            int minLength = min(commonString.length(), strs[i].length()), j = 0;
            while (j < minLength && commonString[j] == strs[i][j]) j++; 
            commonString = commonString.substr(0, j);
            if (commonString.empty()) return "";
        }
        return commonString;
    }
};