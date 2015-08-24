class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        if(s.length() != t.length()) return false;
        for(int i = 0; i< s.length(); i++){
            if(m.count(s[i]) == 0) m[s[i]] = 1;
            else m[s[i]] += 1;
        }
        for(int j=0; j <t.length(); j++){
            if(m.count(t[j]) == 0 || m[t[j]] == 0) return false;
            else m[t[j]] -= 1;
            }
        return true;
    }
};