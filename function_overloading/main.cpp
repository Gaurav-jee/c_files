#include <iostream>

using namespace std;
int fun(int x);
int fun(int x, int y);
int fun(int x, int y, int z);

int main()
{
    int n,x,y,z,t;
    cout << "press\n 1.\t for area of circle\n2.\t for area of box\n3.\t for vol of box\n" << endl;
    cin >> n;
    switch(n)
        {
        case 1:
            cin >> x;
            t= fun(x);
            cout << t;
        case 2:
            cin >> x >> y;
            t= fun(x,y);
            cout << t;
        case 3:
            cin >>x >> y >>z;
            t= fun(x,y,z);
            cout << t;
        }


    return 0;
}


int fun(int x)
{
    return (3.14*x*x);
}

int fun(int x, int y)
{
    return (x*y);
}

int fun(int x, int y, int z)
{
    return(x*y*z);
}
