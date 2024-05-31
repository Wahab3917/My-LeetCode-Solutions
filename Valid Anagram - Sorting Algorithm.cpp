class Solution {

    public:
        
        bool isAnagram(string s, string t) {

            // If the lengths of the strings are not equal, they cannot be anagrams
            if (s.length() != t.length()) {
                return false;
            }
            
            // Sorting both strings
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());

            // Comparing both strings
            for (int i=0; i<s.length(); i++) {
                if (s[i] != t[i]) {
                    return false;
                }
            }

            return true; // If all characters match, they are anagrams

        }

};