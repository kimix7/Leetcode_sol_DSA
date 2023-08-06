#include<iostream>
#include<vector>

using namespace std;
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
int main(){
    vector<int> arr = {1, 2, 3, 4};
    int target = 5;
    vector<int> result = twoSum(arr, target);
    if (!result.empty()) {
        cout << "Indices of the two numbers that add up to the target: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
    return 0;

}