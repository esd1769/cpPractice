//handling edge case...if ((i==n-1)||(nums[i]<nums[i+1]))
//must be stop exicutimg i=n,i=-1...while dealing array
//always see input and output of question
//logN..searching+sort =binary search
//break problem in small..lets consider,array has 1peak
//IF FUNCTION has return type int...you need to give to give hypothetical return -1
//controlling edge case more efficiently
//comes from experience
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(),low=1,high=n-2,mid=0;
        if (n==1)return 0;
        if (nums[n-1]>nums[n-2]) return n-1;
        if (nums[0]>nums[1]) return 0; 
        while(low<=high){
            mid=low+((high-low)/2);
            if ((nums[mid]>nums[mid-1])&&(nums[mid]>nums[mid+1]))return mid;
            else if (nums[mid]>nums[mid-1]) low=mid+1;
            //both work for multiple peaks or one peak
            else{ high=mid-1;}


        }
        return -1;
        
    }
};