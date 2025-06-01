class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //     int n=nums.size();
    //     for (int i=0;i<n;i++){
    //         int count=0;
    //         for (int j=0;j<n;j++){
    //             if (nums[i]==nums[j])count++;
    //         }
    //         if (count>n/2) return nums[i];
    //     }
    //     return 0;


//std::vector<std::pair<int, int>> mpp; mpp[i].first;else auto it:mpp
map<int,int>mpp;
    for (int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    }
     for (auto it:mpp){
        if (it.second>nums.size()/2) return it.first;
    }
    return -1;
    }
};