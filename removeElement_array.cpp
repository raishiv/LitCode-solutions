class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::sort(nums.begin(), nums.end());
        int c = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                c++;
            }
            else if(nums[i] > val){
                nums[i-c] = nums[i];
            }
        }
        return (nums.size() - c);
    }
};