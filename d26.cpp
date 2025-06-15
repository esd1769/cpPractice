        //o(N*N)
//o(N+N).sc O(n)

//o(N+LogN)
        sort(nums.begin(), nums.end());//logN
        int i=0;
        for (i;i<nums.size();i++){//N
            // if (nums[i]!=i)return i;
            if (nums[i]!=i)break;
        }

        return i;