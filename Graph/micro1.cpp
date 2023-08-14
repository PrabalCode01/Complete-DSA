#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Union-Find (Disjoint Set Union) data structure
class UnionFind {
private:
    vector<int> parent;

public:
    UnionFind(int n) {
        parent.resize(n);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            parent[rootY] = rootX;
        }
    }
};

string solution(vector<string>& A) {
    int n = A.size();
    int charCount = 26; // Number of lowercase letters (a-z)

    // Create separate union-find sets for strings with the same starting and ending characters
    UnionFind uf_start(charCount);
    UnionFind uf_end(charCount);

    for (int i = 0; i < n; ++i) {
        int startChar = A[i][0] - 'a';
        int endChar = A[i][1] - 'a';
        uf_start.unite(startChar, endChar);
        uf_end.unite(endChar, startChar);
    }

    // Count the number of sets in each union-find for both starting and ending characters
    unordered_map<int, int> startSets, endSets;

    for (int i = 0; i < charCount; ++i) {
        int rootStart = uf_start.find(i);
        int rootEnd = uf_end.find(i);
        startSets[rootStart]++;
        endSets[rootEnd]++;
    }

    // Count the number of connected strings for each set in both union-find
    int countConnectedStart = 0, countConnectedEnd = 0;
    for (const auto& it : startSets) {
        if (it.second > 0) {
            countConnectedStart++;
        }
    }

    for (const auto& it : endSets) {
        if (it.second > 0) {
            countConnectedEnd++;
        }
    }

    // Return the result as a string
    return to_string(countConnectedStart) + to_string(countConnectedEnd);
}

int main() {
    vector<string> A1 = {"he", "II", "lo", "el"};
    vector<string> A2 = {"ab", "ba", "bq"};
    vector<string> A3 = {"ee", "ea", "eg"};

    cout << solution(A1) << endl; // Output: "1001"
    cout << solution(A2) << endl; // Output: "111"
    cout << solution(A3) << endl; // Output: "110"

    return 0;
}
