#include <bits/stdc++.h>

using namespace std;

int main(){
    string d[] = {"O-|-OOOO", "O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-","-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};
    string n; cin >> n;
    for(int i = n.size() - 1; i > -1; i--) cout << d[n[i] - '0'] << '\n';
    return 0;
}