class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        std::vector<int>::iterator it = lower_bound(nums.begin(), nums.end(), target);
        return it - nums.begin();
    }
};