class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        unordered_map<int, int> map;

        int left = 0;
        int sum = 0;
        int finalSum = 0;

        for (int right = 0; right < nums.size(); right++) {

            map[nums[right]]++;
            sum += nums[right];

            while (map[nums[right]] > 1) {
                sum -= nums[left];
                map[nums[left]]--;
                left++;
            }

            finalSum = max(finalSum, sum);
        }

        return finalSum;
    }
};