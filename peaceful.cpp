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
#define all(x) (x).begin(),(x).end()
#define vi vector <int>
#define pb push_back
#define mp make_pair
#define ll long long        
#define sc scanf
#define pf printf    
#define f first
#define s second

   
   
const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// ///////////////////////////////////////////////////////////////////// 	

ll n;
ll dp[2200][2200];
int main(){  
	freopen("peacefulsets.in", "r", stdin);
	freopen("peacefulsets.out", "w", stdout);
	cin >> n;
	for(int i = 0; i <= n; ++i){
		dp[0][i] = 1;
	}
	for(int s = 1; s <= n; ++s)
		for(int mx = 1; mx <= n; ++mx){
			if(mx <= s) dp[s][mx] = dp[s - mx][mx/2];
			dp[s][mx] += dp[s][mx - 1];
		}
	cout << dp[n][n] << endl;
	return 0;
}