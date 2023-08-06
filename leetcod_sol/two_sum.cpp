// brute force method 
#include<iostream>
#include<vector>
#include<unordered_map>

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


// optimal solution is using hash map in one pass

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i]; //For each element nums[i],
            // calculate the complement by subtracting it from the target: complement = target - nums[i].
            if (numMap.count(complement)) { // count function can be used to check if the element exists in the hash table
                return {numMap[complement], i};//Check if the complement exists in the hash table. 
                // If it does, we have found a solution.
            }
            numMap[nums[i]] = i;
        }

        return {}; // No solution found
    }
};