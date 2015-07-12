class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};


//a better time solution by Moore's majority algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m = 0;
        int c = 1;
        for(int i = 1; i< nums.size() ; i++){
            nums[m] == nums[i] ? c++ : c-- ;
            if(c == 0){
                c = 1; 
                m = i;
            }
        }
        return nums[m];
    }
};