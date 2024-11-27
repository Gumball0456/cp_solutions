#include <bits/stdc++.h>
using namespace std;


bool check(int col[], int a, int b){
	for(int i = 0; i < 8; i++){
		for(int j = i + 1; j < 8; j++)
			if(col[b] != a || abs(i - j) == abs(col[i] - col[j])) return false;
	}
	return true;
}

int main() {
	int tc = 1;
	cin >> tc;
	while(tc--){
		int a, b; cin >> a >> b;
		int col[] = {1, 2, 3, 4, 5, 6, 7 ,8};
		int count = 1;
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		do {
			// if given permutation does not contains attacking queens 
			// print it
			if(check(col, a, b - 1)){
				printf("%2d      ", count++);
				for(int i = 0 ; i < 8; i++){
					cout << col[i];
					if(i < 7) cout << ' ';
				}
				cout << '\n';
			}
		}while (next_permutation(col, col + 8));
        if(tc) cout << '\n';
	}
}
