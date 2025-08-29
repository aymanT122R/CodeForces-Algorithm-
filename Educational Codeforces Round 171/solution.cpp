#include <iostream>
#include <vector>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> switches(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> switches[i];
        }
        int k = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (switches[i] == 1) k++;
        }
        int minOn = (k % 2 == 0) ? 0 : 1;
        int maxOn = min(k, 2 * n - k);
        cout << minOn << " " << maxOn << endl;

    }

    return 0;
}