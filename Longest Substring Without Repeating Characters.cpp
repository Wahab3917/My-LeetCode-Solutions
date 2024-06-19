class Solution {

    public:

        int lengthOfLongestSubstring(string s) {

            unordered_map<char, int> tempMap;

            int i = 0;
            int longestSubString = 0;

            for (int j=0; j<s.size(); j++) {

                if (tempMap.find(s[j]) != tempMap.end()) {
                    i = max(i, tempMap[s[j]] + 1);
                }

                tempMap[s[j]] = j;
                longestSubString = max(longestSubString, j - i + 1);

            }

            return longestSubString;

        }

};