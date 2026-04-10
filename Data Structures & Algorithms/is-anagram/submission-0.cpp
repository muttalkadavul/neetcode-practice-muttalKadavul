#include <array>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        std::array<int, 26> freq = {0};

        for (char c: s) freq[c - 'a']++;
        for (char c: t) freq[c - 'a']--;

        return std::all_of(freq.begin(), freq.end(), 
            [](int count){return count == 0;});
        
    }
};
