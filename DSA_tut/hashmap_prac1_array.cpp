// maximum number freq
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, int> count;
    int maxFreq = 0;
    int maxAns = 0;

    // Loop through the input vector 'arr'
    for (int i = 0; i < arr.size(); i++) {
        // Increment the count of the current element in the 'count' unordered_map
        count[arr[i]]++; //  In this line, the code increments the frequency of the current element arr[i] in the count unordered_map. 
        //If the element is encountered for the first time, it will be added to the map with a frequency of 1. 
        //If it's encountered again, its frequency will be incremented.

        // Update 'maxFreq' with the maximum frequency seen so far
        maxFreq = max(maxFreq, count[arr[i]]);
    }

    // Loop through the input vector 'arr' again
    for (int i = 0; i < arr.size(); i++) {
        // Check if the frequency of the current element equals 'maxFreq'
        if (maxFreq == count[arr[i]]) {
            // If it does, update 'maxAns' with the value of the current element
            // and break out of the loop since we only need to find the first element with maximum frequency
            maxAns = arr[i];
            break;
        }
    }

    // Return the element with the maximum frequency
    return maxAns;
}

int main(){
    vector<int> arr = {1, 2, 3, 4,4,3,3,5,6,3,1};
    int target = 5;
    int result = maximumFrequency(arr, target);
    cout<< result;
    return 0;
}