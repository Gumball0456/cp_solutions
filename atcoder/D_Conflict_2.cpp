#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, q; cin >> n >> q;
    string server, pc[n + 1];
    tuple<int,int, string> arr[q];
    for(auto &t: arr){
        cin >> get<0>(t) >> get<1>(t);
        if(get<0>(t) == 2) cin >> get<2>(t);
    }
    reverse(arr, arr + q);
    int l = 0;
    stack<tuple<int,int, string>> st;
    for(auto &t: arr){
        if(l == 0 && get<0>(t) != 3) continue;
        if(l != 0 && get<1>(t) != l) continue;

        if(get<0>(t) == 1) l = 0;
        else if(get<0>(t) == 2) l = l;
        else l = get<1>(t);
        st.push(t);
    }
    while(!st.empty()){
        auto t = st.top();
        st.pop();
        if(get<0>(t) == 1) pc[get<1>(t)] = server;
        else if(get<0>(t) == 2) pc[get<1>(t)] += get<2>(t);
        else server = pc[get<1>(t)];
    }
    cout << server;
    return 0;
}