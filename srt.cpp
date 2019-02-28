#include <iostream>
#include <string>

using namespace std;

int main()

{
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a+b-c>0)
    cout << a+b-c << endl;
    if (a+b-c==0)
    cout << "0" << endl;
    if (a+b-c<0)
    cout << "Impossible" << endl;
}