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
vector<vi> res;
void search(vi &permutation, bool* chosen, int n) {
        if(res.size() != 0)
            return;
        if((int)(permutation.size()) == n){
            for(int j = 1; j<permutation.size(); j++){
                    if(abs(permutation[j]-permutation[j-1]) == 1)
                        return;
            }
            res.PB(permutation);
        }
        else{
            if(permutation.size() > 1){
                for(int j = 1; j<permutation.size(); j++){
                    if(abs(permutation[j]-permutation[j-1]) == 1)
                        return;
                }
            }
            REP(i, 1, n+1){
                if(chosen[i])
                    continue;
                chosen[i] = true;
                permutation.PB(i);
                search(permutation, chosen, n);
                chosen[i] = false;
                permutation.pop_back();
            }
        }
    }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi permutation;
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