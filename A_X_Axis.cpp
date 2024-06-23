/* g++ -std=c++11 -O2 -Wall A_X_Axis.cpp -o A_X_Axis */
#include <iostream> 
// Important header files 
#include <ext/pb_ds/assoc_container.hpp> // Common file  
#include <ext/pb_ds/tree_policy.hpp>  
#include <functional> // for less  
using namespace __gnu_pbds;
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define si set<int>
#define sll set<long long>
#define REP(i,a,t) for (int i = a; i < t; i++)
#define REPback(i,a,n) for (int i = n; i>=a; i--)


int solve(int x1, int x2, int x3){

    int ans = INT_MAX;
    int maxi = max(x1, max(x2,x3));
    REP(i, 0, maxi+1){
        int curr = abs(x1-i) + abs(x2-i) + abs(x3-i);
        ans = min(ans, curr);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    vi res;
    REP(i, 0, t){
        int x1, x2,x3;
        cin >> x1 >> x2 >> x3;
        int ans = solve(x1,x2,x3);
        res.PB(ans);
    }
    REP(i,0,t){
        cout << res[i] << endl; 
    }
return 0;
}