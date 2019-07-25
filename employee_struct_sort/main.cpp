#include <iostream>

using namespace std;
struct Employee
{
	char name[20];
	int id, dob, bs;
};
int main()
{
	int n=0,i;
	cout << "Enter the number of employee:" <<endl;
	cin >> n;
	struct Employee employee[n];
	struct Employee t;
	for(i=0;i<n;i++)
	{
		cout <<"enter the name of the employee\n";
		cin >> employee[i].name;
		cout <<"enter the id, dob and basic salary of the employee\n";
		cin >> employee[i].id >> employee[i].dob>> employee[i].bs;
	}

	for(int a=0;a<n;a++)
	{
		for(int b=1;b<n-1;b++)
		{
			if(employee[a].bs>employee[b].bs)
			{
				t =  employee[a];
				employee[a] = employee[b];
                employee[b] = t;

			}
		}
	}

	for(int z=0;z<n;z++)
	{
	    cout << employee[z].name << endl;
        cout << employee[z].bs<< endl;
        cout << employee[z].dob<< endl;
        cout << employee[z].id << endl;
    }

    return 0;
}
