class Solution {
public:
    int razonmind(vector<int>&nums,int cur,int n,vector<int>&dp){
        if(cur >= n){
            return 0;
        }
        
        if(dp[cur] != -1){
            return dp[cur];
        }
        
        int rob = nums[cur] + razonmind(nums,cur+2,n,dp);       
        int notrob = razonmind(nums,cur+1,n,dp);
        dp[cur] = max(rob,notrob);
        return max(rob,notrob);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return razonmind(nums,0,n,dp);
    }
};