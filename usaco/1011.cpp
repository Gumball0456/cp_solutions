#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int check(int x1, int y1, int x2, int y2, int x3, int y3){
	int l = 0; int h = 0;
	if(x1 == x2)
		l = abs(y1 - y2);
	if(x1 == x3)
		l = abs(y1 - y3);
	if(x2 == x3)
		l = abs(y2 - y3);
	if(y1 == y2)
		h = abs(x1 - x2);
	if(y1 == y3)
		h = abs(x1 - x3);
	if(y2 == y3)
		h = abs(x2 - x3);
	return l * h;
}

int main(){
	freopen("triangles.in", "r", stdin);
	freopen("triangles.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
	int pts[n][2];
	for(int i = 0; i < n; i++)
		cin >> pts[i][0] >> pts[i][1];
	int ans = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				int area = check(pts[i][0], pts[i][1], pts[j][0], pts[j][1], pts[k][0],pts[k][1]);
				ans = max(ans, area);
			}
		}
	}
	cout << ans << '\n';
}
