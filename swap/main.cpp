#include <iostream>
using namespace std;

void swap_by_address(int *x, int *y);
void swap_by_reference(int &x, int &y);

int main()
{
    int a,b;
    cout << "enter two numbers!" << endl;
    cin >> a >> b;
    swap_by_address(&a, &b);
    cout << a << b << endl;
    swap_by_reference(a, b);
    cout << a << b << endl;
    return 0;
}

void swap_by_address(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

void swap_by_reference(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
