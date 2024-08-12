//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
          long long int s=1;
        long long int e=n;
        long long int mid;
        
        while(s<=e-2)
        {
            mid=(s+e)/2;
            if(mid*mid>n)
            {
                e=mid;
            }
            else
            {
                //ans=mid;
                s=mid;
            }
            //if(s+1==e)break;
            // else return mid;
          
        }
         return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends