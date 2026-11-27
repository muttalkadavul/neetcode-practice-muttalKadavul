class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;
        seen.reserve(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            if (auto it = seen.find(target - nums[i]); it != seen.end())
            {
                return {it->second, i};
            }
            seen.emplace(nums[i], i);
        }
        return {};
    }
};
