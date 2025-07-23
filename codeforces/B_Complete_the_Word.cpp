#include <bits/stdc++.h>

using namespace std;

int freq[26];

bool check(){
    bool ans = true;
    for(int &f: freq) if(f > 1) ans = false;
    return ans;
}

int main(){
    string s; cin>> s;
    int l = 0, found = 0;
    deque<int> q;
    for(int r = 0; r < s.size(); r++){
        if(s[r] == '?') q.push_back(r);
        else freq[s[r]-'A']++;

        while(!check()){
            if(s[l] == '?') q.pop_front();
            else freq[s[l]-'A']--;
            l++;
        }
        if(r - l + 1 == 26){
            for(int i = 0; i < 26; i++){
                if(freq[i] == 0){
                    s[q.front()] = (char)(i + 'A');
                    q.pop_front();
                }
            }
            found = 1;
            break;
        }
    }
    if(found){
        for(char &c: s) if(c == '?') c = 'A';
        cout << s;
    }else cout << -1;
    return 0;
}