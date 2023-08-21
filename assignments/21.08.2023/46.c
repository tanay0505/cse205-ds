class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> results;
        generatePermutations(0, &nums, &results);
        return results;
    }
private:
    void generatePermutations(int i, vector<int>* nums_ptr, vector<vector<int>>* results) {
        auto& nums = *nums_ptr;
        if (i == nums.size() - 1) {
            results->emplace_back(nums);
            return;
        }
        for (int j = i; j < nums.size(); ++j) {
            std::swap(nums[i], nums[j]);
            generatePermutations(i + 1, nums_ptr, results);
            std::swap(nums[i], nums[j]);
        }       
    }
};
