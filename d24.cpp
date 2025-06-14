///master missied k = k % n; in optimal solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         //he missed
        k = k % n;  // Reduce k if it's larger than the size of the array
        //he missed
        if (k == 0) return;  // No need to rotate if k is 0 or a multiple of n

        // Reverse the entire array
        reverse(nums.begin(), nums.end());
        
        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Reverse the remaining n-k elements
        reverse(nums.begin() + k, nums.end());
    }
};

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int temp=nums[0],n=nums.size();
//         for (int i=1;i<n;i++){//why not i=0,cuz it willl go to i-1,0-1,-1 index==error
//             nums[i-1]=nums[i];
//         }
//         nums[n-1]=temp;
        
//     }
// };