class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int alreadySatisfied = 0;
        int n = customers.size();

        // Customers already satisfied
        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                alreadySatisfied += customers[i];
            }
        }

        int maxGain = 0;
        int windowSum = 0;

        // Fixed-size sliding window
        for (int i = 0; i < n; i++) {

            // Add current element
            if (grumpy[i] == 1) {
                windowSum += customers[i];
            }

            // Remove element that is outside the window
            if (i >= minutes) {
                if (grumpy[i - minutes] == 1) {
                    windowSum -= customers[i - minutes];
                }
            }

            // Check maximum gain
            maxGain = max(maxGain, windowSum);
        }

        return alreadySatisfied + maxGain;
    }
};