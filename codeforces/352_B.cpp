#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MAXN = 1002;
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int freq[MAXN];
        for(int i = 0; i < MAXN; i++) freq[i] = i;
        int arr[n];
        vector<int> b;
        for(int &el: arr) cin >> el;
        sort(arr, arr + n, greater<int>());
        int curr = 0;
        for(int el: arr){
            if(b.size() > 0 && b[curr] != freq[el]){
                b.push_back(freq[el]);
                freq[el]++;
                for(int j = el + 1; j < MAXN; j++) freq[j] = max(freq[j], freq[j-1]);
                sort(b.begin(), b.end(), greater<int>());
            }else{
                freq[curr] -= 1;
                for(int j = el + 1; j < MAXN; j++) freq[j] = min(freq[j], freq[j-1]);
                curr++;
            }
        }
        if(curr > n / 2) cout << "Yes";
        else cout << "No";
        cout << '\n';
    }
    return 0;
}