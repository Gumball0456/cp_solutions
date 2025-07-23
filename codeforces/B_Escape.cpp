#include <bits/stdc++.h>
using namespace std;

int main() {
    int vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;

    if (vd <= vp) {
        cout << 0 << endl;
        return 0;
    }

    double prince_pos = vp * t;
    int count = 0;

    while (prince_pos < c) {
        double time_to_catch = prince_pos / (vd - vp);
        double dragon_pos = time_to_catch * vd;
        prince_pos += time_to_catch * vp;

        if (prince_pos >= c) break;

        count++;
        double return_time = dragon_pos / vd + f;
        prince_pos += return_time * vp;
    }

    cout << count << endl;
    return 0;
}
