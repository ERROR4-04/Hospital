#include <iostream>
#include "HospitalHeader.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;


	Hospital::Hospital(string name, int beds, int patients) 
	{
		Hospitalname = name;
		NumOfBeds = beds;
		NumOfPatients = patients;
	}
	void Hospital::addPatient() 
	{
		int count;
		for (int i = 0; i != -1;) 
		{
			cout << endl << "enter number of patients you want to add : ";
			cin >> count;
			if (NumOfPatients + count > NumOfBeds)
				cout << endl << "Number of patients can't be greater than beds availble in the hospital \n";
			else
				NumOfPatients += count; break;
		}
		cout << endl << Hospitalname << " have now " << NumOfBeds << " beds and " << NumOfPatients << " patients ";
	}

	void Hospital::removePatient() 
	{
		int count;
		for (int i = 0; i != -1;) 
		{
			cout << endl << "enter number of patients you want to remove : ";
			cin >> count;
			if (NumOfPatients - count < 0)
				cout << endl << "Number of patients can't be zero  \n";
			else

				NumOfPatients -= count; break;

		}
			cout << endl << Hospitalname << " have now " << NumOfBeds << " beds and " << NumOfPatients << " patients";

	}

	void Hospital::displayinfo() 
	{
		cout << "{ Hello this is " << Hospitalname << " we have " << NumOfBeds << " beds and " << NumOfPatients << " patients }\n\n";
	}
