#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
using namespace std;
#include<list>


struct Student
{
public:

	string firstname[100];
	string lastname[100];
	string year[100];
	string age[100];

};

	

int main()
{

	struct Student s;
	int count = 0;
	string firstname, lastname, year, age;
	char choice;
	bool ans = false;
	while (1) {
		system("CLS");
		cout << "\t\t===== STUDENT DATABASE MANAGEMENT SYSTEM =====";
		cout << "\n\n										";
		cout << "\n\n";
		cout << "\n \t\t\t 1. Add	  Records";
		cout << "\n \t\t\t 2. List   Records";
		cout << "\n \t\t\t 3. Modify Records";
		cout << "\n \t\t\t 4. Delete Records";
		cout << "\n \t\t\t 5. Exit Program";
		cout << "\n \t\t\t Select Your Choice :=> ";
		cin >> choice;
		fflush(stdin);
		ans = false;
		switch (choice)
		{
		case '1':
			while (ans == false) {
				char answer;
				system("CLS");
				cout << "Enter the first name: ";
				cin >> firstname;
				cout << "Enter the last name: ";
				cin >> lastname;
				cout << "Enter the age: ";
				cin >> age;
				cout << "Enter their school year: ";
				cin >> year;
				s.firstname[count] = firstname;
				s.lastname[count] = lastname;
				s.year[count] = year;
				s.age[count] = age;
				count += 1;
				
				cout << "Add another record (y/n): ";
				cin >> answer;
				if (answer == 'y') {
					ans = false;
				}
				else if (answer == 'n') {
					ans = true;
				}
				else {
					cout << "Answer is not compatible";
				}
				fflush(stdin);
			}
			break;

		case '2':

			system("CLS");
			cout << "== View the Record in the Database ===";
			cout << "\n";
			for (int y = 0; y < count; y++) {
				if (s.age[y] != "0") {
					cout << "\n";
					cout << "\n" << s.firstname[y] << setw(10) << s.lastname[y];
					cout << "\n";
					cout << "\n" << s.age[y];
					cout << "\n";
					cout << "\n" << s.year[y] << "\n";
				}
			}
			cout << "\n\n";
			system("pause");
			break;
		case '3':
			while (ans ==false){
			system("CLS");
			string xlastname;
			cout << "== Enter the last name of the student :";
			cin >> xlastname;
			bool found = false;
			char answer;
			for (int i = 0; i < count; i++) {
				if (s.lastname[i].compare(xlastname)==0) {
					cout << "Enter new first name: ";
					cin >> s.firstname[i];
					cout << "Enter new last name: ";
					cin >> s.lastname[i];
					cout << "Enter new age: ";
					cin >> s.age[i];
					cout << "Enter new school year: ";
					cin >> s.year[i];
					found = true;
					break;
				}
			}
				if (found == false) {
					cout << "record not found\n";
				}
				cout << "Modify another record (y/n): ";
				cin >> answer;
				if (answer == 'y') {
					ans = false;
				}
				else if (answer == 'n') {
					ans = true;
				}
				else {
					cout << "Answer is not compatible";
				}
				fflush(stdin);
			}
			break;
		case '4':
			while (ans == false) {
				system("CLS");
				string xlastname;
				cout << "== Enter the last name of the student :";
				cin >> xlastname;
				bool found = false;
				char answer;
				for (int i = 0; i < count; i++) {
					if (s.lastname[i].compare(xlastname) == 0) {
						s.firstname[i] = "0";
						s.lastname[i] = "0";
						s.year[i] = "0";
						s.age[i] = "0";
						
						found = true;
						break;

					}
				}
				if (found == false) {
					cout << "record not found\n";
				}
				cout << "Modify another record (y/n): ";
				cin >> answer;
				if (answer == 'y') {
					ans = false;
				}
				else if (answer == 'n') {
					ans = true;
				}
				else {
					cout << "Answer is not compatible";
				}
				fflush(stdin);
			}
			break;
		case '5':
			cout << "\n\n";
			cout << "\t\t     THANK YOU FOR USING THIS SOFTWARE";
			cout << "\n\n";
			exit(0);
		}
	}
	system("pause");
	return 0;
}