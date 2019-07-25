#include <iostream>

using namespace std;
void pattern(int i, int n)
{
    int j=0, k=0;
    for(j=1;j<=n-i;j++)
    {
        cout << " ";
    }
    for(k=1;k<=i;k++)
    {
        cout << k;
    }
    for(k=i-1;k>=1;k--)
    {
        cout << k;
    }
    cout << endl;
}

int main()
{
    int i, n;
    cout << "enter a number:";
    cin >> n;
    for(i=1;i<n;i++)
    {
        pattern(i,n);
    }
    return 0;
}
