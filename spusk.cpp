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
int a[100][100];
int main () {
// freopen ("longpath.in", "r", stdin);
// freopen ("longpath.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 0; i < n ; ++i) {
		for (int j = 0; j < i + 1; ++j){

			cin >> a[i][j];
			//cout << a[i][j] << endl;
		}
		//cout << i << endl; 
	}
	for (int i = n - 2; i >= 0; i--) {
		for (int j = 0; j < i + 1; ++j) {
			a[i][j] += max(a[i + 1][j], a[i + 1][j + 1]);
		}
	}
	cout << a[0][0] << endl;
}