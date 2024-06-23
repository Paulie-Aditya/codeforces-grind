/* g++ -std=c++11 -O2 -Wall C_Update_Queries.cpp -o C_Update_Queries */
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


string solve(int n, int m, string s, vi ind, string c){
        unordered_map<int, int> map;

        sort(ind.begin(), ind.end());
        sort(c.begin(), c.end());


        REP(i, 0, m){
            map[ind[i]]++;
        }

        int low = 0;
        
        REP(i,0,m){
            if(map[ind[i]] != -1){
                s[ind[i]] = c[low];
                map[ind[i]]=-1;
                low++;
            }
            
        }

        return s;


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    vector<string> vs;
    REP(i, 0, t){
        
        int n,m;
        string s;
        vi ind;
        string c;

        cin >> n >> m;
        cin >> s;
        REP(k,0,m){
            int curr;
            cin >> curr;
            ind.PB(curr-1);
        }
        cin >> c;
        vs.PB(solve(n, m, s, ind, c));
    }
    REP(i,0,t){
        cout << vs[i] << endl;
    }
return 0;
}