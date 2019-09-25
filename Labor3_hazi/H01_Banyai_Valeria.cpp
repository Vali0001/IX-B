#include <iostream>

using namespace std;

int main()

{
    int n, i, a;
 double S=0, P=0, db=0, db2=0;

  cout << "n=";
  cin >> n;

   for (i=0; i<n; i++){
    cout << "a=";
    cin >> a;

    if (a%2==0) {
        S+=a;
        db++;

    } else {
        P+=a;
        db2++;
    }
   }
    cout << "a parosak atlaga=" << S/db << endl;
    cout << "a paratlanok atlaga=" <<P/db2;



    return 0;
}
