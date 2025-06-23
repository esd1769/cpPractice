//maximum substring-two pointer and sliding windows
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hashmap[256];
        memset(hashmap, -1, sizeof(hashmap)); // Correct initialization 
        //OR FOR LOOP

        
        //int hashmap[256]={-1};
        //if (s == " ") return 1;  // This checks for a single space string
        //if (s.empty()) return 0;  // Add this to handle the empty string case
    
        int l=0,r=0,n=s.size(),maxlen=0;
        while (r<n){
            //without duplicate
            if ((hashmap[s[r]]>=l)&&(hashmap[s[r]]!=-1)){
                l=hashmap[s[r]]+1;
            }
            maxlen=max(maxlen,(r-l+1));
            hashmap[s[r]]=r;
            r++;


        }
        return maxlen;
        
    }
};