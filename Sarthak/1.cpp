#include <iostream>
using namespace std;

class person{
	public:
		int id;
		string name;
	
		
		void setter(int id,string name){
			this->id=id;
			this->name=name;
		}
	};
class customer: public person{
	public:
		void getter(){
		cout<<"\nCustomer Id: "<<id;
		cout<<"\nName: "<<name;
	}
	
};

class vechile{
	private:
		int rentper_day=1000,vech;
		static int vechile_Id;
	public:
		vechile(){
			vech=vechile_Id++;
		}
		int ch,count=12;
		char type;
		void choice(int count){
		do{
			cout<<"\n1.seddan"<<"\n2.SUV"<<"\n3.Hatchback";
			switch(ch){
				case 1:{
					if(ch==1){
						cout<<"\nYou Have Chossed Sedan";
						cout<<"\nRent Per Day: 1000";
						for(int i=0;i<count;i++){
							
						}
						count--;
						cout<<"\nNumber of Cars Reamining: "<<count;
					}
					break;
				}
				case 2:{
					
						cout<<"\nYou Have Chossed Sedan";
						cout<<"\nRent Per Day: 1000";
						for(int i=0;i<count;i++){
							
						}
						count--;
						cout<<"\nNumber of Cars Reamining: "<<count;
					break;
				}
				case 3:{
					
						cout<<"\nYou Have Chossed Sedan";
						cout<<"\nRent Per Day: 1000";
						for(int i=0;i<count;i++){
							
						}
						count--;
						cout<<"\nNumber of Cars Reamining: "<<count;
					
					break;
				}
					default:
						cout<<"\nWrong Choice";
			}
		}
		while(ch!=4);
	}
	
		
};
class vechile::vechile_Id = 5001;

class rental:public vechile,public person{
	private:
		int days=0;
		int rent=1000;
	public:
		
	void display(){
		cout<<"\nEnter No Days To be Rented: ";
		cin>>days;
		person a;
		a.getter();
		total_rent=days*rent;
		cout<<"\nTotal Rent: "<<total_rent;
	}
	
};
class rental_service:public vechile{
	private:
		int a;
	public:
		void add(int a){
			this->a=a;
			cout<<"\nTo Add New Vechile: ";
			cin>>a;
			count=count+a;
			cout<<"\nTotal Available Vechile: "<<count;
		}
	
	
};

main(){
	int id,choice;
	string name,type;
	person e1;
	cout<<"\nEnter Id:";
	cin>>id;
	cout<<"\nEnter Name:";
	cin>>name;
	e1.setter(id,name);
	vechile e2;
	e2.getter();
	e2.choice();
	rental e3;
	e3.display();


	}