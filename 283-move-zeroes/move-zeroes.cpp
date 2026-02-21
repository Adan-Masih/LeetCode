class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]==0 && nums[j]!=0)
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
               
            }
            if(nums[i]!=0){
             i++;
            }
        }
        
    }
};