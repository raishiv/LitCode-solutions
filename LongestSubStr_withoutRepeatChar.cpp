class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> hash;
        int count = 0;
        int res = 0;
        for(int i =0 ; i< s.length(); i++){
            if(hash.count(s[i]) == 0){
                hash[s[i]] = i;
                count++;
            }
            else if(count >= (i-hash[s[i]])){
                if(res < count) res = count;
                count = i - hash[s[i]];
                hash[s[i]] = i;
            }
            else if(count < (i-hash[s[i]])){
                count ++;
                hash[s[i]] = i;
            }
        }
        if(res < count) res = count;
        return res;
    }
};