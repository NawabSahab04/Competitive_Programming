#include <bits/stdc++.h>
using namespace std;
#define int long long
#define forn(i, a, n) for(int i = a; i < n; i++) 
#define endl "\n"

int32_t main()
{
    int n;
    cin >> n;
    vector<pair<string, pair<int, int>>> v;
    forn(i, 0, n)
    {
        string s;
        int x, y;
        cin >> s >> x >> y;
        v.push_back(make_pair(s, make_pair(x, y)));
    }
    int index;
    pair<int, int> start;
    pair<int, int> end;
    forn(i, 1, n)
    {
        /*if (v[n-1].first=="none")
        {
            index = n-1;
            start.first = v[n-1].second.first;
            start.second = v[n-1].second.second;
            break;
        }*/
        if (v[i].first != "none" && v[i - 1].first == "none") //would give wrong ans if none is last entry
        {
            index = i - 1;
            start.first = v[i - 1].second.first;
            start.second = v[i - 1].second.second;
            break;
        }
    }
    for (int i = index; i >= 0; i--)
    {
        if (v[i].first == "none")
        {
            start.first = max(v[i].second.first, start.first);
            start.second = min(v[i].second.second, start.second);
        }
        else if (v[i].first == "on")
        {
            start.first -= v[i].second.second;
            start.second -= v[i].second.first;
        }
        else
        {
            start.first += v[i].second.first;
            start.second += v[i].second.second;
        }
    }
    cout << start.first << ' ' << start.second << endl;

    for (int i = n-1; i>0; i--)
    {
        if (v[i].first == "none" && v[i - 1].first != "none") //would give wrong ans if none is the first entry
        {
            index = i;
            end.first = v[i].second.first;
            end.second = v[i].second.second;
            break;
        }
    }
    forn(i,index,n)
    {
        if (v[i].first == "none")
        {
            end.first = max(v[i].second.first, end.first);
            end.second = min(v[i].second.second, end.second);
        }
        else if (v[i].first == "on")
        {
            end.first += v[i].second.first;
            end.second += v[i].second.second;
        }
        else
        {
            end.first -= v[i].second.second;
            end.second -= v[i].second.first;
        }
    }
    cout << end.first << ' ' << end.second << endl;
    
}
