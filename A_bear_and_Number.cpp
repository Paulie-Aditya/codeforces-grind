/* g++ -std=c++11 -O2 -Wall A_bear_and_Number.cpp -o A_bear_and_Number */
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


string solve(string str){
    int size = str.size();
    REP(i,0,size){
        if(i == 0){
            if(str[i] == '9'){
                str[i] = '9';
            }
            else{
                str[i] = min(str[i]-'0', 9 - (str[i]-'0') ) + '0';
            }
        }
        else{
            str[i] = min(str[i]-'0', 9 - (str[i]-'0') ) + '0';
        }
    }
    return str;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    vector<string> res;
    REP(i, 0, t){
        string n;
        cin >> n;
        string ans = solve(n);
        res.PB(ans);
    }
    REP(i,0,t){
        cout << res[i] << endl; 
    }
return 0;
}