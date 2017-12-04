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
vector <int> g[1100];
bool used[1100];
int lvl[1100];
queue<int> q;
int n, m;
int main(){
    freopen("sumdist.in", "r", stdin);
    freopen ("sumdist.out","w",stdout);
    cin >> n >> m;
    for (int i = 0, x, y; i < m ; ++i) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }   
    for (int i = 1; i <= n; ++i) {
            lvl[i] = -1;
        }
    int cnt = 1;
    int sum = 0;
    while(true){

        if (cnt == n)
            break;
        
        q.push(cnt);
        used[cnt] = true;
        lvl[cnt] = 0;
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int i=0; i<g[v].size(); ++i) {
                int to = g[v][i];
                if (!used[to]) {
                    used[to] = true;
                    q.push (to);
                    lvl[to] = lvl[v] + 1;
                }
            }
        }
        for (int i = 1; i <= n; ++i) {
            //cout << lvl[i] << " ";
            if (i > cnt)
            sum += lvl[i];
            lvl[i] = -1;
            used[i] = false;
        }
        cnt++;
    }
    cout << sum << endl;
}