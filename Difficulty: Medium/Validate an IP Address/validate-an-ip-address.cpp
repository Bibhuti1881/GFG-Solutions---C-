//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here\
           int isValid(string str) {
        int cnt =0;
        int n =str.size();
        for(int i =0;i< n;i++){
            if(str[i] == '.'){
                cnt++;
            }
        }
        for(int i =0;i< n;i++){
            string s ="";
            while(isdigit(str[i])){
                s+=str[i];
                i++;
            }
            if(s == ""){
                return false;
            }
            if(str[i] != '.' && i < n){
                return false;
            }
            if(s[0] == '0' && s.size() != 1){
                return false;
            }
            if(stoi(s) > 255){
                return false;
            }
        }
        return cnt == 3;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends