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
    
    freopen ("lepus.in", "r", stdin);
    freopen ("lepus.out", "w", stdout);

	int n,dp[1001];
	char ch[10001];

	cin >> n;
	  
	  for (int i = 1; i <= n; i++){
	  	  cin >> ch[i];
	  	  dp[i] = -2147483647;
	  	 
	  }	  

	 

	   dp[1] = 0;
	  // cout << dp[n] << endl;
	    for (int i = 1; i <= n; i++ ) {
	     	 
	     	// cout << ch[i] << " ";

	     	  if (ch[i] == 'w') 
	     	  	  continue;
	     	  
	     	  else if (ch[i] == '"') {
	     	  	   dp[i + 1] = max (dp[i + 1], dp[i] + 1);	
	     	  	   dp[i + 3] = max (dp[i + 3], dp[i] + 1);	
	     	  	   dp[i + 5] = max (dp[i + 5], dp[i] + 1);	

	     	  	 //  cout << dp[i + 1] << " " << dp[i + 3] << " " << dp[i + 5] << endl;
	     	}
	     	  else{  
	     	  	   dp[i + 1] = max (dp[i + 1], dp[i]);	
	     	  	   dp[i + 3] = max (dp[i + 3], dp[i]);	
	     	  	   dp[i + 5] = max (dp[i + 5], dp[i]);	
	     		
	     	//	 cout << dp[i + 1] << " " << dp[i + 3] << " " << dp[i + 5] << endl;	
	     	} 

	     }	
	     if (dp[n] >= 0)
	     	  cout << dp[n] ,exit(0);

	     cout << -1;	
}
close