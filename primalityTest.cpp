//please accept this as hacktoberfest-accepted
//thanks


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    bool isPrime(int N)
    {
        //Your code here
    }
};

// { Driver Code Starts.

int main()
{
    int T;      //testcases
    cin >> T;   //input testcases
    while (T--) //while testcase have not been exhausted
    {
        int N;
        cin >> N; //input n
        Solution ob;
        if (ob.isPrime(N))
            cout << "Yes";
        else
            cout << "No";

        cout << endl;
    }
    return 0;
}
