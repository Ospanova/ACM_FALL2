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
vector <int> g[10010],g1[10010];
std::vector<int> tp, path;
bool used[10010], usedtp[10010];

void dfs(int v) {
	//cout << "in" << " " << v  << endl;

	used[v] = true;
	for (int i = 0; i < g[v].size(); ++i ){
		int to = g[v][i];
		if (! used[to]){
			//cnt++;
			dfs(to);
		}
	}
	//cout << "out" << " " << v  << endl;
	
	tp.pb(v);
}
int main () {
 freopen ("longpath.in", "r", stdin);
    freopen ("longpath.out", "w", stdout);

	int n, m;
	cin >> n >> m;
	int max_ = -11111;
	for (int i = 0, a, b; i < m; ++i) {
		cin  >> a  >> b;
		g[a].pb(b);
		//g1[b].pb(a);
	}
	for (int i = 1; i <= n; ++i) {
		if (!used[i]){
		dfs(i);
		}
		d[i] = 0;
	}	
	//reverse (tp.begin(), tp.end());
	for (int i = 0; i <n; ++i) {
		
		for (int j = 0; j < g[tp[i]].size();++j) {
			//if (usedtp[g1[tp[i]][j]]){
				//cout << j << " ";

			d[tp[i]] = max(d[tp[i]], d[g[tp[i]][j]] + 1);

			//max_ = max(max_, d[tp[i]]);
		//}

		}
		//cout << d[tp[i]]  << " " << tp[i] << endl;
	}
	for (int i = 1; i <= n; ++i) {
		max_ = max(max_, d[i]);
	}
	cout << max_ << endl;
}