#include "../std_lib_facilities.h"

//1.
vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

//2.
void f(vector<int> v)
{
    //3a
    vector<int> lv(10);
    //3b
    lv = v;
    //3c
    for (auto& a : lv)
        cout << a << '\t';
    cout << '\n';

    //3d
    vector<int> lv2 = v;
    //3e
    for (auto& a : lv2)
        cout << a << '\t';
    cout << '\n';
}

int fac(int n) { return n > 1 ? n * fac(n - 1) : 1; }

//4.
int main()
{
    //4a
    f(gv);
    //4b
    vector<int> vv(10);
    for (int i = 0; i < vv.size(); ++i)
        vv[i] = fac(i + 1);
    //4c
    f(vv);
}
