//STEP 1-MOORE VOTING ALGO
//VARIFY IF ARRAY HAS MAJORITY ELEMENT
class Solution {
    //mooree voting algo
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element=-1;
        for (int i=0;i<nums.size();i++){
            if (count==0){
                element=nums[i];
                count++;

            }
            else if (element==nums[i])count++;
            else if (element!=nums[i])count--;
            
        }
        return element;

    }
};