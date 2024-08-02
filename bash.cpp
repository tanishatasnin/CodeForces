#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point {
    double x, y;
};

bool comX(const Point& a, const Point& b) {
    return a.x < b.x;
}

bool comY(const Point& a, const Point& b) {
    return a.y < b.y;
}

double dist(const Point& p1, const Point& p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

double bruteForce(vector<Point>& points, int left, int right) {
    double minDist = TMP_MAX;
    for (int i = left; i < right; ++i) {
        for (int j = i + 1; j < right; ++j) {
            minDist = min(minDist, dist(points[i], points[j]));
        }
    }
    return minDist;
}

double closestPairUtil(vector<Point>& points, int left, int right) {
    if (right - left <= 3) {
        return bruteForce(points, left, right);
    }

    int mid = (left + right) / 2;
    Point midPoint = points[mid];

    double leftMin = closestPairUtil(points, left, mid);
    double rightMin = closestPairUtil(points, mid, right);
    double minDist = min(leftMin, rightMin);

    vector<Point> strip;
    for (int i = left; i < right; i++) {
        if (abs(points[i].x - midPoint.x) < minDist) {
            strip.push_back(points[i]);
        }
    }

    sort(strip.begin(), strip.end(), comY);

    for (int i = 0; i < strip.size(); i++) {
        for (int j = i + 1; j < strip.size() && (strip[j].y - strip[i].y) < minDist; j++) {
            minDist = min(minDist, dist(strip[i], strip[j]));
        }
    }

    return minDist;
}



int main() {
    int n;
    cin >> n;
    vector<Point> points(n);

    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;

    }
 sort(points.begin(), points.end(), comX);

    double closestDistance = closestPairUtil(points, 0, n - 1);
    cout << "The closest pair is point (" << points[0].x << "," << points[0].y
         << ") and point (" << points[1].x << "," << points[1].y << ")\n";
    cout << "Their distance is " << closestDistance << endl;

    return 0;
}
