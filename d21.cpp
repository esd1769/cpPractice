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


if (m*k>n)return -1;
