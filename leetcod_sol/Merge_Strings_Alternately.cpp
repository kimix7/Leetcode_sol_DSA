
//Brute force apporach
#include<iostream>
using namespace std;

int main() {
    char ch1[10];
    char ch2[10];
    cin >> ch1;
    cin >> ch2;
    int size = 0;
    char ans[20]; // Increase the size to accommodate merged string

    int i = 0;
    int j = 0;

    while (ch1[i] != '\0' || ch2[j] != '\0') {
        if (ch1[i] != '\0') {
            ans[size++] = ch1[i++]; // size is working as an pointer in result to track whis element is going to be added to the result string
        }

        if (ch2[j] != '\0') {
            ans[size++] = ch2[j++];
        }
    }

    ans[size] = '\0'; // Null-terminate the merged string
    cout << ans;

    return 0;
}

//optimized apporach

//better way to work with strings
#include <string>
#include<iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result; // kimd of an dynamic char arr[]
        int i = 0, j = 0;
        int len1 = word1.length();// gets length of string
        int len2 = word2.length();

        while (i < len1 || j < len2) {
            if (i < len1)
                result.push_back(word1[i++]);// push_back appends the char to the end of the string

            if (j < len2)
                result.push_back(word2[j++]);
        }

        return result;
    }
};

int main() {
    Solution solution;
    string word1 = "abc";
    string word2 = "defg";
    string merged = solution.mergeAlternately(word1, word2);
    cout << merged << endl;
    return 0;
}


