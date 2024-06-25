/* g++ -std=c++11 -O2 -Wall A_Soccer.cpp -o A_Soccer */
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
#define NO cout << "NO" << endl;
#define YES cout << "YES" << endl;



void solve(int a1, int b1, int a2, int b2){
    
    if(a1 > b1){
        if(a2 <= b2){
            NO
            return;
        }
        else{
            YES
        }
    }
    else{
        // a1 < b1
        if(b2 <=a2){
            NO
            return;
        }
        else    {
         YES
         return;}
    }
        

}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    REP(i, 0, t){
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2>> b2;
        solve(a1,b1,a2,b2);
    }
return 0;
}