/* g++ -std=c++11 -O2 -Wall Increasing_Array.cpp -o Increasing_Array */
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


void solve(int n, vi arr){
    int count = 0;
    REP(i,1,n){
        if(arr[i] >= arr[i-1]){

        }
        else{
            count += abs(arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout << count << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    REP(i, 0, t){
        int n;
        vi arr;
        cin >> n;
        REP(k,0,n){
            int curr;
            cin >> curr;
            arr.PB(curr);
        }
        solve(n,arr);
    }
return 0;
}