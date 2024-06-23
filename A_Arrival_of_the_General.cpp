/* g++ -std=c++11 -O2 -Wall A_Arrival_of_the_General.cpp -o A_Arrival_of_the_General */
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


int solve(int * arr, int n){
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int minIdx = 0;
    int maxIdx = 0;
    REP(i, 0, n){

        // leftmost maxi needed
        // rightmost mini needed
        if(arr[i] > maxi)
            maxIdx = i;
        maxi = max(maxi, arr[i]);
        
        mini = min(mini, arr[i]);
        if(arr[i] == mini)
            minIdx = i;
    }

    int ans = 0;
    ans += maxIdx - 0;
    if(maxIdx <= minIdx){
        ans += n-1 -minIdx;
    }
    else{
        // shifted by 1
        minIdx+=1;
        ans += n-1 -minIdx;
    }

    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    vi res;
    REP(i, 0, t){
        int n;
        cin >> n;
        int *arr = new int[n];
        REP(k, 0, n){
            cin >> arr[k];
        }
        int ans = solve(arr,n);
        res.PB(ans);
    }
    REP(i,0,t){
        cout << res[i] << endl; 
    }
return 0;
}