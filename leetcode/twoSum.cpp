#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;

    result.push_back(0);
    result.push_back(0);

    int n1 = nums.size() - 1;
    
    for (int i = 0; i < n1; i++)  {
        for (int j = 1; i < n1 + 1; j++) {
            bool a = nums[i] + nums[j] == target;
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;

                return result;
            }
        }
    }

    return result;
}

bool test(vector<int> input, int target, int esp1, int esp2){

    vector<int> result = twoSum(input, target);

    if (result[0] == esp1 && result[1] == esp2) {
        std::cout << "Test passed" << "\n";
        return true;
    } else {
        std::cout << "Test failed" << "\n";
        return false;
    }
}

int main() {

    test({2, 7, 11, 15}, 9, 0, 1);
    test({3, 2, 4}, 6, 1, 2);
    test({3, 3}, 6, 0, 1);

    return 0;
}