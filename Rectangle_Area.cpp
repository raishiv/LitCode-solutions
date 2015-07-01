class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area = ((C-A)*(D-B)) + ((G-E)*(H-F));
        if((C <= E) || (A >= G) || (D <= F) || (B >= H)) {
            return area;
        }
        else{
            int a = std::max(A,E);
            int b = std::max(B,F);
            int c = std::min(C,G);
            int d = std::min(D,H);
            area -= ((a-c)*(b-d));
            return area;
        }
    }
    
};