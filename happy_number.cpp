class Solution {
public:
    bool isHappy(int n) {
        std::map<int,int> table;
        int r = 0;
        int num = 0;
        while(table.count(n) == 0){
            num = 0;
            int temp = n;
            while(temp > 0){
                r = temp%10;
                temp = temp/10;
                num += pow(r,2);
            }
            if(num == 1){
                return true;
            }
            else{
                table[n] = 1;
            }
            n = num;
        }
        return false;
    }
};