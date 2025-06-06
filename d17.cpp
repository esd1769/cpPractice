//all target problem can be done O(n)-linear search
//why buinary search??for O(logN)


//sorted+find=binary search
// WHY {4low....2mid.....3}OKAY...[4low...4....2mid...3]NOT
//CUZ rotated array have only one low>mid case
//if more than one...if is not sorted anymore 
//the part where the rotating point is,has minimum
//WHY provide equal..with low??
//why nums[low]<=nums[mid]..not else??
//as [2,1]..both mid and low is 2...not 1...high
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid=0,ans=INT_MAX;
        while(low<=high){
            mid=low+((high-low)/2);
            if (nums[low]<=nums[high]){
                ans=min(ans,nums[low]);
                break;
            if (nums[low]<=nums[mid]){
               // as [2,1]..both mid and low is 2...not 1...high
                ans=min(ans,nums[low]);
                low=mid+1;
                

            }
            else{
                ans=min(ans,nums[mid]);
                high=mid-1;

            }

        }
        return ans;
        
    }
};