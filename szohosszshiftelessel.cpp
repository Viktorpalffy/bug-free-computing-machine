#include <iostream>

using namespace std;

int main()
{
    int a=1,b=0;
    while(a)
    {
    a=a<<1;
    b++;
    }
    cout<<b<<endl;
    return 0;
}
