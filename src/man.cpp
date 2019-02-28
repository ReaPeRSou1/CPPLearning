#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;

    if (a>727 and a<94)
    cout << "Error" << endl;
    if (b>727 and b<94)
    cout << "Error" << endl;
    if (c>727 and c<94)
    cout << "Error" << endl;
    if (a>b and a>c and a<727 and a>94)
    cout << a << endl;
    if (b>a and b>c and b<727 and b>94)
    cout << b << endl;
    if (c>a and c>b and c<727 and c>94)
    cout << c << endl;
    if (a==b and b==c)
    cout << a << endl;

}