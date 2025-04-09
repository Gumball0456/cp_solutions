#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    int n; cin >> n;
    set<int> els;
    int el;
    for(int i = 0; i < n; i++) cin >> el, els.insert(el);
    if(els.size() > 3){
        cout << "NO";
        return 0;
    }
    if(els.size() < 3){
        cout << "YES";
        return 0;
    }
    vector<int> aux;
    for(auto &e: els) aux.push_back(e);
    sort(aux.begin(), aux.end());
    cout << (aux.back() - aux[1] == aux[1] - aux.front() ? "YES" : "NO");
    return 0;
}