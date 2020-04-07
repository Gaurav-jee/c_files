#include<iostream>

using namespace std;

class alpha
{
    int a;
    public:

    void get_data()
    {
        cout<<"enter the value";
        cin>>a;
    }
    void show_data()
    {
        cout<<"the data is:"<<a;
    }
};

int main()
{
    ABC ob1;
    ob1.get_data();
    ob1.show_data();
    return 0;
}
