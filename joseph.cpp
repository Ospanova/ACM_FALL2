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
int joseph (int n, int k) {
    if (n == 1) {
        return 1;
    }
    else return ( joseph (n-1, k) + k - 1 ) % n + 1;
  
 
}
 
int main(){
freopen ("joseph.in","r",stdin);
freopen ("joseph.out","w",stdout);
    int n, k;
    cin >> n >> k;
    cout << joseph (n, k)  << endl;
    return 0;    
}
