//FOR MAP..use it.first it.second
//hashmap has size so Complesize O(N)
//map only take used space..O(n/2
//All the key operations such as insertion, deletion, access, and search work in O(log n) time, as the underlying data structure is a self-balancing Red-Black Tree.

//Map operations typically have constant extra space complexity (O(1)), except for the storage of the elements themselves.)
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