//Given a non-negative number represented as an array of digits, plus one to the number.

//The digits are stored such that the most significant digit is at the head of the list.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        vector<int> res(len);
        bool carry = true;
        for(int i = len-1 ; i>=0 ; i--){
            if(digits[i] == 9 && carry ){
                res[i] = 0;
            }
            else if(digits[i] != 9 && carry){
               res[i] = digits[i] + 1 ;
               carry = false;
            } 
            else{
                res[i] = digits[i];
                carry = false;
            } 
        }
        if(digits[0] == 9 && res[0] == 0){
            vector<int> res1(len+1);
            for(int j = len ; j>0 ; j--){
                res1[j] = res[j-1];
            }
            res1[0] = 1;
            return res1;
        }
        return res;
    }
};