class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int mainnum=num;
        while (num>0){
        
            if ((num%10)!=0&&(mainnum%(num%10)==0)) count++;
            num=num/10;

        }
        return count;

        
    }
};