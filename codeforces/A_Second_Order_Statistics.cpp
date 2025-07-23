#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr;
    set<int> st;
    while(n--){
        int el; cin >> el;
        if(st.count(el) == 0){
            st.insert(el);
            arr.push_back(el);
        }
    }
    sort(arr.begin(), arr.end());
    if(arr.size() > 1)
        cout << arr[1];    
    else
        cout << "NO";
    return 0;
}