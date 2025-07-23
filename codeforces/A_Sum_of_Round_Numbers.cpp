#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc = 0; cin >> tc;
    while(tc--){
        string num, zeroes; cin >> num;
        int nz = 0;
        for(char ch: num) if(ch!= '0')nz++;
        cout << nz <<'\n';
        for(int i = num.size() - 1; i > -1; i--){
            char ch = num[i];
            if(ch != '0') cout << ch + zeroes << ' ';
            zeroes += '0';
        }
        cout << '\n';
    }
    return 0;
}