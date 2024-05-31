#include <iostream>
#include <fstream>
#include <istream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    
    string hello = "hello";
    
    int i = 0; int j = 0;
    string ans = "";
    for(i = 0; i< s.size(); i++){
        if(s[i] == hello[j]){
            ans += s[i];
            j++;
            if(j>=5){
                break;
            }
        }
    }
    if(ans == "hello"){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}