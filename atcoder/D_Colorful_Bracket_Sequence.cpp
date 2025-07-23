#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    vector<char> p;
    bool b = true;
    for(char &ch: s){
        if(p.empty() && (ch == ')' || ch == ']' || ch == '>')){
            b = false;
            break;
        }
        if(ch == '('  || ch == '<' || ch == '['){
            p.push_back(ch);
            continue;
        }
        if((ch == ')' && p.back() != '(') || (ch == '>' && p.back() != '<') || (ch == ']' && p.back() != '[')){
            b = false;
            break;
        }
        p.pop_back();
    }
    if(!b || !p.empty()) cout << "No";
    else cout << "Yes";

    return 0;
}