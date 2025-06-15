//swap(nums[i],nums[j]);
//void- //return nums;---error...only return

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1,n=nums.size();
        for (int i=0;i<n;i++){
            if (nums[i]==0){
                j=i;
                break;}
            }
    if (j==-1){
        //return nums;---error
        return;}
    for (int i=j+1;i<n;i++){
        if (nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;

        }
    }
        
    }
};