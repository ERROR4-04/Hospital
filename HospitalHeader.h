#pragma once
#include <iostream>
using std::string;

class Hospital {
public:
	Hospital(string name, int beds, int patients);
	void addPatient();
	void removePatient();
	void displayinfo();
private:
	string Hospitalname;
	int NumOfBeds;
	int NumOfPatients;
};
