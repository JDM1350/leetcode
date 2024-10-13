class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int w_sum = 0;
        int start = 0;

        for (int i = 0; i < n; i++) {
            w_sum += nums[i];

            while (w_sum >= target) {
                ans = min(ans, i - start + 1);
                w_sum -= nums[start];
                start++;
            }
        }

        return ans == INT_MAX ? 0 : ans;
    }
};
