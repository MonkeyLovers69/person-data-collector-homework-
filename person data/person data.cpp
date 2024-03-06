#include <iostream>
using namespace std;
int main()
{
	cout << "hello! input your data in console! " << endl;
	class person
	{
	public:
		void person_data() {
			string name;
			int age;
			string country;
			cout << "input your name: ";
			cin >> name;
			system("cls");
			cout << "input your age: ";
			cin >> age;
			system("cls");
			cout << "input your country: ";
			cin >> country;
			system("cls");
			cout << "your age: "<<age << endl <<"your name: " << name << endl << "your country: "<< country <<endl<<"would you like to confirm: ";
			string choice;
			cin >> choice;
			system("cls");
			if (choice == "yes" or choice =="sure" or choice == "Yes" or choice =="Sure" or choice == "YES" or choice == "SURE") {
				cout << "thanks for information!" << endl << "shutting down in process..." << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				exit(true);
}

		}

	};
	person data_collect{};
	data_collect.person_data();
}
