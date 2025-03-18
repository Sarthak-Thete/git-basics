#include<iostream>
using namespace std;

class Employee{
	private: 
	int Emp_Id,salery;
	string name;
	float da,hra,gross_sal;
	public:
	
		void setter(){
			cout<<"\nEnter Employee No: ";
			cin>>Emp_Id;
			cout<<"\nEnter Employee Name: ";
			cin>>name;
			cout<<"\nEnter Salery: ";
			cin>>salery;
			da=0.12*salery;
			hra=0.3*salery;
			gross_sal=da+hra+salery;
			
		}
		void getter(){
			cout<<"====================";
			cout<<"\nName: "<<name;
			cout<<"\nEmployee Id: "<<Emp_Id;
			cout<<"\nGross Salery: "<<gross_sal;
		}
	
};


main(){
	Employee E1;
	
	E1.setter();
	E1.getter();
}