//binary search basic

class Solution {
        //O(logN)
            //recurrssive technic
    private:int bs(vector<int>& nums, int target,int low ,int high){
        if (low>high)return -1;
        int mid=(low+high)/2;
            if (nums[mid]==target)return mid;
            else if (nums[mid]<target) return bs(nums,target,mid+1,high);
            else{ return bs(nums,target,low,mid-1);}
    }
public:
    int search(vector<int>& nums, int target) {
                //recurrssive technic
        int low=0,high=nums.size()-1,mid=0;
            return bs(nums,target,low ,high);
            //while loop technic
    //     int low=0,high=nums.size()-1,mid=0;
    //     while(low<=high){
    //         //mid=low+high/2..wrong
    //         mid=(low+high)/2;
    //         if (nums[mid]==target)return mid;
    //         else if (nums[mid]<target){ low=mid+1;}
    //         else{ high=mid-1;}
    //     }
    //    return -1;
            
    
    }
};