#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	while(getline(cin, s)){
		bool up = true;
		for(char &c: s){
			if(up) cout << (char)toupper(c);
			else cout << (char)tolower(c);
			if(!isspace(c))
				up = !up;
		}
		cout << '\n';
	}
}
