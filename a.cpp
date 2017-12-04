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
// ////////////////////////////////////////////////////////////////////
int c[200][200];
int d[200][200];
bool used[200];
int p[200];
int main(){
    freopen("floyd.in", "r", stdin);
    freopen ("floyd.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
    	for (int j = 1; j <= n; ++j)
    	   scanf("%d", &d[i][j]);
    }
    for (int k=1; k<=n; ++k)
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=n; ++j)
            d[i][j] = min (d[i][j], d[i][k] + d[k][j]);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
    
}