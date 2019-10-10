#include "stb_lib_facilities.h"

int main()

try {
Cout << "Success!\n"; <-Nem nagybetű kell
cout << "Success!\n; <-Hiányzó "
cout << "Success" << !\n" <- Hiányzó ; valamint a << se jó
cout << success << '\n'; <- Hiányzó "", így a success változó
string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; <- stringnek számot ad meg, majd azt próbálja int vektorba rakni
vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n"; <- nem jó zárójelet használ, a megfelelő a [] lenne
if (cond) cout << "Success!\n"; else cout << "Fail!\n"; <-a cond nem létezik
bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n"; <-logikai hiba
string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n"; <- sok a hiba ebben a sorban
string s = "ape"; if (s=="fool") cout << "Success!\n"; <- logikai hiba
string s = "ape"; if (s=="fool") cout < "Success!\n"; <- szintaktikai hiba, logikai hiba
string s = "ape"; if (s+"fool") cout < "Success!\n"; <- s+"fool" ez így nem értelmes
vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n"; <- a 0 mindig kisebb lesz
vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; <- működik, de felesleges a ciklus
string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i]; <- a ciklus nem elég hosszú
if (true) then cout << "Success!\n"; else cout << "Fail!\n"; <- ebben a then a hiba
int x = 2000; char c = x; if (c==2000) cout << "Success!\n"; <- megefelelő x esetén működik
string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; <- működik, de itt meg túl sokáig elmegy a ciklus
vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; <- szintaktikai hiba
int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n"; <- nagyon nagyon sok hiba
int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n"; <- 0-val nem szoktunk osztani
string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i]; <- string<char> ilyen nincs
int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n"; <- a j nem létezik
int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n"; <-logikai, szintaktikai hiba
cin << "Success!\n";<- ide cout kell
keep_window_open();
return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}
