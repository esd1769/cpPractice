//general loop O(n)
//try to covert loop to bs for O(logN) 





//WHEN WE SEE PATERN..IT is binary search
//xxxxxxxxxxxxxxxxxxxxxxxxxxxx000000000000000000000000000000000
//not possible                minimulpossible         allpossible 
//low                             mid                     high


//so binary search
//whenever i get 3parts...i can replace 
//linear search....... to.........binary search
//O(n).................to..........O(logN)
//range matters...for time complexity
//so try to minimize the range

class Solution {
private:
bool isPossible(vector<int>& bloomDay,int day, int m, int k){
    int count=0,total=0;
    for (int i=0;i<bloomDay.size();i++){
        if (bloomDay[i]<=k){
            count++;
        }
        else{
            
            total+=count/k;
            count=0;
        }
    }
        //last count will not be 0
        total+=count/k;
        return total<=m;
    
}

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(), bloomDay.end()),high=*max_element(bloomDay.begin(), bloomDay.end()),mid=0,n=bloomDay.size(),ans=-1;
        if (m*k>n)return -1;
        while(low<=high){
            mid=low+((high-low)/2);
            if (isPossible(bloomDay,mid,m,k)) {
                ans=mid;
                high=mid-1;

            }
            else{
                low=mid+1;
            }

        }
        return ans;
        
        

        
    }
};

