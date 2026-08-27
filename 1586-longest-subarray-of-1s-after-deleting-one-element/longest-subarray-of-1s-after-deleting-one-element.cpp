class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0;
        int countZero=0;
        int maxCount=0;
        for(int right = 0;right<nums.size();right++)
        {
            if(nums[right]==0)
            {
                countZero++;
            }
            while(countZero>1)
            {
                if(nums[left]==0){
                    countZero--;
                }
                left++;
            }
            int windowlength=right-left;
            maxCount=max(maxCount,windowlength);
        }
        return maxCount;
        
    }
};