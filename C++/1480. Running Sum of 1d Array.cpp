class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i=0; i<nums.size()-1; ++i) {
            nums.at(i+1) += nums.at(i);
        }
        return nums;
    }
};
