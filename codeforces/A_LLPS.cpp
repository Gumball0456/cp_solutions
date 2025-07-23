#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPalindrome(string s){
    int l = 0, r = (int) s.size() - 1;
    while(l < r)
        if(s[l++] != s[r--]) return false;
    return true;
}

int main(){ 
    string s; cin >> s;
    int n = (int) s.size();
    string ans;
    for(int i = 0; i < (1 << n); i++){
        string curr;
        for(int j = 0; j < n; j++)
            if(i & (1 << j)) curr += s[j];
        if(curr > ans && isPalindrome(curr)) ans = curr;
    }
    cout << ans;
    return 0;
}