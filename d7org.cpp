class Solution {
public:
    double myPow(double x, int n) {
        // if (n==0) return 1;
        // if (x==1) return 1;

        // if (x==-1) { 
        //     if (n%2==0)return 1;
        //     else {return -1;}
        // }
        // double ans=1.0;
        // long long N=n;
        // if (n>=0){
        // for (int i=0;i<N;i++){
        //     ans*=x;


        // }}
        // else{
        //     for (int i=0;i<(N*(-1));i++){
        //     ans/=x;

        // }}
        // return ans;
        double ans=1.0;
        long nn=n;
        if (n<0)nn=nn*(-1);

        while (nn!=0){
            if (nn%2==0){
                x=x*x;
                nn=nn/2;
            }
            else{
                ans=ans*x;
                nn=nn-1;
            }


       }
       if (n<0){ return 1.0/ans;}


        return ans;
    }
}