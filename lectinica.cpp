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
	#define sc scanf
	#define pf printf    
	#define f first
	#define s second
	const int inf = (int)1e9;
	const int mod = inf + 7;
	const double eps = 1e-9;
	const double pi = acos(-1.0);
	int a[110];
	int d[110];
	string s;
	int main(){
		freopen ("ladder.in","r",stdin);
		freopen ("ladder.out","w",stdout);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
    	cin >> a[i];
    }
    d[1] = a[1];
    d[2] = max(a[1] + a[2], a[2]);
    //cout << d[2] << endl;
    for (int i = 3; i <= n ; ++i) {
    	d[i] = max(d[i - 2]  + a[i], d[i-1] + a[i]);
    	//cout << d[i] << endl;

    }
    cout << d[n] << endl;
    return 0;
			
	}   