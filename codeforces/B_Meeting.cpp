#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int x1, x2, y1, y2; cin >> x1 >> y1 >> x2 >> y2;
    int r = max(x1,x2), l = min(x1,x2), b = min(y1,y2), t = max(y1,y2);
    int n; cin >> n;
    int rads[n][3];

    for(int i = 0; i < n; i++)
        cin >> rads[i][0] >> rads[i][1] >> rads[i][2];

    int ans = 0;
    for(int i = l; i <= r; i++){
        int step = (i == r || i == l ? 1 : t - b);
        for(int j = b; j <= t; j+= step){
            int aux = 1;
            for(auto &p: rads){
                int dx = abs(i - p[0]), dy = abs(j-p[1]);
                if( dx * dx + dy * dy <= p[2] * p[2]) {aux = 0; break;}
            }
            ans += aux;
        }
    }
    cout << ans;
    return 0;
}