class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        ans.reserve(2 * nums.size());
        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
    }
};