class Solution {
public:
    int reverse(int x) {
        int n = 0;
        int max = 2147483647;
        bool neg = false;
        if(x == -2147483648){
            return 0;
        }
        if(x < 0){
            neg = true;
            x = (-1)*(x);
        }
        if(x < 10){
            cout<<"yes";
            return x;
        }
        else{
            int t = x/10;
            int len = 2;
            while(t >9){
                len += 1;
                t= t/10;
                }
            int p = pow(10, (len-1));
            cout<<len<<":"<<x%p<<endl;
            if( len >= 10 && (x%10) >2){
                return 0;
            }
            else{
                int m = 1;
                int d = 0;
                int r = x;
                while(p>=1){
                    d = r/p;
                    r = r % p;
                    if((max - n) > (d*m)){
                        n += (d * m);
                        m *= 10;
                        p = p/10;
                    }
                    else{
                        return 0;
                    }
                    cout<<n<<endl;
                }
                if(neg){
                    n = (-1)*(n);
                }
                
            }
        }
        
        return n;
    }
};