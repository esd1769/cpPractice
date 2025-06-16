class Solution {
public:
    //o(n)
    int missingNumber(vector<int>& nums) {
        int xor1=0,xor2=0,n=nums.size();
        for (int i=0;i<n;i++){
            xor1=xor1^nums[i];
            xor2=xor2^(i+1);
        }
        //xor2=xor2^(N+1);==ERROR



        return xor1^xor2;
        // int sum2=0,n=nums.size();
        // long long sum1=0;//thats why xor is better
        // sum1=((n+1)*n)/2;
        // for (int i=0;i<n;i++){
        //     sum2+=nums[i];

        // }
        // return sum1-sum2;



//                 //o(N*N)
// //o(N+N).sc O(n)

// //o(N+LogN)
//         sort(nums.begin(), nums.end());//logN
//         int i=0;
//         for (i;i<nums.size();i++){//N
//             // if (nums[i]!=i)return i;
//             if (nums[i]!=i)break;
//         }

//         return i;

    }
};