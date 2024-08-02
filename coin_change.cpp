#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

struct Node {
    int key;
    Node* left;
    Node* right;
};

void printTree(Node* root, int depth = 0) {
    if (root == nullptr) {
        return;
    }
    printTree(root->right, depth + 1);
    cout << string(depth * 4, ' ') << "L:" << root->key << endl;
    printTree(root->left, depth + 1);
}

void optimalBST(int n, vector<int>& keys, vector<double>& p, vector<double>& q) {
    vector<vector<double>> w(n + 2, vector<double>(n + 1, 0.0));
    vector<vector<int>> root(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n + 1; ++i) {
        w[i][i - 1] = q[i - 1];
    }

    for (int len = 1; len <= n; ++len) {
        for (int i = 1; i <= n - len + 1; ++i) {
            int j = i + len - 1;
            w[i][j] = INF;
            double sum = q[j];
            for (int r = i; r <= j; ++r) {
                sum += p[r] + q[r];
            }
            for (int r = i; r <= j; ++r) {
                double temp = w[i][r - 1] + w[r + 1][j] + sum;
                if (temp < w[i][j]) {
                    w[i][j] = temp;
                    root[i][j] = r;
                }
            }
        }
    }

    Node* rootPtr = nullptr;
    for (int i = 1; i <= n; ++i) {
        if (root[1][n] == i) {
            rootPtr = new Node{keys[i - 1], nullptr, nullptr};
        }
    }

    cout << "Optimal Binary Search Tree:" << endl;
    printTree(rootPtr);
    cout << "Cost = " << w[1][n] << endl;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> keys(n);
    vector<double> p(n);
    vector<double> q(n + 1);

    for (int i = 0; i < n; ++i) {
        cout << "Key " << i + 1 << ": ";
        cin >> keys[i] >> p[i];
    }

    for (int i = 0; i <= n; ++i) {
        cout << "D" << i << " (" << (i == 0 ? "<" : (i == n ? ">" : to_string(keys[i - 1]) + "-" + to_string(keys[i])) ) << "): ";
        cin >> q[i];
    }

    optimalBST(n, keys, p, q);

    return 0;
}
