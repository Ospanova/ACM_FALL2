#include <functional>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <sstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstdio>
#include <bitset>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <map>
#include <set>
 
using namespace std;
  
#define sz(a) (int)a.size()
#define vi vector <int>
#define pb push_back
#define mp make_pair
#define ll long long         
#define f first
#define s second
  
const int inf = (int)1e9;
const int mod = inf + 7;
const double eps = 1e-9;
const double pi = acos(-1.0);
  
const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// /////////////////////////////////////////////////////////////////////

using namespace std;

int main () {

	freopen ("knight.in", "r", stdin);
	freopen ("knight.out", "w", stdout);
	
	int n,m,dp[100][100];

	memset(dp, 0, sizeof (dp));

	cin >> n >> m;

	dp[1][1] = 1;

		  for (int i = 1; i <= n; i++)
		  	  for (int j = 1; j <= m; j++){
		  	  	  dp[i + 1][j + 2] += dp[i][j];
		  	  	  dp[i + 2][j + 1] += dp[i][j];
		  	  	}
		  	 
		  	 cout << dp[n][m]; 	  
}
close