//Kadane's Algorithm | Maximum Subarray Sum
//[1,0,-1,2,4]
//subarray-consiquative part[1,0,-1]...not [1,-1]
//sub sequence....[1,-1]
//maxi=max(maxi,sum);...comma,not semicolon in max min
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxi=INT_MIN;
        long long sum=0;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            
           
            if (maxi<sum)maxi=sum;
            if (sum<0)sum=0;
            
        }
        return (int)maxi;
        
    }
};
//         int maxi=INT_MIN;
//         for (int i=0;i<nums.size();i++){
//             for(int j=i;j<nums.size();j++){
//                 int sum=0;
//                 for (int k=i;k<=j;k++){
//                     sum+=nums[k]; 
//                 }
//                 maxi=max(maxi,sum);
//             }
//         }
//         return maxi;
        
//     }
   
    
// };