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
int a[333];
bool dp[30000010];     
using namespace std;
 
int main(){
    int N, s;
    cin >> s >> N;
    int sum = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    dp[0] = true;
    for (int i = 0; i < N; i++)
        for (int j = sum; j >= a[i]; j--)
            dp[j] = dp[j-a[i]]||dp[j];
 
    while(!dp[s]) s--;

    cout << s;
    return 0;
}