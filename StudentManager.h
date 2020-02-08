#pragma once

const int MAX_STUDENTS = 256;

class StudentManager
{
	Student* mStudents[MAX_STUDENTS];
	int mNumStudents;

private:
	static StudentManager* mInstance;

private:
	StudentManager();

public:
	~StudentManager();

	static StudentManager* GetInstance();

	Student* CreateStudent(char *studentName, int mMentalHealth);

	Student* GetStudent(char* studentName);
	

	int GetNumStudents();
};

