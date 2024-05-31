#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    int a;
    cin >> n >> m >> a;
    
    long long ans;
    
    // for n
    long long ans1;
    long long ans2;
    
    if(n%a == 0){
        ans1 = n/a;
    }
    else{
        ans1 = n/a + 1;
    }
    
    if(m%a == 0){
        ans2 = m/a;
    }
    else{
        ans2 = m/a + 1;
    }
    
    ans = ans1*ans2;
    cout <<  ans;
    return 0;
}