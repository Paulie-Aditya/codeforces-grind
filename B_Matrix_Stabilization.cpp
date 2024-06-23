/* g++ -std=c++11 -O2 -Wall B_Matrix_Stabilization.cpp -o B_Matrix_Stabilization */
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

ll minNeighbour(int i, int j, ll val, int n, int m, vector<vll>& mat){
    
    ll ans = INT_MIN;
    // [i-1][j]
    // [i][j-1]
    // [i][j+1]
    // [i+1][j]
    if(i-1 >=0){
        ans = max(ans, mat[i-1][j]);
    }
    if(i+1 <n){
        ans = max(ans, mat[i+1][j]);
    }
    if(j-1 >=0){
        ans = max(ans, mat[i][j-1]);
    }
    if(j+1 < m){
        ans = max(ans, mat[i][j+1]);
    }
    ans= min(val, ans);
    return ans;

}

void solve(vector<vll> &mat, int n, int m){

    REP(i, 0, n){
        REP(j, 0, m){
            mat[i][j] = minNeighbour(i, j, mat[i][j], n , m, mat);
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    REP(i, 0, t){
        int n, m;
        vector<vll> mat;
        cin >> n >> m;
        REP(k, 0, n){
            vll arr;
            REP(j, 0, m){
                ll curr;
                cin >> curr;
                arr.PB(curr);
            }
            mat.PB(arr);
        }
        solve(mat,n,m);
    }
return 0;
}