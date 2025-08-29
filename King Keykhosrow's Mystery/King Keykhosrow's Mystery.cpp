#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int m = 0, a, b, t, i = 0;
    vector <int> ai;
    vector <int> bi;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        ai.push_back(a);
        bi.push_back(b);
    }
    
    while (i<t)
    {      
        if (m >= min(ai[i], bi[i]))
        {
            if ((m % ai[i]) == (m % bi[i]))
            {
                cout << m << endl;
                i++;
                m = 0;
            }
            
        } 
        m++;
    }
}

