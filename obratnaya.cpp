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
int p[10], a[10];
int main(){
    freopen ("inverse.in","r",stdin);
    freopen ("inverse.out","w",stdout);
int n;
cin  >> n;
for (int i = 1; i <= n; ++i) {
    cin >> p[i];
}
for (int i = 1; i <= n; ++i) {
    a[p[i]] = i;
}
for (int i = 1; i <= n; ++i) {
    cout << a[i] << " ";
}    
cout << endl;                                                                      	
}