
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
vector <int > v;
int n, k;
bool sochetania(std::vector< int> & v, int n) {
	int k = v.size();
	for (int i = k - 1 ; i>= 0; --i) 
		if (v[i] < n - k + 1+ i){
			v[i]++;
			for (int j = i + 1; j < k ; ++j) 
				v[j] = v[j - 1]++;
			
			return true;
		}
		
	
	return false;
}

int main () {
	
	cin >> n >> k;
	for (int i = 1; i <= k; ++i) {
		v.pb(i);
	}
	while (sochetania(v, n)) {
		for (int i = 0; i < k; ++i) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
}