class Solution {
public:

int EvenDigits(int n)
{
    int digits=0;
    while(n>0)
    {
        digits++;
        n/=10;
    }
    return digits;
}

int findNumbers(vector<int>& nums) 
{
    int ans=0;
    for(int i=0; i<nums.size(); i++)
    {
        if(EvenDigits(nums[i])%2==0)
        {
            ans++;
        }
    }
    return ans;
    }
};