#include <bits/stdc++.h>
using namespace std;

int main(){
    map <string,int>m;
    m["Tetrahedron"]=4;
    m["Cube"]=6;
    m["Octahedron"]=8;
    m["Dodecahedron"]=12;
    m["Icosahedron"]=20;
    int n,r=0; cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;cin>>s;
        r += m[s];
    }
    cout << r;
    
    return 0;
}