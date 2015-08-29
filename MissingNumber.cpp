// given an array of numbers as 0 1 2 ....n find the missing number
// for [0 1 3] missing number is 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max = 0;
        int res;
        int sum = 0;
        int temp;
        bool zero = false;
        for(int i=0; i < nums.size() ; i++) {
            if(max < nums[i]) max = nums[i];
            sum  += nums[i];
            if(nums[i] == 0) zero = true;
        }
        temp = (max *(max+1))/2;
        if(sum!=temp) res = temp - sum;
        else if(zero) res = max+1;
        else res = 0;
        return res;
    }
};