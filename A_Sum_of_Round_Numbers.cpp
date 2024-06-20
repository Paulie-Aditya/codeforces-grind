/* g++ -std=c++11 -O2 -Wall A_Sum_of_Round_Numbers.cpp -o A_Sum_of_Round_Numbers */
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


void solve(string str){
    
    vector<string> res;
    int size = str.size();
    int power = size-1;
    int count = 0;

    REP(i,0,size){
        if(str[i] != '0'){
            string curr = "";
            curr += str[i];
            REP(k,0,power){
                curr+='0';
            }
            res.PB(curr);
            count++;
        }

        power--;
    }
    cout<< count<<  "\n";
    size = res.size();
    REP(i,0,size){
        cout << res[i] << " ";
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    
    REP(i, 0, t){
        string n;
        cin >> n;
        solve(n);
    }
return 0;
}