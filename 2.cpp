/*2. WAP to get and display 4 Cars information
using class and object by including below
mentioned attributes:
- car_id
- car_company_name
- car_color
- car_model
- car_release_year*/

#include<iostream>
#include<string.h>

using namespace std;

class Car{
	
	public :
			int id;
			char company_name[100];
			char color[100];
			int modal;
			int release_year;	
}; 

int main(){

			int i;
			Car c1;
			
			
			
			for(i=1;i<5;i++){
				
					cout<<"ENTER ID"<<endl;
						cin>>c1.id;
	
					cout<<"ENTER  COMPANY NAME "<<endl;
					cin>>c1.company_name;
	
					cout<<"ENTER MODAL "<<endl;
					cin>>c1.modal;
	
					cout<<"ENTER release year "<<endl;
					cin>>c1.release_year;
					
cout<<c1.id <<endl;
cout<<c1.company_name <<endl;
cout<<c1.modal <<endl;
cout<<c1.release_year <<endl;
				
				
	}
			
	return 0;
}

