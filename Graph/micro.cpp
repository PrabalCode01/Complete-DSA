#include <iostream>
#include <string>
using namespace std;

int findLongestSymmetricSubstring(string s) {
    int len = s.length();

    if (len < 2) {
        return 0;
    }

    int max_length = 0;
    int* left = new int[len - 1];
    int* right = new int[len - 1];

    // left[0] = (s[0] != '>') ? 1 : 0;
    if(s[0]!='>'){
        left[0]=1;
    }
    else{
        left[0]=0;
    }
    for (int i = 1; i < len - 1; i++) {
        left[i] = (s[i] != '>') ? left[i - 1] + 1 : 0;
    }

    right[len - 2] = (s[len - 1] != '<') ? 1 : 0;
    for (int i = len - 3; i >= 0; i--) {
        right[i] = (s[i + 1] != '<') ? right[i + 1] + 1 : 0;
    }

    for (int i = 0; i < len - 1; i++) {
        max_length = max(max_length, 2 * min(left[i], right[i]));
    }

    // delete[] left;
    // delete[] right;
    return max_length;
}

int main() {
    string S = "??>>";
    cout << findLongestSymmetricSubstring(S) << endl; // Output: 6

    return 0;
}
