/* g++ -std=c++11 -O2 -Wall weirdalgo.cpp -o weirdalgo */
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
int solve(int n, vll &res){
    ll ans = n;
    res.PB(ans);
    while(ans != 1){
        if((ans&1) == 1){
            // odd
            ans = ans*3 +1;
        }
        else{
            ans = ans/2;
        }
        res.PB(ans);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    vll res;
    REP(i, 0, t){
        int n;
        cin >> n;
        solve(n, res);
        // res.PB(ans);
    }
    REP(i, 0, res.size()){
        cout << res[i] << " ";
    }
return 0;
}