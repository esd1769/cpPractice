//upper bound and lower bound...sql

// vector<int> nums = {1, 3, 5, 5, 5, 7, 9};
// Target = 5:

// Lower Bound: Index 2

// Upper Bound: Index 5

// Target = 6:

// Lower Bound: Index 5

// Upper Bound: Index 5

// Target = 9:

// Lower Bound: Index 6

// Upper Bound: Index 7

//lower bound
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,n=nums.size(),high=n-1,ans=n,mid=0;
        while (low<=high){
            mid=low+((high-low)/2);
            if (nums[mid]>=target){//upper bound if (nums[mid]>target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }}
            return ans;


        
    }
};

//upper bound
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,n=nums.size(),high=n-1,ans=n,mid=0;
        while (low<=high){
            mid=low+((high-low)/2);
            if (nums[mid]>target){//lower bound if (nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }}
            return ans;


        
    }
};