class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ms = INT_MIN;
        int currSum = 0;

        for (int val : nums) {
            currSum += val;
            ms = max(currSum, ms);

            if (currSum < 0) {
                currSum = 0;
            }
        }

        return ms;
    }
};