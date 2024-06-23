/* g++ -std=c++11 -O2 -Wall D_Mathematical_Problem.cpp -o D_Mathematical_Problem */
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


void solve(int n, string s){

    
    if(n<=2){
        cout << stoi(s) << endl;
        return;
    }
    // if(n == 3){
    //     if(s[0] == '0' || s[2] == '0'){
    //         cout << 0 << endl;
    //         return;
    //     }
    //     else{
    //         int num1 = s[0]-'0';
    //         int num2 = s[2]-'0';
    //         cout << min((num1+num2), (num1*num2)) << endl;
    //         return;
    //     }
    // }

    int ans = INT_MAX;
    REP(i,1,n){
        vi arr;
        REP(j,0,n){
            int curr = s[j]-'0';
            if(j!=i && j!=i-1){
                arr.PB(curr);
            }
            else if(j == i){
                int num = s[j-1]-'0';
                arr.PB(10*num + curr);
            }   
        }

        if(count(arr.begin(),arr.end(), 0)){
            cout << 0 << endl;
            return;
        }
        else{
            int sum = 0;
            int size = arr.size();
            REP(k,0,size){
                if(arr[k]!=1)
                    sum+= arr[k];
            }

            ans = min(ans, max(1,sum));
        }
    }
    

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    REP(i, 0, t){
        int n;
        string s;
        cin >> n >> s;
        solve(n, s);
    }
return 0;
}