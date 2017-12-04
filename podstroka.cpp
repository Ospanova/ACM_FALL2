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

	int n, a[50][4];

	 cin >> n;
	   if (n == 0)
	   	  cout << 1, exit(0);

	   a[1][1] = 1;
	   a[1][2] = 1;
	   a[1][3] = 1;

	       for (int i = 2; i <= n; i++){
	       	    a[i][1] = a[i - 1][1] + a[i - 1][3];
	       	    a[i][2] = a[i - 1][1] + a[i - 1][3] + a[i - 1][2];
	       	    a[i][3] = a[i - 1][1] + a[i - 1][2] + a[i - 1][3];
	       }

	     cout << a[n][1] + a[n][2] + a[n][3];

}
close