#include <iostream>

using namespace std;

int main()
{ int szam1 , szam2 , szam3 , szam4 , szam5 , szam6, a=0, b=0;
     cout << "szam1= ";
    cin >> szam1;
    cout << "szam2=";
    cin >> szam2 ;
    cout << "szam3=" ;
    cin >> szam3;
    cout << "szam4=" ;
    cin >> szam4;
     cout << "szam5= ";
    cin >> szam5;
    cout << "szam6=";
    cin >> szam6 ;
    if (szam1%2==0){
            a=a+szam1;
    } else { b=b+szam1;}
    if (szam2%2==0){
            a=a+szam2;
    } else { b=b+szam2;}
    if (szam3%2==0){
            a=a+szam3;
    } else { b=b+szam3;}

    if (szam4%2==0){
            a=a+szam4;
    } else { b=b+szam4;}

    if (szam5%2==0){
            a=a+szam5;
    } else { b=b+szam5;}
    if (szam6%2==0){
            a=a+szam6;
    } else { b=b+szam6;}
    cout << "a paros szamok osszege=" <<a<< endl;
    cout << "a paratlan szamok osszege=" <<b<< endl;
    return 0;






    return 0;
}
