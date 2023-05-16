#include <bits/stdc++.h>

using namespace std;

const int N = 105;
const int M = 1e5+5;
int coin[N];
int dp[N][M];

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin >> n;

	for(int i = 0; i < n; i++) 
    { 
        cin >> coin[i]; 
    }

	dp[0][0] = 1;

	for(int i = 1; i <= n; i++) 
    {
		for(int j = 0; j <= M; j++) 
        {
			dp[i][j] = dp[i - 1][j];
            int k=j-coin[i-1];
			if(k >= 0 && dp[i-1][k]) 
            {
				dp[i][j] = 1;
			}
		}
	}

	vector<int> possible;
	for(int i = 1; i <M; i++) 
    {
		if(dp[n][i]) 
        { 
            possible.push_back(i); 
        }
	}

	cout<<possible.size()<<'\n';

	for(int sum : possible) 
    { 
        cout<<sum << " "; 
    }
	cout << '\n';
}