class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int onCheck = 0;

        for (int i = 0; i < nums.size(); i++)
            onCheck ^= nums.at(i);
        return onCheck;
    }
};