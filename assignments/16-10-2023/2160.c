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
    int minimumSum(int num) {
      int digit=num;
      vector<int> v;
      while (digit!=0){
          int tmp=digit%10;
          v.push_back(tmp);
          digit/=10;
      } 
      quicksort(v,0,v.size()-1);
      int num1=(v[0]*10) + v[2];
      int num2=(v[1]*10) + v[3];
      return num1+num2; 
    }
};