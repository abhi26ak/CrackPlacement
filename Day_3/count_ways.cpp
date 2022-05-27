long long countWays(int m)
   {
       long long int dp[m+1];
       dp[0]=1;dp[1]=1;dp[2]=2;
       for(long long int i=3;i<m+1;i++){
           dp[i]=dp[i-2]+1;
       }
       return dp[m];
   }
