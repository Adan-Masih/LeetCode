class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int> set1;    // store unique elements from nums1
        unordered_set<int> result;  // store intersection

        // add all elements of nums1 to set1
        for (int num : nums1) {
            set1.insert(num);
        }

        // check nums2 elements
        for (int num : nums2) {
            if (set1.find(num) != set1.end()) {
                result.insert(num); 
            }
        }
        return vector<int>(result.begin(), result.end());
  }
};