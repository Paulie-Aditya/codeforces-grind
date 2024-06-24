/* g++ -std=c++11 -O2 -Wall A_In_Search_of_an_Easy_Problem.cpp -o A_In_Search_of_an_Easy_Problem */
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


void solve(){

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    REP(i, 0, t){
        int n;
        cin >> n;
        int ans = 0;
        REP(k,0,n){
            int curr;
            cin >>curr;
            if(curr == 1){
                ans = 1;
                break;}
        }
        ans == 0 ? cout << "EASY" << endl : cout << "HARD" << endl;
        
    }
return 0;
}