/* g++ -std=c++11 -O2 -Wall A_Line_Trip.cpp -o A_Line_Trip */
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
#define REP(i,a,t) for (int i = a; i < t; i++)


int solve(int n, int x, int* arr){
    
    // find max dist to cover
    int maxi = INT_MIN;
    int dist1 = abs(0- arr[0]);
    int dist2 = 2*abs(x - arr[n-1]);
    maxi = max(maxi, dist1);
    maxi = max(maxi, dist2);
    REP(i,0, n-1){
        int dist = abs(arr[i]-arr[i+1]);
        maxi = max(maxi, dist);
    }

    return maxi;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    vi res;
    REP(i, 0, t){
        int n,x;
        cin >> n;
        cin >> x;
        int* arr = new int[n];
        REP(k,0,n){
            int curr;
            cin >> arr[k];
        }
        int ans = solve(n,x,arr);
        res.PB(ans);
    }
    REP(i,0,t){
        cout << res[i] << endl; 
    }
return 0;
}