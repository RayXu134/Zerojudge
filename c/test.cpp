#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        if (n >= 45) {
            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;
            }
            cout << "YES\n";
            continue;
        }

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        bool ok = false;
        for (int i = 0; i + 2 < n; i++) {
            if (a[i] + a[i + 1] > a[i + 2]) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
}
