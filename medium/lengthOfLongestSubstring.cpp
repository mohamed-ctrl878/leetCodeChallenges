class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() < 1)
            return 0;
        int count = 0;
        int result = 0;
        unordered_map<char, int> map;
        for (int i = 0; i < s.size(); i++) {
            if (!map[s[i]]) {
                count++;
                map[s[i]] = i+1;
            } else {
                int rs = map[s[i]]-1;
                map.clear();
                i = rs;
                count = 0;
            }
            if (count > result)
                result = count;
        }
        return result;
    };
};
