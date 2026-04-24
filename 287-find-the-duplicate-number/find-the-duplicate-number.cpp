class Solution {
public:
    int findDuplicate(vector<int>& nums)
     {
        int i=0;
        int j=1;
        sort(nums.begin(), nums.end()); 
        while(j<nums.size())
        {
            if(nums[i]==nums[j])
            {
                j=nums.size();
            }
            i++;
            j++;
        }  
        return nums[i];
        
    }
};