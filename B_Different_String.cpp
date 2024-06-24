/* g++ -std=c++11 -O2 -Wall B_Different_String.cpp -o B_Different_String */
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
#define int long long
#define sort(a) sort(a.begin(), a.end())
#define revsort(a,T) sort(a.begin(), a.end(), greater<T>)
#define rev(a) reverse(a.begin(), a.end())
#define REP(i,a,t) for (int i = a; i < t; i++)
#define REPback(i,a,n) for (int i = n; i>=a; i--)


void solve(string s){
    int n = s.size();
    char c = s[0];
    REP(i,0,n){
        if(s[i] != c){
            swap(s[i],s[0]);
            cout << "YES" << endl;
            cout << s << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    REP(i, 0, t){
        string s;
        cin >> s;
        solve(s);
    }
return 0;
}