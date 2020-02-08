#include "pch.h"
#include <stdio.h>
#include <tchar.h>
#include <SDKDDKVer.h>

#include "CommandManager.h"
#include "Student.h"
#include "StudentManager.h"
#include "EnglishExam.h"
#include <iostream>

using namespace std;

StudentManager* StudentManager::mInstance = NULL;

StudentManager::StudentManager()
{
	mNumStudents = 0;
}

StudentManager::~StudentManager()
{

}

StudentManager* StudentManager::GetInstance()
{
	if (mInstance == NULL) {
		mInstance = new StudentManager();
	}

	return mInstance;
}

int StudentManager::GetNumStudents()
{
	return mNumStudents;
}

Student* StudentManager::GetStudent(char* studentName)
{
	// use a for loop, iterate until you find the student with the
	// right name, and return it.
	for (int i = 0; i < mNumStudents; i++)
	{
		if (strncmp(mStudents[i]->GetName(), studentName, MAX_NAME_SIZE1) == 0)
		{
			return mStudents[i];
		}
	}

	return NULL;
}

Student* StudentManager::CreateStudent(char *studentName, int MentalHealth)
{
	cout << "Name: " << studentName << endl;
	cout << "MentalHealth: " << MentalHealth << endl;
	
	Student* pStudent = new Student(studentName);

	mStudents[mNumStudents++] = pStudent;
	return pStudent;
}

