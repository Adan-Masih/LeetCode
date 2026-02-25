class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> check(nums.size() + 1, false);
        vector<int> save;

        for(int i=0;i<nums.size();i++)
        {
            check[nums[i]]=true;
        }
        for(int i=1;i<check.size();i++)
        {
            if(check[i]==false)
            {
                save.push_back(i);
            }
        }
        return save;

    }
};