/* g++ -std=c++11 -O2 -Wall A_Anton_and_Polyhedrons.cpp -o A_Anton_and_Polyhedrons */
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


ll solve(vector<string> &v, unordered_map<string, int> &mp, int n){

    ll ans = 0;
    REP(i, 0, n){
        ans += mp[v[i]];
    }
    return ans;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    vll res;
    unordered_map<string, int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    REP(i, 0, t){
        int n;
        cin >> n;
        vector<string> v;
        REP(k, 0, n){
            string curr;
            cin >> curr;
            v.PB(curr);
        }
        ll ans = solve(v, mp,n);
        res.PB(ans);
    }
    REP(i,0,t){
        cout << res[i] << endl; 
    }
return 0;
}