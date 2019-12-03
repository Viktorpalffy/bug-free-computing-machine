#include "../std_lib_facilities.h"

//1.
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

//2.
void f(int tomb[], int szam)
{
    //3.
    int la[10] = { };
    for (int i = 0; i < szam; ++i) la[i] = tomb[i];
    cout << "_3/c_______\n";

    for (const auto& a : la)
        cout << a << ' ';
    cout << '\n';

    int* p = new int[szam];
    for (int i = 0; i < szam; ++i) p[i] = tomb[i];
    
    cout << "_3/f_______\n";
    for (int i = 0; i < szam; ++i)
        cout << p[i] << ' ';
    cout << '\n';

    delete[] p;
}

int fac(int szam) { return szam > 1 ? szam*fac(szam-1) : 1; }

//4.
int main()
{
    f(ga, 10);

    int aa[10] = {};
    for (int i = 0; i < 10; ++i)
        aa[i] = fac(i + 1);

    cout << "_4_______\n";
    f(aa, 10);
}
