#include <bits/stdc++.h>
using namespace std;

struct Point {
    double x, y;
};

double polygonArea(const vector<Point>& points) {
    int n = points.size();
    double area = 0.0;


    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        area += points[i].x * points[j].y;
        area -= points[j].x * points[i].y;
    }

    return fabs(area) / 2.0;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    vector<Point> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    double area = polygonArea(points);
    cout.precision(1);
    cout << fixed << area << endl;

    return 0;
}