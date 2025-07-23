#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    vector<ll> f, s;
    ll sf = 0, ss = 0, l = 0;
    while(n--){
        cin >> l; 
        if(l < 0) s.push_back(abs(l)), ss += abs(l);
        else f.push_back(l), sf += l;
    }
    if(ss > sf) cout << "second";
    else if(sf > ss) cout << "first";
    else{
        string winner = "";
        for(int i = 0; i < s.size() && i < f.size(); i++){
            if(s[i] != f[i]){
                winner = s[i] > f[i] ? "second" : "first";
                break;
            }
        }
        if(winner != "") cout << winner;
        else if(l > 0) cout << "first";
        else cout << "second";
    }
    return 0;
}