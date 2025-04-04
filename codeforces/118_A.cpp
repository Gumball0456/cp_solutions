#include <bits/stdc++.h>
     
using ll = long long;
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s; cin >> s;
    set<char> vowels = {'a', 'o', 'y', 'e', 'u', 'i'};
    string ans;
    int vowels_count = 0;
    for(char &ch: s)
        if(vowels.count(tolower(ch)) == 0){
            ans += '.';
            ans += tolower(ch);
        }
    cout << ans;
}