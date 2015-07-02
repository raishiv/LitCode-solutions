class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool res = false;
        map<char,char> m1;
        map<char,char> m2;
        if(s.length() <=1){
           return true;
        }
        for(int i =0 ; i< s.length() ; i++ ){
            if(m1.count(s[i]) == 0){
                m1[s[i]] = t[i];
                res = true;
            }
            else if(m1[s[i]] == t[i]){
                res = true;
            }
            else{
                res = false;
                break;
            }
             if(m2.count(t[i]) == 0){
                m2[t[i]] = s[i];
            }
            else if(m2[t[i]] == s[i]){
                res = true;
            }
            else{
                res = false;
                break;
            }
        }
        return res;
    }
};