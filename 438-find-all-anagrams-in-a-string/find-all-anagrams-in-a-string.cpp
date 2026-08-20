class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        unordered_map<char, int> pMap;
        unordered_map<char, int> sMap;

        // Frequency of characters in p
        for (char ch : p) {
            pMap[ch]++;
        }

        int len = p.length();

        // Build the first window
        for (int i = 0; i < len; i++) {
            sMap[s[i]]++;
        }

        // Check the first window
        if (sMap == pMap) {
            ans.push_back(0);
        }

        // Move the window
        for (int i = len; i < s.length(); i++) {

            // Add the new character
            sMap[s[i]]++;

            // Remove the character that left the window
            sMap[s[i - len]]--;

            // If count becomes 0, remove it from the map
            if (sMap[s[i - len]] == 0) {
                sMap.erase(s[i - len]);
            }

            // Compare current window with p
            if (sMap == pMap) {
                ans.push_back(i - len + 1);
            }
        }

        return ans;
    }
};