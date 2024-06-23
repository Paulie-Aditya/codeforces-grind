/* g++ -std=c++11 -O2 -Wall A_Fox_And_Snake.cpp -o A_Fox_And_Snake */
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


void solve(int n, int m){
    int count = 0;
    REP(row, 0, n){
        bool odd = (row&1 == 1);
        if(odd){
            count++;
            if(count&1 == 1){
                // odd -> print .......#
                // even -> print #.....
                REP(col, 0, m-1){
                    cout << ".";
                }
                cout << "#";
            }
            else{
                cout << "#";
                REP(col, 0, m-1){
                    cout << ".";
                }
            }
        }
        else{
            REP(col, 0, m){
                cout << "#";
            }
        }
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    REP(i, 0, t){
        int n, m;
        cin >> n >> m;
        solve(n,m);
    }
return 0;
}