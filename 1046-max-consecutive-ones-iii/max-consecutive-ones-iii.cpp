class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int left = 0;
        int zeroCount = 0;
        int maxCount = 0;
        for(int right = 0;right <nums.size();right++)
        {
             if(nums[right]==0)
            {
                zeroCount++;
            }
            while(zeroCount>k)
            {
                if(nums[left]==0){
                zeroCount--;
                }
                left++;
            }
            int windowlen=right-left+1;
            maxCount=max(maxCount,windowlen);
        

        }
        return maxCount;
    }
};