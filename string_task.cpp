#include <iostream>
#include <fstream>
#include <istream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    string ans = "";
    for(int i = 0; i< s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(! ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')){
                ans = ans + "." + s[i];
            }
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            if(! ( s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')){
                char curr = s[i] - 'A' + 'a';
                ans = ans + "." + curr;
            }
            
        }
    }
    cout <<  ans;
    return 0;
}