class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
       if (n==0) return 1;
    
       int a=10;
       //int b=10;
       int c=9;
       int ans=9;
       for (int i=1;i<n && c>0;i++){
        ans=ans*c;
        a=a+ans;
        c--;
       }

      
       
       return a;}
        
    };
