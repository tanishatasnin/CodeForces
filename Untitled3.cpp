#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    string name;
    int value;
    int weight;

    Item(string n, int v, int w) : name(n), value(v), weight(w) {}
};

bool compare(Item a, Item b) {
    return (static_cast<double>(a.value) / a.weight) > (static_cast<double>(b.value) / b.weight);
}

void thievesInWarehouse(vector<Item>& items, vector<int>& capacities) {
    int thieves = 0;
    int n = items.size();
    sort(items.begin(), items.end(), compare);

    for (int i = 0; i < capacities.size(); ++i) {
        int capacity = capacities[i];
        int totalValue = 0;

        cout << "Thief " << i + 1 << " stealing process:" << endl;
        for (int j = 0; j < n && capacity > 0; ++j) {
            if (items[j].weight <= capacity) {
                totalValue += items[j].value;
                capacity -= items[j].weight;

                cout << "Taking " << items[j].name << ": " << items[j].weight << " kg " << items[j].value << " taka" << endl;
            } else {
                double fraction = static_cast<double>(capacity) / items[j].weight;
                totalValue += fraction * items[j].value;
                cout << "Taking " << items[j].name << ": " << fraction * items[j].weight << " kg "
                     << fraction * items[j].value << " taka" << endl;
                capacity = 0;
            }
        }

        cout << "Thief " << i + 1 << " profit: " << totalValue << " taka" << endl;
        if (totalValue > 0) {
            thieves++;
        }
    }

    cout << "Total " << thieves << " thieves stole from the warehouse." << endl;

    cout << "Still following items are left" << endl;
    for (const auto& item : items) {
        if (item.value > 0) {
            cout << item.name << " " << item.weight << " kg " << item.value << " taka" << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    vector<Item> items;
    cout << "Enter name, value, and weight for each item:" << endl;
    for (int i = 0; i < n; ++i) {
        string name;
        int v, w;
        cin >> name >> v >> w;
        items.emplace_back(name, v, w);
    }

    int k;
    cout << "Enter the number of thieves: ";
    cin >> k;

    vector<int> capacities(k);
    cout << "Enter the knapsack capacity for each thief:" << endl;
    for (int i = 0; i < k; ++i) {
        cin >> capacities[i];
    }

    // Solving thieves in warehouse problem
    thievesInWarehouse(items, capacities);

    return 0;
}
