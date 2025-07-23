#include <iostream>
#include <vector>
using namespace std;

long long tokens_saved(long long xi, long long a, long long b) {
    long long target_money = (a * xi) / b;
    long long l = 0, r = xi, ans = xi;

    while (l <= r) {
        long long mid = (l + r) / 2;
        if ((a * mid) / b >= target_money) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return xi - ans;
}

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    vector<long long> x(n);

    for (int i = 0; i < n; ++i) cin >> x[i];

    for (int i = 0; i < n; ++i) {
        cout << tokens_saved(x[i], a, b) << " ";
    }

    cout << endl;
    return 0;
}
