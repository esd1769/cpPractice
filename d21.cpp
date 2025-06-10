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
int isPossible(vector<int>& bloomDay,int day, int m, int k,int low,int high){
    int count=0,total=0;
    for (int i=0;i<bloomDay.size();i++){
        if (bloomDay[i]<=k){
            count++;
        }
        else{
            count=0;
            total+=bloomDay[i]/k;
        }
        //last count will not be 0
        

        

    }



}

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=mini(bloomDay),high=maxi(bloomDay),mid=0,n=BloomDay.size(),ans=-1;
        if (m*k>n)return -1;
        while(low<=high){
            mid=low+((high-low)/2);
            if (isPossible(bloomDay,mid,m,k,mini(bloomDay),maxi(bloomDay))) {
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

