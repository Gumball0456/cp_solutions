#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    double arr1[n];
    for(auto &a: arr1) cin >> a;

    int m; cin >> m;
    double arr2[m];
    for(auto &a: arr2) cin >> a;
    
    int k; cin >> k;
    double arr3[k];
    for(auto &a: arr3) cin >> a;

    double a, b; cin >> a >> b;
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    sort(arr3, arr3 + k);
    printf("%.12lf", sqrt(b * arr1[n-1] * arr1[n-1] * arr2[m-1]/(arr3[0] * a + arr2[m-1] * b)));
    return 0;
}