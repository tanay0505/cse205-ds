class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n);
        vector<int>res(2);
        for(int i=0;i<n;i++)
        {
            a[nums[i]-1]++;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==2)
            {
                res[0]=i+1;
            }
            if(a[i]==0)
            {
                res[1]=i+1;
            }
        }
        return res;
    }
};