#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    int tc = 1;
    cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int &el: a) cin >> el;
        pair<int,int> ans = {0,0};
        int best = 0;
        for(int i = 0; i < n; i++){
            int inv = 0;
            int grtr = 0;
            for(int j = i + 1; j < n; j++){
                if(a[j] < a[i]) inv++;
                if(a[j] > a[i]) grtr++;
                if(best < (inv - grtr)){
                    ans.first = i;
                    ans.second = j;
                    best = inv - grtr;
                }
            }
        }
        cout << ans.first + 1 << ' ' << ans.second + 1<< '\n';
    }
}