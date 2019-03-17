#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";

int a, b, max, min;

cin >> a >> b;
cout  << "A - B = " << a - b << '\n'
<< "A + B = " << a + b << '\n'
<< "A * B = " << a * b << '\n'
<< "A / B = " << a / b << '\n' ;
if(a>b)
max=a;
else
max=b;
cout<<"Max="<<max;
if (a< b)
   min=a;
else
    min=b;
cout << "Min="<<min;

}
