#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    n--;
    int arr[n];
    for(int &el: arr) cin >> el;
    for(int i = 0; i < n; i++){
        int s = 0;
        for(int j = i; j < n; j++){
            s += arr[j];
            cout << s << ' ';
        }
        cout << '\n';
    }
    return 0;
}