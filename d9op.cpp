class Solution {
public:

    int removeDuplicates(vector<int>& nums) {
        // //logN-insert,for loop N,for lopp N...NlogN+N...sc...o(N)
        // //brute forcer
        // set <int>st;
        // int n=nums.size();
        // for (int i=0;i<n;i++){
        //     st.insert(nums[i]);
        // }
        // int index=0;
        // for (auto it:st){
        //     nums[index++]=it;
        // }
        // return index;
        int i=0;
        for (int j=0;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];


            }

        }
        return i+1;


        
    }
};