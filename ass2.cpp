#include <bits/stdc++.h>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

int maze[ROWS][COLS] = {
    0, 1, 2, 0, 0,
    0, 0, 0, 1, 0,
    0, 3, 1, 0, 0,
    0, 1, 0, 1, 0,
    0, 0, 0, 0, 0
};

int visited[ROWS][COLS] = {0};

struct Point {
    int x, y;
};
void printPath(Point path[], int length);
bool pathContainsTreasure(Point path[], int length);
bool valid(int x, int y);
void findPathWithTreasure(int x, int y, Point path[], int length, bool treasureFound = false);


int main() {
    Point path[ROWS * COLS];
    findPathWithTreasure(0, 0, path, 0);
    return 0;
}



/* =========================== */




void printPath(Point path[], int length) {
    cout << endl;
    for (int i = 0; i < length; i++) {
        cout << "(" << path[i].x << "," << path[i].y << ")";
    }
    cout << endl;
}

bool pathContainsTreasure(Point path[], int length) {
    for (int i = 0; i < length; i++) {
        if (maze[path[i].x][path[i].y] == 3) {
            return true;
        }
    }
    return false;
}

bool valid(int x, int y) {
    if (x < 0 || x >= ROWS || y < 0 || y >= COLS) return false;
    if (maze[x][y] == 1) return false;
    if (visited[x][y] == 1) return false;
    return true;
}

void findPathWithTreasure(int x, int y, Point path[], int length, bool treasureFound) {
    if (!valid(x, y)) return;
    path[length++] = {x, y};

    if (maze[x][y] == 2) {
        if (pathContainsTreasure(path, length)) {
            printPath(path, length);
        }
        return;
    }

    if (maze[x][y] == 3) {
        treasureFound = true;
    }

    visited[x][y] = 1;
    findPathWithTreasure(x + 1, y, path, length, treasureFound);
    findPathWithTreasure(x - 1, y, path, length, treasureFound);
    findPathWithTreasure(x, y + 1, path, length, treasureFound);
    findPathWithTreasure(x, y - 1, path, length, treasureFound);
    visited[x][y] = 0;
}


