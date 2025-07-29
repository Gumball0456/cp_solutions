#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int a,b,c,d; cin >> a >> b >> c >> d;
    int mp,vp, p, t;
    p = a;
    t = c;
    mp = max((3 * p)/10, p - (p/250) * t);
    p = b;
    t = d;
    vp = max((3 * p)/10, p - (p/250) * t);
    if(mp > vp) cout << "Misha";
    else if(vp > mp) cout << "Vasya";
    else cout << "Tie";
    return 0;
}