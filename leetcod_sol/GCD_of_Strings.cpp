// My solution that fails in some cases using gcd is better as it gives the flexibility to the code
#include<iostream>
#include <string>
#include<cmath>
#include <algorithm>

using namespace std;

int main(){
    string srt1 = "ABCABC";
    string srt2 = "ABC";
    if ( srt1 + srt2 == srt2 +  srt1){
        int temp = srt1.compare(srt2);// finds the index of the string from which the string differs from eachother
        cout<< srt1.substr(0,temp); // prints the string from 0 index to the uncommon index 
    }
    return 0;
}

// another method to do the same but using gcd function
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1)? 
        str1.substr(0, __gcd(size(str1),size(str2))): "";// finds the gcd and also prints the gcd of two strings
    }
};
