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
///set insert...map find-----logN.,no sc......creation-no tc ,only sc