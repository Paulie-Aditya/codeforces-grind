/* g++ -std=c++11 -O2 -Wall permutations.cpp -o permutations */
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

int solve(){
    return 0;
}
vector<vll> res;
void search(vll &permutation, bool* chosen, int n) {
        if(res.size() != 0)
            return;
        if((int)(permutation.size()) == n){
            res.PB(permutation);
        }
        else{
            int curr = 0;
            int size = permutation.size();
            if(size > 0){
                curr = permutation[size-1];
            }
            REP(i, 1, n+1){
                if(chosen[i])
                    continue;
                if((curr == 0) || (abs(i-curr) > 1)){
                    chosen[i] = true;
                    permutation.PB(i);
                    search(permutation, chosen, n);
                    chosen[i] = false;
                    permutation.pop_back();
                }
                else    
                    continue;
                
            }
        }
    }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vll permutation;
    bool *chosen = new bool[n+1];
    REP(i, 0, n+1){
        chosen[i] = 0;
    }

    search(permutation, chosen, n);

    if(res.size() == 0){
        cout << "NO SOLUTION";
    }
    else{
        REP(i,0,n){
            cout << res[0][i] << " ";
        }
    }
    
    return 0;
}