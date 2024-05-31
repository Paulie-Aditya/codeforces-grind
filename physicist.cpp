#include <iostream>
#include <fstream>
#include <istream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum_x = 0;
    int sum_y = 0;
    int sum_z = 0;
    
    int x;
    int y;
    int z;
    
    for(int i = 0; i<n; i++){
        cin >> x >> y >>  z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    
    if(sum_z == 0 && sum_y == 0 && sum_y == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}