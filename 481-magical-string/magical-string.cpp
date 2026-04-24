class Solution {
public:
    int magicalString(int n) {
        if (n == 0) return 0;
        if (n <= 3) return 1;

        string s = "122";
        int i = 2;    
        int num = 1;

        while (s.size() < n) {
            int count = s[i] - '0';

            for (int k = 0; k < count; k++) {
                s.push_back(num + '0');
            }

            num = (num == 1) ? 2 : 1;

            i++;
        }

        int ones = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] == '1') ones++;
        }

        return ones;
    }
};