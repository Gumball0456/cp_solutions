#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int a =0,d = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A')
            a++;
        else if(s[i] == 'D')
            d++;
    }
    if(d>a)
        cout <<"Danik";
    else if(a > d)
        cout <<"Anton";
    else
        cout <<"Friendship";
    return 0;
}