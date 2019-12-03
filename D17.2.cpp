#include "../std_lib_facilities.h"

void print_array(ostream& os, int* a, int n) {
    for (int i = 0; i<n; ++i)
        os << a[i] << "\n";
}

int main()
{
	//1.
	int alap = 7; 
	int* p1= &alap;

	//2.
	cout<<"_2______";
	cout<< "\np1: " << p1;
	cout<< "\n*p1: " << *p1 << endl;

	//3.
	int* p2 = new int[7];
	for (int i = 0; i<7; ++i)
	{
        p2[i] = pow(2,i);
	}

    //4.
    cout << "\n_4______";
    cout << "\np2: " << p2;
    cout << "\n*p2: " << *p2;
    cout << "\np2 print_array:";
    print_array(cout,p2,7);

    //5.
    int* p3 = p2;

    //6.
    p2 = p1;

    //7.
    p2 = p3;

    //8.
    cout << "\n\n_8______";
    cout<< "\np1: " << p1;
    cout<< "\n*p1: " << *p1 << endl;

    cout << "\np2: " << p2;
    cout << "\n*p2: " << *p2;
    cout << "\np2 print_array:";
    print_array(cout,p2,7);

    //9.
    delete[] p2;
    
    //10.
    p1 = new int[10];
    for (int i = 0; i<10; ++i)
        p1[i] = pow(2,i);

    //11.
    p2 = new int[10];

    //12.
    cout << "\n_12______\n";
    for (int i = 0; i<10; ++i)
        p2[i] = p1[i];
    print_array(cout,p2,10);

    //13.
    cout << "\n_13______\n";
    vector<int> vector1;
    for (int i = 0; i<10; ++i)
        vector1.push_back(pow(2,i));
    vector<int> vector2;
    for (int i = 0; i<vector1.size(); ++i)
        vector2.push_back(vector1[i]);
    for (int i = 0; i < vector2.size(); ++i)
    {
    	cout<< vector2[i] << endl;
    }
    


	return 0;
}
