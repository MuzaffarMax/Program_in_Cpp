#include<iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;



int main()
{
	int start;
	cout << "Do you want to start?" << endl << "Write 1 if yes" << endl;
	cin >> start;
	while (start == true) {int menu;
	string name;
	string password;


	cout << "Enter the operation that you will use " << endl;
	cout << "1 For adding a new data \n2 For reading the data \n3 For deleting the data" << endl;
	cin >> menu;
	
	if (menu == 1){
		cout << "Enter the name" << endl;
		cin >> name;
		cout << "Enter the password" << endl;
		cin >> password;
		fstream data;
		data.open("Database.txt", ios::out);
		if (data.is_open())
		{
			data << name << endl;
			data << password << endl;
			data.close();
		}
	}
	else if (menu == 2) {
		fstream data;
		data.open("Database.txt", ios::in);
		if (data.is_open())
		{
			string base;
			while (getline(data, base)) 
			{
				cout << base << endl;
			}
			data.close();
		}
	}
	else if (menu == 3) {
		remove("Database.txt");
		cout << "File deleted successfully.\n";
		
	}}




	return 0;
}