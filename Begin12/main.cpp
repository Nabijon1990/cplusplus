//To'g'ri uchburchak gipotenuzasi va perimetrini topish

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b;

    cout << "Katetlarini kiriting:\n";
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    cout << "\nGipotenuza c=" << sqrt(a * a + b * b) << endl;
    cout << "Perimetri P=" << a + b + sqrt(a * a + b * b) << endl;

    cout<<endl;
    system("PAUSE");

    return 0;
}
