#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i : nums) {
            int tmp = nums[i] + nums[i+1];
            if (tmp == target) {
                vector<int> result;
                result.push_back(nums[i]);
                result.push_back(nums[i+1]);
                return result;
            }
        }

        vector<int> result;
        result.push_back(0);
        result.push_back(0);
        return result;
    };
};


int main(){
    Solution sol;
    sol.twoSum([2,7,11,15],9)
    return 0;
}
