class Solution {
public:
    void reverse(vector<int>& nums, int start,int end)
    {
        while(start<end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k%=n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);

        // int num=nums.size()-k;
        // for(int i=0;i<num;i++){
        //     int first=nums[0];
        //     for(int j=0;i<nums.size()-1;j++){
        //         nums[j]=nums[++j];
        //     }
        //     nums[nums.size()]=first;
        // }
        
    }
};