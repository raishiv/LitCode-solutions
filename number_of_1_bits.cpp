class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        if(n==0) return 0;
        while(n >1){
            if(n%2 == 1) count++;
            n = n/2;
        }
        return count+1;
    }
};