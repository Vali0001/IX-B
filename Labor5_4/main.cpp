#include <iostream>

using namespace std;

int main()
{
     int a, max=-INT_MAX, max2=-INT_MAX+1, max3=-INT_MAX+2 min=INT_MAX, i;
    for( i=0; i<7; i++) {
        cout << "a=" << i << ". szam" ;
        cin >> a;
        if (a>max) {
            max3=max2;
            max2=max;
            max= a;
        }
       else if (a>max2) {
           max3=max2;
           max2=a;

        }
        else if (a>max3){
            max3=a;
        }
        if (a<min) {
            min2=min;
            min=a;
        }
        else if (a<min2) {
        min2=a;

        }
    }
   cout << max3 << endl;
   cout <<min2 << endl;


    }
    return 0;
}
