class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> nmap;
        bool res = false;
        if(nums.size() > 1){
            for(int i=0; i< nums.size(); i++){
                if(nmap.count(nums[i]) == 0){
                    nmap[nums[i]] = i;
                    res = false;
                }
                else if((i-nmap[nums[i]]) <= k){
                    res = true;
                    break;
                }
                else{
                    res = false;
                    nmap[nums[i]] = i;
                }
                
            }
        }
        return res;
        
    }
};