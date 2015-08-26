class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int len   = nums.size();
        if(len == 0) return res;
        else if(len == 1){
            res.push_back(to_string(nums[0]));
            return res;
        }
        int start = 0;
        int end  = 0;
        string temp;
        for(int i = 0 ; i< len ;  i++){
            if(nums[end + 1] - nums[end] == 1) end++;
            else{
                if(start == end){
                    temp = to_string(nums[start]);
                    res.push_back(temp);
                    start = start+1;
                    end = end+1;
                }
                else{
                    temp = to_string(nums[start]) + "->" + to_string(nums[end]);
                    res.push_back(temp);
                    start = end + 1;
                    end = end + 1;
                }
            }
        }
        return res;
    }
};