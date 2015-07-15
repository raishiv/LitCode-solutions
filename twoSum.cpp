class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> val;
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            if(val.count(target-nums[i]) == 0){
                val[nums[i]] = i+1;
            }
            else{
                res.push_back(val[target-nums[i]]);
                res.push_back(i+1);
                return res;
            }
        }
    }
};