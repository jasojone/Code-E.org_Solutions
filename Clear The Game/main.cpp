#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const ll INF = 1e18;
const ll mod = 1e9+7;


using namespace std;

int main(){
	int n, x, k;
	cin >> n >> x >> k;
    int lvl[n], cost[n];

	for(int i = 0; i < n; i++)
	{
	    cin >> lvl[i];
	}
	for(int i = 0; i < n; i++)
	{
	    cin >> cost[i];
	}
	priority_queue<int, vector<int>, greater<int>> pq;
	ll ans = 0;
	
	for(int i = 0; i < n; i++)
	{
	    pq.push(cost[i]);
	    while(x < lvl[i])
	    {
	        if(!pq.empty())
	        {
	            x += k;
	            ans += pq.top();
	            pq.pop();
	        }
	        else
	        {
	            cout << "-1\n";
	            return 0;
	        }
	    }
	}
	cout << ans << "\n";

	