#include <iostream>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
         uint32_t res = 0;

    for( int i = 0; i < 32; i++ )
    {
        if( n )
        {
            res <<= 1;
            res += n % 2;
            n >>= 1;
        }
        else
        {
            res <<= ( 32 - i );
            break;
        }
    }

    return res;
}
    
};

int main(){
    Solution sol;
    uint32_t r = sol.reverseBits(43261596);
    std::cout<<r<<std::endl;
    return(0);
}