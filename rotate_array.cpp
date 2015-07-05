class Solution {
public:
    //very important problem. keep it in mind
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        k = k%l;
        for(int i = 0,j=l-1; i< j ; i++,j--){
           swap(nums[i],nums[j]);
        }
        for(int p = 0 ,m=k-1; p<m ; p++,m--){
            swap(nums[p],nums[m]);
        }
        for(int s=k,t=l-1; s<t; s++,t--){
            swap(nums[s],nums[t]);
        }
        
    }
    void swap(int &a, int &b){
        int t;
        t = a;
        a = b;
        b = t;
        }
};