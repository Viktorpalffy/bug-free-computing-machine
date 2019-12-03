#include "../std_lib_facilities.h"

//4.
void print_array10(ostream& os, int* a) {
	cout << "\n_4._________\n";
    for (int i = 0; i<10; ++i)
        os << a[i] << "\n";
}

//7.
void print_array(ostream& os, int* a, int n)
{
	cout << "\n_7._________\n";
    for (int i = 0; i<n; ++i)
        os << a[i] << "\n";
}

// 10
void print_vector(ostream& os, vector<int> v) {
    for (int i = 0; i<v.size(); ++i)
        os << v[i] << "\n";
}

int main()
{
//1. 
int* p1 = new int(10);

//2.
cout << "_2._________\n";
for (int i = 0; i < 10 ; ++i)
{
	cout << p1[i]<<'\n';
}

//4.
print_array10(cout,p1);

//3.
delete[] p1;

//5.
int* p2 = new int(10);
for (int i = 0; i < 10; ++i)
{
	p2[i]=100+i;
}

cout << "\n_5._________\n";
for (int i = 0; i < 10 ; i++)
{
	cout << p2[i]<<'\n';
}
delete [] p2;

//6.
int* p3 = new int(11);
for (int i = 0; i < 11; ++i)
{
	p3[i]=100+i;
}

cout << "\n_6._________\n";
for (int i = 0; i < 11 ; i++)
{
	cout << p3[i]<<'\n';
}

//7.
print_array(cout,p3,11);
delete [] p3;

//8.
int* p4 = new int(20);
for (int i = 0; i < 20; ++i)
{
	p4[i]=100+i;
}

cout << "\n_8._________\n";
for (int i = 0; i < 20 ; i++)
{
	cout << p4[i]<<'\n';
}
delete [] p4;


//10.
cout << "\n_10._________\n";
vector<int> v;
for (int i = 0; i<10; ++i)
    v.push_back(100+i);
print_vector(cout,v);

cout << "\n";
vector<int> v2;
for (int i = 0; i<11; ++i)
    v2.push_back(100+i);
print_vector(cout,v2);

cout << "\n";
vector<int> v3;
for (int i = 0; i<20; ++i)
    v3.push_back(100+i);
print_vector(cout,v3);

}
