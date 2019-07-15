#include <iostream>

using namespace std;

int prime(int a)
{
    int i, sum=0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
            {
                sum+=1;
            }
    }
    if(sum<=2)
        return(1);
}

int main()
{
    int l=0,u=0, t=0;
    cout << "enter the lower range" << endl;
    cin >> l ;
    cout << "enter the upper range" << endl;
    cin >> u;

    for(int i=l;i<=u;i++)
    {
        t = prime(i);
        if(t==1)
            cout << i << "\t";

    }

    return 0;
}
