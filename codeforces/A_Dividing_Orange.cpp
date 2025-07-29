#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int arr[k]; for(int &el: arr) cin >> el;
    int div[n * k];
    memset(div, -1,sizeof(int) * n * k);
    for (int i = 0; i < k; i ++) div[arr[i] - 1] = i;
    for(int i = 0; i < k; i++){
        int count = 0;
        for(int j = 0; j < n * k && count < n - 1; j++){
            if(div[j] != -1) continue;
            div[j] = i;
            count++;
        }
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n * k; j++){
            if(div[j] == i) cout << j + 1 << ' ';
        }
        cout << '\n';
    }
    return 0;
}