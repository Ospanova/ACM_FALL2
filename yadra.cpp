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
string s;
int n;
int a[510], a1[510];
int d[300011];
int main () {
	//freopen ("balls.in", "r", stdin);
    //freopen ("balls.out", "w", stdout);

	a[0] = 1;
	a1[0] = 1;
	for (int i = 1; i <= 300; ++i) {
		a1[i] = a1[i- 1] + i + 1;
		//cout << i  << " "<< a1[i] << endl;
	}
	for (int i = 1; i <= 300; ++i) {
		a[i] = (a[i -  1]) + a1[i];
		//cout << i  << " "<< a[i] << endl;
	}
	for (int i = 0; i < 300010; ++i) {
		d[i] = inf;
	}
	d[0] =0;
	d[1] = 1;
	for (int i = 2; i < 300010; ++i) {
		for (int j = 0; j <= 300; ++j) {
			if(i-a[j]>= 0)
			d[i] = min(d[i], d[i-a[j]]+1); 
			
		}
		//cout << i  << " "<< d[i] << endl;
	}
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		cout << d[n] << endl;
	}
}