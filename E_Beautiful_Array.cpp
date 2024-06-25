/* g++ -std=c++11 -O2 -Wall E_Beautiful_Array.cpp -o E_Beautiful_Array */
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


void solve(vll arr, int n, int k){
    unordered_map<ll, int> map;

    REP(i,0,n){
        map[arr[i]]++;
    }

    int count = 0;
    int ans = 0;
    for(auto el: map){
        if(el.F & 1 == 1){
            //
            int num = el.F;
            int freq = el.S;
            if(map.count(k-num)){
                map[num]-=map[k-num];
                freq = map[num];
                if(freq%2 == 1){
                    count++;
                }
            }
        }
    }
    if(count == 0 || count == 1){
        // accept
    }
    else{
        cout << -1 << endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    vll res;
    REP(i, 0, t){
        int n,k;
        cin >> n >> k;
        vll arr;
        REP(k,0,n){
            cin >> arr[k];
        }
        solve(arr, n, k);
        
    }
return 0;
}