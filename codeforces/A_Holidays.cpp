#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a = 2 * (n/7);
    int d = a + (n % 7 == 6);
    int b = a + min(n % 7,2);
    cout << d << ' ' << min(b, n);
    return 0;
}