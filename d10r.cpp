class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for (int i=0;i<nums.size();i++){
            int first=nums[i];
       
            int second=target-first;
             //if (i==mpp[second]) continue;
            if (mpp.find(second)!=mpp.end()){
               // return {mpp[first],mpp[second]};
                return {mpp[second],i};
            }

            mpp[first]=i;
        }
        return {};
            
    }  
};
///set insert...map find-----logN...total O(n),no sc.unorder map--N..total O(n square).....creation-no tc ,only sc
//BUT FOR SORT --NLOGN

int n=nums.size();
int i=o;int r=n-1;
sort(nums.begin(),nums.end());
while(l<r){
    int s=l+r;
    if (s==target) return true;
    else if (s>target) r--;
    else l++;
    }
    return false;

}