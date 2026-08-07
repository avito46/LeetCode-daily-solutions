class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1, pos = n - 1;

        while (left <= right) {
            int lSq = nums[left] * nums[left];
            int rSq = nums[right] * nums[right];

            if (lSq > rSq) {
                result[pos--] = lSq;
                left++;
            } else {
                result[pos--] = rSq;
                right--;
            }
        }
        return result;
    }
};