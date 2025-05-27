class Solution {
public:
    double myPow(double x, int n) {
        if (n==0) return 1;
        if (x==1) return 1;

        if (x==-1) { 
            if (n%2==0)return 1;
            else {return -1;}
        }
        double ans=1.0;
        long long N=n;
        if (n>=0){
        for (int i=0;i<N;i++){
            ans*=x;


        }}
        else{
            for (int i=0;i<(N*(-1));i++){
            ans/=x;

        }}
        return ans;
        
    }
};