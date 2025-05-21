#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
                if (count > 1) return false;
            }
        }
        return true;
    }
};

// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int count = 0;
//         int n = nums.size();
//         for (int i = 0; i < n; ++i) {
//             if (count<1&&(nums[i] > nums[(i + 1) % n])) {
//                 count++;
//                 if (count > 1)
//                     return false;
//             };
//             else if ((nums[i] > nums[(i + 1) % n])&&nums[i] < nums[(i + 1) % n]{
//                 continue;

//             else{
//                 return false;
//             }}
            
//         }
//         return true;
//     }
// };


// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int n=nums.size();
//         int count=0;
//        for (int i = 0; i < n; i++) {
//     for (int j = i + 1; j < n; j++) {
//     if (nums[j] < nums[i]){

//         count++;
//         if (count > 1)
//             return false;}

//     else if ((nums[j] > nums[(i ) )&[&nums[j] < nums[(i - 1) ]{
//                 continue;}

//     else{
//         return false;
//             }
   
  
//     }}
//     return true;
// };
// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         for (int i = 1; i < nums.size(); ++i) {
//             if (nums[i] < nums[i - 1])
//                 return false;
//         }
//         return true;
//     }
// };



// bool isSorted(int arr[], int n) {
  

  
// }

// int main() {

//   int arr[] = {1, 2, 3, 4, 5}, n = 5;
//   bool ans = isSorted(arr, n);
//   if (ans) cout << "True" << endl;
//   else cout << "False" << endl;
//   return 0;
// }

