#include "pch.h"
#include "Student.h"
#include <stdio.h>
#include <tchar.h>
#include <SDKDDKVer.h>
#include <iostream>

using namespace std;


Student::Student()
{
}

Student::~Student()
{

}

Student::Student(char *studentName)
{
	strncpy_s(mStudentName, studentName, MAX_NAME_SIZE1);

}

void Student::PrintStatus()
{
	cout << " Student's Name:" << mStudentName << endl;
	cout << " Mental Health Value: " << mMentalHealth << endl;
}

int Student::PrintMental()
{
	return mMentalHealth;
}