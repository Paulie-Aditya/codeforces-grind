/* g++ -std=c++11 -O2 -Wall A_Beautiful_Matrix.cpp -o A_Beautiful_Matrix */
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


int solve(){
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    vi res;
    REP(i, 0, t){
        int ans = 0;

        for(int i = 0; i<5; i++){
            for(int j = 0; j<5; j++){
                int x;
                cin >> x;
                if(x == 1){
                    ans = abs(2-i) + abs(2-j);
                }
            }
        }
        res.PB(ans);
    }
    REP(i,0,t){
        cout << res[i] << endl; 
    }
return 0;
}