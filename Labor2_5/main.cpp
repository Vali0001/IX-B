#include <iostream>

using namespace std;

int main()
{ int szam1, szam2, szam3, a;
    cout << "szam1= ";
    cin >> szam1;
    cout << "szam2=";
    cin >> szam2 ;
    cout << "szam3=" ;
    cin >> szam3;
    a=szam1;
    if (szam1<szam2) {
        a=szam2;
        if (szam2<szam3)  {
            a=szam3;
        }
    } else { if (szam1<szam3)  {
            a=szam3;
        }

    }
    cout << a << endl;
    return 0;
}
