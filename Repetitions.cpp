/* g++ -std=c++11 -O2 -Wall Repetitions.cpp -o Repetitions */
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
    int ans = 0;
    int n = s.size();
    int start = 0;
    int end = 0;
    while(start < n && end <n){
        if(s[start] != s[end]){
            ans = max(end-start, ans);
            start = end;
        }
        else end++;
    }
    ans = max(end-start, ans);
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    REP(i, 0, t){
        string s;
        cin >> s;
        solve(s);
    }
return 0;
}