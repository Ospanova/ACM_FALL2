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
int a[10];
int main(){
    freopen ("perm.in","r",stdin);
    freopen ("perm.out","w",stdout);
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        a[i] = i + 1;
    }
    do {
        for (int i = 0; i < n; ++i) 
        cout << a[i] << " ";
        cout << endl;
    }
    while ( std::next_permutation(a,a + n) );

                                                                             	
}
close