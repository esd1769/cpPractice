//whenever...got sorted..we can use binary search
//binary search..not only in array..but for everything
//bs-everything like dictionary,books,texts,string also
//when we have lots of edge cases..we use triming parts by bs
//for removing edge condition..i will modify low,high
//one single element..
//before that single elements...even,odd-same
//after that single elements...odd,even-same
//always
//even odd...single....odd eeven
//1     1       2       3   3
//0.....1 ...single.....3...4
//if fucntion return type is integer
//always return statement..return -1;
//although it is never run
//binary search..just focus on elimination..trim parts
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //modify low,high..for ignoring checking i=-1,i=n..which gives error
        int low=1,high=nums.size()-2,mid=0;
        while(low<=high){
            mid=low+((high-low)/2);
            if ((nums[mid-1]!=nums[mid])&&(nums[mid]!=nums[mid+1])) return nums[mid];
            else if ((mid%2==1)&&)
        }
        
    }
};
