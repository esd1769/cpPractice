class Solution {
    //dutch national flag algo
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        int high=n-1;
        int low=0;
        int mid=0;
      while (mid<=high){
            if(nums[mid]==0 ) {swap (nums[mid],nums[low]);low++;mid++;}
            else if (nums[mid]==1){ mid++;}
            else if (nums[mid]==2) {swap (nums[mid],nums[high]);high--;}
        }

    }
};
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int c0=0;
//         int c1=0;
//         int c2=0;
//         for (int i=0;i<nums.size();i++)
//         {
//             if( nums[i]==0 )c0++;
//             else if (nums[i]==1) c1++;
//             else if (nums[i]==2) c2++;}
//         // int index=0;
//         // for (int i=0;i<c0;i++){nums[index++]=0;}
//         // for (int i=0;i<c1;i++){nums[index++]=1;}
//         // for (int i=0;i<c2;i++){nums[index++]=2;}
      
//         for (int i=0;i<c0;i++){nums[i]=0;}
//         for (int i=c0;i<c1+c0;i++){nums[i]=1;}
//         // int n=nums.size();
//         // for (int i=c1+c0;i<n;i++){nums[i]=2;}
//         for (int i=c1+c0;i<c1+c0+c2;i++){nums[i]=2;}
    
//     }
// };