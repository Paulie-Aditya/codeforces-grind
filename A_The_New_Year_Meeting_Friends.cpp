/* g++ -std=c++11 -O2 -Wall A_The_New_Year_Meeting_Friends.cpp -o A_The_New_Year_Meeting_Friends */
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


int solve(int x, int y, int z){
    int maxi = max(x,max(y,z));
    int mini = min(x,min(y,z));

    int mid = y;

    if(!(x == maxi || x == mini)){
        mid = x;
    }
    if(!(y == maxi || y == mini)){
        mid = y;
    }
    if(!(z == maxi || z == mini)){
        mid = z;
    }


    int ans = abs(mid - x) + abs(mid-y) + abs(mid-z);
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    vi res;
    REP(i, 0, t){
        int x,y,z;
        cin >> x >> y >> z;
        int ans = solve(x,y,z);
        res.PB(ans);
    }
    REP(i,0,t){
        cout << res[i] << endl; 
    }
return 0;
}