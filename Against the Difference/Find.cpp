#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        unordered_map<int,int> freq;

        for ( auto i : a )
            freq[i]++;
        for ( auto i : freq) 
            cout << i.first << " : " << i.second << endl;
    

    }
}
/*
we can test with this input:
1
5
1 2 2 3 3
*/