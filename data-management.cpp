#include "FUNCTIONALITIES.h"

int main(){
	int i=1;
	get_file();
	while(i){
		system("CLS");
		cout<<"\t\t-----------------------------------------------\n";
		cout<<"\t\t     GIT Management System\n";
		cout<<"\t\t----------------------------------------------\n";
		cout<<"\n\t\t\tEnter <1> to Add new student"
			<<"\n\t\t\tEnter <2> to Display all student"
			<<"\n\t\t\tEnter <3> to Remove student"
			<<"\n\t\t\tEnter <4> to Edit student"
			<<"\n\t\t\tEnter <5> to Search student"
			<<"\n\t\t\tEnter <0> to Exit\n";
		cout<<"\n\n\t\t\tEnter Your Choice:";	
		cin>>i;
		switch(i){
			case 1 :
				insert_new();
				break;
			case 2 :
				show();
				break;
			case 3 :
				delete_data();
				break;
			case 4 :
				edit_data();
				break;
			case 5 :
				search_and_show();
				break;
			case 0 :
				write_file();
				break;
			default :
				cout<<"\nWRONG CHOICE!!!\nTRY AGAIN";
		}
	}
	return 0;
}