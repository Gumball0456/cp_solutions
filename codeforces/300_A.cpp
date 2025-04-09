#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    vector<int> a[3];
    a[2].push_back(0);
    for(int i = 0; i < n; i++){
        int el; cin >> el;
        if(el > 0) a[1].push_back(el);
        if(el < 0) a[0].push_back(el);
    }
    if(a[1].size() == 0){
        for(int i = 0; i < 2; i++){
            a[1].push_back(a[0].back());
            a[0].pop_back();
        }
    }
    if(a[0].size() % 2 == 0){
        a[2].push_back(a[0].back());
        a[0].pop_back();
    }
    for(auto &v: a){
        cout << v.size() << ' ';
        for(int &e: v) cout << e << ' ';
        cout << '\n';
    }
    return 0;
}