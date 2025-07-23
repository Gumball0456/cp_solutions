#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int a,b; cin >> a >> b;
    int p1,p2;
    p1 = p2 = 0;
    for(int i = 1; i < 7; i++){
        if(abs(i-a) < abs(i-b)) p1++;
        else if(abs(i-a) > abs(i-b)) p2++;
    }
    cout << p1 << ' ' << 6 - p1 - p2 << ' ' << p2;
    return 0;
}