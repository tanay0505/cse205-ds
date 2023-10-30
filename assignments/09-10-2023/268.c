class Solution {
public:
int findPartition(vector<int>& nums, int low, int high){
        int pivot = nums[low];
        int i = low;
        int j = high;
        while(i < j){
            while(i <= high - 1 && nums[i] <= pivot){
                i++;
            }
            while(j >= low + 1 && nums[j] > pivot){
                j--;
            }
            if(i < j){
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[low], nums[j]);
        return j;
    }
    void quicksort(vector<int>& nums, int low, int high){
        if(low >= high){
            return;
        }
        int ind = findPartition(nums,low,high);

        quicksort(nums,low, ind-1);
        quicksort(nums,ind+1,high);
    }
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       quicksort(nums,0,n-1);
       for (int i=0;i<n;i++){
           if (i!=nums[i]){
               return i;
           }
       }
       return n;
    }
};