#include <iostream>

using namespace std;

main()

{
    int a;
    int b;

    cin >> a;
    cin >> b;

    double c = 1;
    
    c = a + b - c;
    
    cout << c - a << endl;
    cout << c - b << endl;
}