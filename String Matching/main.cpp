#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (j < m && a[i] == b[j])
            {
                j++;
            }
        }
        if (j == m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}