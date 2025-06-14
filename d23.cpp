class Solution {
private:
int MODIFIEDlb(vector<int>& nums, int target){
    int low=0,n=nums.size(),high=n-1,mid=0,first=-1,last=-1;
        while (low<=high){
            mid=low+(high-low)/2;
            if (target==nums[mid]){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;

}
int MODIFIEDub(vector<int>& nums, int target){
    int low=0,n=nums.size(),high=n-1,mid=0,first=-1,last=-1;
        while (low<=high){
            mid=low+(high-low)/2;
            if (target==nums[mid]){
                first=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;

}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1,last=-1;
        first=MODIFIEDlb(nums,target);
        if (first==-1) return {-1,-1};
        last=MODIFIEDub(nums,target);
        return {first,last};
        
        
        
    }
};