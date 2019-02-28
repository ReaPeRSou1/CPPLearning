#include <iostream>

using namespace std;

main ()

{
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a>b and a>c)
    {
        if (b<c)
        cout << a-b << endl;
        if (c<b)
        cout << a-c << endl;
    }
    if (b>a and b>c)
    {
        if (a<c)
        cout << b-a << endl;
        if (c<a)
        cout << b-c << endl;
    }
    if (c>a and c>b)
    {
        if (a<b)
        cout << c-a << endl;
        if (b<a)
        cout << c-b << endl;
    }
}