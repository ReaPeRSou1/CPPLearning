#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a * b == c )
    cout << "YES" << endl;

    if (a * b != c )
    cout << "NO" << endl;
}