/*


class Solution {
public:
    int dp[105];
    int house_robber(vector<int>& nums,int n)
    {
      if(n==0) return nums[0];
      if(n<0) return 0;

      if(dp[n]!=-1)
      {
        return dp[n];
      }

      int ans1=nums[n]+house_robber(nums,n-2);
      int ans2=house_robber(nums,n-1);

      int ans=max(ans1,ans2);
      dp[n]=ans;
      return ans;
    }


    int rob(vector<int>& nums) 
    {
        int n=nums.size();

        if(n==1) return nums[0];
         
        vector<int>v1(nums.begin()+1,nums.end());
        vector<int>v2(nums.begin(),nums.end()-1);
        memset(dp,-1,sizeof(dp));
        int ans1=house_robber(v1,v1.size()-1);
        memset(dp,-1,sizeof(dp));
        int ans2=house_robber(v2,v2.size()-1);
        return max(ans1,ans2);
    }
};

*/