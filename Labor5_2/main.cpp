#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    c= a*b;
     cout << "a=";
     cin >> a;
     cout << "b=";
     cin >> b;
     while (a!=b) {
        if (a>b) {
            a=a-b;
        }
        else {
            b=b-a;
        }
     }
     c=c/a;
     cout << a;
    return 0;
}
