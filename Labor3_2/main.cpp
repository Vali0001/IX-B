#include <iostream>

using namespace std;

int main(){
 int n, i, a;
 double S=0, db=0;

 cout << "n";
 cin >> n;

 for (i=0; i<n; i++)
    cout << "a=";
    cin >> a;
    if (a%2==0) {
        S+=a;
        db++;

    }
    cout << "atlag=" << S/db;


    return 0;
}
