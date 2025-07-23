#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string n; cin >> n;
    int counter = 0;
    for(char dig: n)if(dig == '7' || dig == '4') counter++;
    if(counter == 0){
        cout << "NO";
        return 0;
    }
    while(counter > 0){
        int dig = counter % 10;
        if(dig != 7 and dig != 4){
            cout << "NO";
            return 0;
        }
        counter /= 10;
    } 
    cout << "YES";
    return 0;
}