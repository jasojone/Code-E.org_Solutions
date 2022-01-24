#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    array<int, 2> directionalArr[8] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '.')
            {
                v[i][j] = '0';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '0')
            {
                for (int k = 0; k < 8; k++)
                {
                    int new_i = i + directionalArr[k][0];
                    int new_j = j + directionalArr[k][1];
                    // int count = 0;
                    if (new_i >= 0 && new_j >= 0 && new_i < n && new_j < m)
                    {
                        if (v[new_i][new_j] == '*')
                        {
                            // count++;
                            v[i][j]++;
                        }
                    }
                    // v[i][j] = count;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}

