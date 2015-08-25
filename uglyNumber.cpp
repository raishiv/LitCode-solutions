//ugly number : numbers which has prime factors other than 2 5 and 7
class Solution {
public:
    bool isUgly(int num) {
        for(int i = 2; i <=5 && num; i++){
            while(num % i == 0){
                num /= i;
            }
        }
        return (num == 1);
    }
};