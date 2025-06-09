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

//if you could bring sort term,then bs
class Solution {
private:int totalHourCount(vector<int>& piles, int r){
    int v=piles.size(),totalhour=0;
    for (int i=0;i<v;i++){
        totalhour+=ceil((double)piles[i]/(double)r);

    }
    return totalhour;

}
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=*max_element(piles.begin(), piles.end()),low=0,high=n-1,mid=0,ans=INT_MAX;;
        while (low<=high){
            mid=(low+((high-low)/2));
            ans=totalHourCount(piles,mid);
            if (ans<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }

        return ans;

        
    }
};