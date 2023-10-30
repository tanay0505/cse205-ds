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
    int buyChoco(vector<int>& prices, int money) {
        quicksort(prices,0,prices.size()-1);
        int cost=prices[0]+prices[1];
        if (cost<=money){
            return money-cost;
        }
        return money;
    }
};