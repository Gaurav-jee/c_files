#include <iostream>

using namespace std;

int main()
{
    int n, a=0, b=1, c=0;
    cout << "enter a number:" << endl;
    cin >> n;
    cout << a <<"\t";

    cout << b <<"\t";
    for(int i=1;i<n;i++)
    {

        c= a+b;
        a=b;
        b=c;
        cout << c <<"\t" ;
    }

    return 0;
}
