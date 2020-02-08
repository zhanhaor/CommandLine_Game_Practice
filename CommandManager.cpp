#include "pch.h"
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <SDKDDKVer.h>
#include "Student.h"
#include "StudentManager.h"
#include "CommandManager.h"
#include "EnglishExam.h"
#include "MathExam.h"

#include <iostream>


using namespace std;

const int MAX_COMMAND_LENGTH = 256;

CommandManager* CommandManager::mInstance = NULL;

CommandManager::CommandManager()
{

}

CommandManager::~CommandManager()
{

}

CommandManager* CommandManager::GetInstance()
{
	if (mInstance == NULL) {
		mInstance = new CommandManager();
	}

	return mInstance;
}

void CommandManager::HandleStat()
{
	char sName[MAX_NAME_SIZE];
	cout << "=======  STATS OF STUDENT - BEGIN ============" << endl;
	cout << "What is the Student's name?" << endl;
	cin >> sName;

	Student* pStudent = StudentManager::GetInstance()->GetStudent(sName);

	if (pStudent != NULL) {
		pStudent->PrintStatus();
	}
	else {
		cout << "Can not find student" << sName << endl;
	}

	cout << "=======  STATS OF  STUDENT - END ============" << endl;

}

void CommandManager::HandleCreateStudent()
{
	char mStudentName[MAX_COMMAND_LENGTH];
	int mMentalHealth = 50;
	
	cout << "What's the name of student?" << endl;
	cin >> mStudentName;

	StudentManager::GetInstance()->CreateStudent(mStudentName, mMentalHealth);
}

void CommandManager::HandleDoExam()
{
	char type[MAX_COMMAND_LENGTH];

	cout << "What Type of exams to do? (English / Math)" << endl;
	cin >> type;

	if (strncmp(type, "English", MAX_COMMAND_LENGTH) == 0)
	{
		HandleDoEnglish();
	}
	else if (strncmp(type, "Math", MAX_COMMAND_LENGTH) == 0)
	{
		HandleDoMath();
	}

}

void CommandManager::HandleDoEnglish()
{
	cout << "<<English>>" << endl;
	EnglishExam*pEnglishExam = new EnglishExam;
	pEnglishExam->AskQuestion();

}

void CommandManager::HandleDoMath()
{
	cout << "<<Math>>" << endl;
	MathExam*pMathExam = new MathExam;
	pMathExam->AskQuestion();

}

void CommandManager::Update()
{
	char command[MAX_COMMAND_LENGTH];

	while (1) {
		cout << endl;
		cout << "What do you want to do? " << endl;
		cin >> command;

		if (strncmp(command, "exit", MAX_COMMAND_LENGTH) == 0)
		{
			break;
		}
		else if (strncmp(command, "start", MAX_COMMAND_LENGTH) == 0)
		{
			HandleCreateStudent();
		}		
		else if (strncmp(command, "DoExam", MAX_COMMAND_LENGTH) == 0)
		{
			HandleDoExam();
		}		
		else if (strncmp(command, "stat", MAX_COMMAND_LENGTH) == 0)
		{
			HandleStat();
		}

	}
}

void gotoxy(int x, int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord; //coord 
	coord.X = x; //x
	coord.Y = y; //y
	SetConsoleCursorPosition(handle, coord); 
}

