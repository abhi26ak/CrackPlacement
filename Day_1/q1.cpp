#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int dp[501][2][201];
  int solve(int k , int i , int n , int a[] , int sell)
  {
      if(i >= n) return 0;
      if(dp[i][sell][k] != -1) return dp[i][sell][k];
      int ans = solve(k , i+1 ,n, a , sell);
      if(k > 0 && sell == 0)
      {
              ans = max(ans , -a[i] + solve(k , i+1,n , a , 1));
      }
      if(sell == 1)
      {
          ans = max(ans , a[i] + solve(k-1 , i+1 ,n,a , 0));
      }
      return dp[i][sell][k] =ans;
  }
    int maxProfit(int k, int n, int a[]) {
        // code here
        // vector<vvector<int>> dp(n+1 , vector<int> (k+1 , -1));
        memset(dp , -1 , sizeof(dp));
        return solve(k , 0 , n , a , 0);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}  // } Driver Code Ends
