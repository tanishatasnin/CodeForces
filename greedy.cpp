#include <bits/stdc++.h>
using namespace std;

struct item
{
    static int count;

    int item_no;
    double weight;
    double value;
    double taken;

    item(double w, double v)
    {
        item_no = ++count;

        weight = w;
        value = v;
        taken = 0;
    }

    double get_value_per_unit()
    {
        return value / weight;
    }

    double get_taken_value()
    {
        return taken * get_value_per_unit();
    }
};

int item::count = 0;

bool item_compare(item &a, item &b)
{
    return a.get_value_per_unit() > b.get_value_per_unit();
}

int main()
{
    int n;
    double w, v, capacity, sum = 0;
    vector<item> items;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> w >> v;
        items.push_back(item(w, v));
    }
    cin >> capacity;

    sort(items.begin(), items.end(), item_compare);
    for(int i = 0; i < n; i++)
    {
        if(capacity <= items[i].weight)
        {
            items[i].taken = capacity;
            capacity = 0;
            sum += items[i].get_taken_value();
            break;
        }
        else
        {
            items[i].taken = items[i].weight;
            capacity -= items[i].weight;
            sum += items[i].get_taken_value();
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(items[i].taken > 0)
        {
            cout << "Item " << items[i].item_no << ": " << items[i].taken << " kg " << items[i].get_taken_value() << " taka" << endl;
        }
    }
    cout << "Profit: " << sum << " taka" << endl;

    return 0;
}
