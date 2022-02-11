#include <iostream>
using namespace std;
int main(){
    int a,i,j;
    cin >> a;
    for(i=1; i<=a; i++){
        for(j=0; j<i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
