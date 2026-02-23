class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;
        long long sec   = LLONG_MIN;
        long long third = LLONG_MIN;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > first) {
                first = nums[i];
            }
        }

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > sec && nums[i] != first) {  // ✅ sec not second
                sec = nums[i];
            }
        }

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > third && nums[i] != first && nums[i] != sec) {
                third = nums[i];
            }
        }

        if(third == LLONG_MIN)
        { 
             return first; 
        }

        return third;
    }
};