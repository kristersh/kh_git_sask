#include <iostream>

using namespace std;

int SSK(int x, int y, int z);

 int main()
{
 int a, b, c;
 cout << "ievadiet tris ciparus" << endl;
 cin >> a;
 cin >> b;
 cin >> c;

 cout << " cipara " << a << " , " << b << " un cipara "  << c << "summa ir = " << SSK(a, b, c) << endl;
    return 0;
}

int SSK(int d, int e, int f)
{
    int g;
    g=d+e+f;

 return g;
}
