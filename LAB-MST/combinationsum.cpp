class Solution {
public:
    void helper(vector<vector<int>>& ans,vector<int> nums,vector<int>& v, int target, int idx){
        int n=nums.size();
        if(target<0) return;
        if(target==0){
            ans.push_back(v);
            return;
        }
        for(int i=idx;i<n;i++){
            if(i>idx and nums[i]==nums[i-1]) continue;
            v.push_back(nums[i]);
            helper(ans,nums,v,target-nums[i],i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(nums.begin(),nums.end());
        helper(ans,nums,v,target,0);
        return ans;
    }
};