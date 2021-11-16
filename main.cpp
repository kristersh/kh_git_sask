#include <iostream>

using namespace std;

int SSK(int x, int y);

 int main()
{
 int a, b, c;
 cout << "ievadiet divus ciparus" << endl;
 cin >> a;
 cin >> b;

 cout << "cipara" << a << "un cipara" << b << "summa ir="  << SSK(a, b) << endl;
    return 0;
}

int SSK(int d, int e)
{
    int f;
    f=d+e;

 return f;
}
