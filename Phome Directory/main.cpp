#include <iostream>
#include<fstream>
#include<string>

using namespace std;

class phoneBook{
    char name[20],phone[15];
    public:
        phoneBook(char n[], int ph[])
        {
            strcpy(name, n);
            strcpy(phone, ph);
        }
        char *getname(){ return name; }
        char *getphone(){ return phone; }

        void update_contact(char *nm,char *ph){
        strcpy(name,nm);
        strcpy(phone,ph);
    }
};


int main()
{
    int c;
    while(1)
    {
        cout<<"***********Phone Directory***********\n";
        cout<<"Enter your choice:\n";
        cout<<"1. Add contact:\n";
        cout<<"2. Search for telephone number:\n";
        cout<<"3. Search for a name:\n";
        cout<<"4. Update Details:\n";
        cout<<"Press any other key to Exit\n";
        cin>>c;

        switch (c)
        {
        case 1:

        }


    }
    return 0;
}
