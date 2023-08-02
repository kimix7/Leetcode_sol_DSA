//My apporach
#include<iostream>
#include <vector>

using namespace std;

 vector<bool> maxCandies(vector<int> & arr,int size, int n){
    int maxEle = arr[0];
    for(int j=0;j<n;j++){
    if(arr[j] > maxEle){
        maxEle = arr[j];
        }
    }

    vector <bool> result; 
    for (int i = 0; i<size; i++){
        arr[i] += n; 
        if (arr[i] >= maxEle){
            result.push_back(true);
        }
        else{
            result.push_back(false);
        }
    }
    return result;

}

int main(){
    vector candies = {12,1,12};// not working for this case
    int extraCandies = 10;
    int n = candies.size();
    vector<bool> k = maxCandies(candies, n, extraCandies);
    cout << "Output: ";
    for (bool b : k) {
        cout << (b ? "true" : "false") << " ";
    }
    cout << endl;
    return 0;
}



// solution that worked logic same as mine
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxEle = candies[0];
        int n = candies.size();
        for(int i=0;i<n;i++){
            if(candies[i] > maxEle){
                maxEle = candies[i];
            }
        }
        vector<bool> res;
        for(int i=0;i<n;i++){
            int x = candies[i];
            x += extraCandies;
            if(x >= maxEle){
                res.push_back(true);
            }else{
                res.push_back(false);
            }
        }
        return res;
    }
};