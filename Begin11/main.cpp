#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    cout << "\nYig'indisi a+b=" << a + b << endl;
    cout << "Ko'paytmasi a*b=" << a * b << endl;
    cout << "Modullari: " << endl;
    cout << "|a|=" << fabs(a) << ", |b|=" << fabs(b) << endl;

    system("PAUSE");

    return 0;
}
