class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        unordered_map<char, int> s1Map;
        unordered_map<char, int> windowMap;

        // Store frequency of characters in s1
        for (char ch : s1) {
            s1Map[ch]++;
        }

        int left = 0;

        for (int right = 0; right < s2.length(); right++) {

            // Add current character to window
            windowMap[s2[right]]++;

            // If window becomes larger than s1
            if (right - left + 1 > s1.length()) {

                windowMap[s2[left]]--;

                // Remove character completely if frequency becomes 0
                if (windowMap[s2[left]] == 0) {
                    windowMap.erase(s2[left]);
                }

                left++;
            }

            // When window size is exactly s1's size
            if (right - left + 1 == s1.length()) {

                if (s1Map == windowMap) {
                    return true;
                }
            }
        }

        return false;
    }
};