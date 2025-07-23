#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == 'A'){
            while(i > 0 && s[i-1] == 'W'){
                s[i] = 'C';
                s[i-1] = 'A';
            }
        }
    }
    cout << s;
    return 0;
}