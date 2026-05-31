class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        std::unordered_map<char, int> hashmap;
        for(char i : s) {
            hashmap[i] = hashmap[i] + 1;
        } 

        for(char i : t) {
            hashmap[i] = hashmap[i] - 1;
        } 

        for (const auto [key,value] : hashmap) {
            if (value != 0) {
                return false;
            }
        }

        return true;
    }
};
