#include<iostream>
#include<fstream>
using namespace std;

class phone
{
    public:
    void set_data();
};

void phone:: set_data()
{
    ofstream fin("phone.txt");
    char *name[5] = {"Aman","Bhuvan","Gaurav","Robin","Sanchit"};
    char *number[5] = {"01673050495","01723783117","01818953250","+214324513","+455652132"};
    for(int i=0;i<5;i++)
        {
        fin.setf(ios::left,ios::adjustfield);
        fin.width(20);
        fin<<name[i];
        fin.setf(ios::right,ios::adjustfield);
        fin.width(15);
        fin<<number[i]<<"\n";
        }
}

int main()
{
    phone book;
    book.set_data();
    return 0;
}

