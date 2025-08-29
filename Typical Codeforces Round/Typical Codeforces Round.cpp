#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, a, b, c, t, s, score = 0;
    vector <int> ai;
    vector <int> bi;
    vector <int> ci;
    vector <int> ti;
    vector <int> si;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ai.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        bi.push_back(b);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        ci.push_back(c);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cin >> s;
        ti.push_back(t);
        si.push_back(s);
    } 

    for (int i = 0; i < n; i++)
    {
        if (si[i] <= 0)
        {
            score += 0;
        }
        else {
            score += max(ci[i], ai[i] - bi[i] * ti[i] - 50 * (si[i] - 1));
        }
        
    }


    cout << score << endl;

    
}
