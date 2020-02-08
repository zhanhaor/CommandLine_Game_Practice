#pragma once

const int MAX_NAME_SIZE1 = 150;

class Student
{
private:
	char mStudentName[MAX_NAME_SIZE1];
	int mMentalHealth = 50;


public:
	Student();
	Student(char *studentName);
	virtual ~Student();

	char* GetName() { return mStudentName; }
	int GetMental() { return mMentalHealth; }
	int PrintMental();
	void PrintStatus();


};

