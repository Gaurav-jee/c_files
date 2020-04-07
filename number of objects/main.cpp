#include<iostream>
using namespace std;

int x=1;

class ABC
{
     public:
     ABC()
     {x++;
     }
     ~ABC()
     {
     x--;
     }
};

int main()
{
     ABC a,c;
     {
          ABC d,i;
          {
               ABC e;
               ABC f;
               ABC g;
          }
          ABC h;

     }
     cout<<"X ="<<x;
     return 0;
}
