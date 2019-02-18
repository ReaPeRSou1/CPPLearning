#include <iostream>

using namespace std;

main ()
{
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a*b>c) 
        cout << "YES" << endl;
    if (a*b<c) 
        cout << "NO" << endl;
    if (a*b==c) 
        cout << "YES" << endl;
}