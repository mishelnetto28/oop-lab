#include <iostream>

using namespace std;

class employee{
	public:
		int yearofjoining;
		string name,address;
		
		void getdetails()
		{
			cout<<"Enter Employee Name:";
			cin>>name;
			cout<<endl<<"Enter Year of Joining:";
			cin>>yearofjoining;
			cout<<endl<<"Enter address:";
			cin>>address;
		}
		void putdata()
		{
			cout<<name<<"\t"<<yearofjoining<<"\t"<<"\t"<<address<<"\t"<<endl;
		}
};
int main()
{
	employee e[3];
	for(int i=0;i<3;i++){
		cout<<"Enter details of employee"<<i+1<<endl;
		e[i].getdetails();
	}
	cout<<"Name    Year of Joining    Address"<<endl;
	for(int i=0;i<3;i++){
		e[i].putdata();
	}
	
	return 0;
}
