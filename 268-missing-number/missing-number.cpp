class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int fullRangeCount=0;
        int size=nums.size();
        int allNumberCount=0;
        for(int i=1;i<=size;i++)
        {
            fullRangeCount+=i;
        }
        for(int i=0;i<size;i++)
        {
            allNumberCount+=nums[i];
        }
        return fullRangeCount-allNumberCount;
        
    }
};