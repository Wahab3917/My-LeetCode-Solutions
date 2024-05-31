class Solution {

    public:
        
        bool isAnagram(string s, string t) {

            // If the lengths of the strings are not equal, they cannot be anagrams
            if (s.length() != t.length()) {
                return false;
            }
            
            unordered_map<char, int> countMap;

            // Counting frequency of each character in s
            for (char c : s) {
                countMap[c]++;
            }
            
            // Decrementing frequency based on characters in t
            for (char c : t) {
                countMap[c]--;
                if (countMap[c] < 0) {
                    return false;
                }
            }

            return true; // All counts must be zero if t is an anagram of s

        }

};