
// // private:bool f(int i,string s){
// //                 if (i>=(s.size()/2)) return true;

// //                 if (s[i]!=s[s.size()-i-1]) return false;
// //                 return f(i+1,s);}
// //         string modifiedString(string s){
// //             string newS="";
// //             for (int i=0;i<s.size();i++){
// //                 if ('a'<=s[i]&&s[i] <='z') newS+=s[i];
// //                 else if ('A'<=s[i]&& s[i]<='Z') newS+=s[i]+32;

// //             }
            
// //             return newS;

// //         }



    
// public:
// bool f(int i,string s){
//                 if (i>=(s.size()/2)) return true;

//                 if (s[i]!=s[s.size()-i-1]) return false;
//                 return f(i+1,s);}
//         string modifiedString(string s){
//             string newS="";
//             for (int i=0;i<s.size();i++){
//                 if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) newS+=s[i];
//                 else if ('A'<=s[i]&& s[i]<='Z') newS+=s[i]+32;

//             }
            
//             return newS;

//         }

//         bool isPalindrome(string s)  {
            
//             return f(0,modifiedString(s));
//         }
            
class Solution {
private:
    bool f(int i, const string& s) {
        if (i >= (s.size() / 2)) return true;
        if (s[i] != s[s.size() - i - 1]) return false;
        return f(i + 1, s);
    }

    string modifiedString(string s) {
        string newS = "";
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                newS += s[i];
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                newS += s[i] + 32; // manually convert to lowercase
            }
        }
        return newS;
    }

public:
    bool isPalindrome(string s) {
        return f(0, modifiedString(s));
    }
};
