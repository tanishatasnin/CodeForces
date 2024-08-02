#include <iomanip>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
struct Node {
    int key;
    double prob;
    Node* left;
    Node* right;
};

Node* createNode(int key, double prob) {
    Node* newNode = new Node;
    newNode->key = key;
    newNode->prob = prob;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

double optimalBST(int n, const vector<int>& keys, const vector<double>& probs, const vector<double>& dummyProbs) {
    vector<vector<double>> w(n + 2, vector<double>(n + 1, 0.0));
    vector<vector<int>> root(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n + 1; ++i) {
        w[i][i - 1] = dummyProbs[i - 1];
    }

    for (int len = 1; len <= n; ++len) {
        for (int i = 1; i <= n - len + 1; ++i) {
            int j = i + len - 1;
            w[i][j] = numeric_limits<double>::infinity();
            double sum = dummyProbs[i - 1];
            for (int r = i; r <= j; ++r) {
                sum += probs[r - 1];
                double cost = w[i][r - 1] + w[r + 1][j] + sum;
                if (cost < w[i][j]) {
                    w[i][j] = cost;
                    root[i][j] = r;
                }
            }
        }
    }

    Node* rootPtr = buildOptimalBST(keys, probs, dummyProbs, 1, n, root);
    linearRepresentation(rootPtr);

    return w[1][n];
}

Node* buildOptimalBST(const vector<int>& keys, const vector<double>& probs, const vector<double>& dummyProbs,
                      int i, int j, const vector<vector<int>>& root) {
    if (i > j) {
        return nullptr;
    }

    int r = root[i][j];
    Node* rootPtr = createNode(keys[r - 1], probs[r - 1]);
    rootPtr->left = buildOptimalBST(keys, probs, dummyProbs, i, r - 1, root);
    rootPtr->right = buildOptimalBST(keys, probs, dummyProbs, r + 1, j, root);

    return rootPtr;
}

void linearRepresentation(Node* root, int depth = 0, char direction = 'R') {
    if (root) {
        cout << root->key << endl;
        if (root->left || root->right) {
            cout << string(depth, ' ') << direction << ':';
            linearRepresentation(root->left, depth + 1, 'L');
            linearRepresentation(root->right, depth + 1, 'R');
        }
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> keys(n);
    vector<double> probs(n);
    vector<double> dummyProbs(n + 1);

    for (int i = 0; i < n; ++i) {
        cout << "Key " << i + 1 << ": ";
        cin >> keys[i] >> probs[i];
    }

    for (int i = 0; i <= n; ++i) {
        cout << "D" << i << " (" << (i == 0 ? "<" : (i == n ? ">" : (to_string(keys[i - 1]) + "-" + to_string(keys[i])))) << "): ";
        cin >> dummyProbs[i];
    }

    double cost = optimalBST(n, keys, probs, dummyProbs);
    cout << "\nCost = " << cost << endl;

    return 0;
}
