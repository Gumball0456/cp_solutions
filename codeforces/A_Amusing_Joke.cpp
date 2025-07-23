#include<bits/stdc++.h>

using namespace std;
int v[26],x[26];

int main(){
    string s,t,w; cin >>s>>t>>w;
    string u = s+t;
    sort(u.begin(), u.end());
    sort(w.begin(), w.end());
    if(u == w) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}