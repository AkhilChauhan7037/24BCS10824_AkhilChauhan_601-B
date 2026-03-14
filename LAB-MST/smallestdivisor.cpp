class Solution {
public:
    int S(vector<int>& nums,int mid)
    {
        int n=nums.size();
        unsigned long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+(nums[i]/mid);
            if(nums[i]%mid!=0)
            {
                sum=sum+1;
            }
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int t) {
        int mx=*max_element(nums.begin(),nums.end());
        int start=1,end=mx,ans,mid;
        while(start<=end)
        {
            mid=start+((end-start)/2);
            int sum=S(nums,mid);
            if(sum>t)
            {
                start=mid+1;
            }
            else if(sum<=t)
            {
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};