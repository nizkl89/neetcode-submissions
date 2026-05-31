class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> prevmap;
        for(int i = 0 ; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (prevmap.find(diff) != prevmap.end()) {
                return {prevmap[diff], i};
            }
            prevmap[nums[i]] = i;
        }
        return {};
    }
};
