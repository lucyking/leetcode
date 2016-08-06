#include <iostream>
#include <vector>

using namespace std;

int main() {
    int min = INT32_MAX, n, m, tmp;
    int i = 0;
    vector<int> a, b;

    cin >> m;
    n = m;
    while (n--) {
        cin >> tmp;
        a.push_back(tmp);
    }
    i = 0;
    n = m;
    while (n--) {
        cin >> tmp;
        b.push_back(tmp);
    }

    int s = 0;
    for (i = 0; i < m; i++) {
        s = a[i] + b[i];
        if (s < min) {
            min = s;
        }
    }
    cout << min - 2 << endl;

}

