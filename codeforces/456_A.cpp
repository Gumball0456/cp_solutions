#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<pair<int,int>> pq(n);
    for(pair<int,int> &l: pq)
        cin >> l.first >> l.second;
    sort(pq.begin(), pq.end());
    bool exists = false;
    for(int i = 1; i < pq.size(); i++)
        if(pq[i].first > pq[i-1].first && pq[i].second < pq[i-1].second)
            exists = true;
    if(exists)
        cout << "Happy Alex";
    else   
        cout << "Poor Alex";
}