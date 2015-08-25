//find column number of excel sheet columns. A=1 B= 2....Z= 26 AA=27 AB=28....

class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length() -1;
        int res = 0;
        for (int i= len, j=0 ; i>=0,j<=len; i--,j++){
            int temp = 1 + (s[i] - 'A');
            res += temp * (pow(26,j));
        }
        return res;
    }
};