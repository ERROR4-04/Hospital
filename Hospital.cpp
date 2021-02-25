#include <iostream>
#include"HospitalHeader.h"
using std::cout;

using std::endl;
int main()
{
	int counter, choice;

	for (choice = 0; choice != -1;)
	{
		cout << endl << "please chose hospital 1 , 2 or 3  : -1 to exit program : ";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
		{
			Hospital obj1("HospitalOne", 8, 4);
			obj1.displayinfo();


			for (counter = 0; counter != -1;)
			{

				cout << endl << " chose 1 to add patients or 2 to remove patients or -1 to exit this hospital : ";
				cin >> counter;
				if (counter == 1)
					obj1.addPatient();
				else if (counter == 2)
					obj1.removePatient();
				else if (counter == -1)
					break;
				else cout << endl << "wrong input";
			}
			break;
		}/*end of case 1*/
		case 2:
		{
			Hospital obj2("HospitalTwo", 6, 1);
			obj2.displayinfo();

			for (counter = 0; counter != -1;)
			{
				cout << endl << " chose 1 to add patients or 2 to remove patients or -1 to exit this hospital : ";
				cin >> counter;
				if (counter == 1)
					obj2.addPatient();
				else if (counter == 2)
					obj2.removePatient();
				else if (counter == -1)
					break;
				else cout << endl << "wrong input";
			}
			break;
		}/*end of case 2*/
		case 3:
		{
			Hospital obj3("HospitalThree", 13, 7);
			obj3.displayinfo();
			for (counter = 0; counter != -1;)
			{
				cout << "\n chose 1 to add patients or 2 to remove patients or -1 to exit this hospital : ";
				cin >> counter;
				if (counter == 1)
					obj3.addPatient();
				else if (counter == 2)
					obj3.removePatient();
				else if (counter == -1)
					break;
				else cout << endl << "wrong input";
			}
			break;
		}/*end of case 3*/
		}/*end of switch*/


	}/*end of loop*/

	return 0;
}/*end of main*/