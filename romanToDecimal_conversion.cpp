class Solution {
public:
    int romanToInt(string s) {
        char c[100];
        strcpy(c,s.c_str());
        int len = strlen(c);
        int decNum = 0;
        char prev;
        int I = 0;
        int V= 0;
        int X = 0;
        int L = 0;
        int C =0 ;
        int D = 0;
        for(int i= 0 ; i< len; i++){
            if(c[i] == 'M'){
                decNum += 1000;
                if(prev == 'C'){
                    decNum = decNum - (C*200);
                }
                prev = c[i];
            }
            else if(c[i] == 'D'){
                D += 1;
                decNum += 500;
                if(prev == 'C'){
                    decNum = decNum - (C*2*100);
                }
                prev = c[i];
            }
            else if(c[i] == 'L'){
                L += 1;
                decNum += 50;
                if(prev == 'X'){
                    decNum = decNum - (X*2*10);
                }
                prev = c[i];
            }
            else if(c[i] == 'V'){
                V += 1;
                decNum += 5;
                if(prev == 'I'){
                    decNum = decNum - (I*2*1);
                }
                prev = c[i];
            }
            else if(c[i] == 'C'){
                C += 1;
                decNum += 100;
                if(prev == 'X'){
                    decNum = decNum - (X*2*10);
                }
                prev = c[i];
            }
            else if(c[i] == 'X'){
                X += 1;
                decNum += 10;
                if(prev == 'I'){
                    decNum = decNum - (I*2*1);
                }
                prev = c[i];
            }
             else if(c[i] == 'I'){
                I += 1;
                decNum += 1;
                prev = c[i];
            }
        }
        return decNum;
    }
};