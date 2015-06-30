class Solution {
public:
    bool isValid(string s) {
        char c[100];
        bool res = false;
        strcpy(c,s.c_str());
        int l = strlen(c);
        char prev = c[0];
        if(l%2 != 0){
            return false;
        }
        std::stack<char> st;
        for(int i=0 ; i< l; i++){
            if(c[i] == '{' || c[i] == '[' || c[i] == '('){
                st.push(c[i]);
                cout<<"if"<<endl;
                cout<<st.top()<<endl;
            }
            else{
                if(!st.empty()){
                    if((c[i] == ')' && st.top() == '(')|| (c[i] == '}' && st.top() == '{') || (c[i] == ']' && st.top() == '[')){
                        st.pop();
                        res = true;
                    }
                    else{
                    res = false;
                    break;
                   }
                }
             }
         }
        return res;
    }
};