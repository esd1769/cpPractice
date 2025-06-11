//upper bound and lower bound...sql



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