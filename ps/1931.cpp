#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count = 0;
    pair<int, int> meeting[100010];

    

    cin >> count; 
    for (int i = 0; i < count; i++)
    {
        cin >> meeting[i].first >> meeting[i].second;
    }

    sort(meeting, meeting + count, [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
        });

    int lastEnd = 0;
    int meetingCount = 0;

    for (int i = 0; i < count; i++)
    {
        if (meeting[i].first >= lastEnd)
        {
            lastEnd = meeting[i].second;
            meetingCount++;
        }
    }

    // print 
    cout << meetingCount;

    



}
