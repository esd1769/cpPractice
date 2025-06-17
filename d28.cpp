//FOR MAP..use it.first it.second
//hashmap has size so Complesize O(N)
//map only take used space..O(n/2)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //    int xor=0;error
        int xor1=0;
        for (int it:nums){
            xor1^=it;
        }
        return xor1;
    }
};