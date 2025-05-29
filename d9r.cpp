class Solution {
public:
//logN-insert,for loop N,for lopp N...NlogN+N...sc...o(N)
//brute forcer
    int removeDuplicates(vector<int>& nums) {
        set <int>st;
        int n=nums.size();
        for (int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int index=0;
        for (auto it:st){
            nums[index++]=it;
        }
        return index;

        
    }
};