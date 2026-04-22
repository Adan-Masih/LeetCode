class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";

        for (int i = 0; i < s.length(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || 
                (s[i] >= 'A' && s[i] <= 'Z') || 
                (s[i] >= '0' && s[i] <= '9')) {

                if (s[i] >= 'A' && s[i] <= 'Z') {
                    result += s[i] + 32; // to lowercase
                } else {
                    result += s[i];
                }
            }
        }

        int i = 0;
        int j = result.length() - 1;

        while (i < j) {
            if (result[i] != result[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};