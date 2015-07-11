class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int c = 0;
        bool space = false;
        for(int i=0; i<len ;i++){
            if(s[i] == ' ' ){
                space = true;
            }
            else if(s[i] != ' ' && space == false){
                c++;
                space = false;
            }
            else if(s[i]!= ' ' && space == true){
                c = 1;
                space = false;
            }
        }
        return c;
    }
};