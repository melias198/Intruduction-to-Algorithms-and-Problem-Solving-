/*


class Solution 
{

int dp[10005];

public:
    int perfect_square(int n)
    {
        if(n==0)
        {
            return 0;
        }

        if(dp[n]!=-1)
        {
            return dp[n];
        }

        int ans=INT_MAX;

        for(int i=1;i*i<=n;i++){
            int j=i*i;
            ans=min(ans,1+perfect_square(n-j));
        }

        dp[n]=ans;
        return ans;
    }

    int numSquares(int n)
    {
        memset(dp,-1,sizeof(dp));
        return perfect_square( n);
    }
};


*/