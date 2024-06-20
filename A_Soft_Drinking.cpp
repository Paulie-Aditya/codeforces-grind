/* g++ -std=c++11 -O2 -Wall A_Soft_Drinking.cpp -o A_Soft_Drinking */
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
#define REP(i,a,t) for (int i = a; i < t; i++)
#define REPback(i,a,n) for (int i = n; i>=a; i--)


int solve(int n, int k, int l, int c, int d, int p, int nl, int np){
    //k bottles 
    //Each bottle has l milliliters of the drink
    // c limes
    // limes cuto into  d slices. 
    // p grams of salt.
    int totalDrink = k*l;
    int slicesOfLime = c*d;
    int salt = p;

    // needs nl milliliters of the drink
    // a slice of lime 
    //np grams of salt.
    int totalToasts = min(min(totalDrink/nl , slicesOfLime), salt/np);
    return totalToasts/n; // toasts per friend
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    vi res;
    REP(i, 0, t){
        int n, k, l, c, d, p, nl, np;
        cin >> n >> k >> l >> c >> d >> p >> nl >> np;
        int ans = solve(n, k, l, c, d, p, nl, np);
        res.PB(ans);
    }
    REP(i,0,t){
        cout << res[i] << endl; 
    }
return 0;
}