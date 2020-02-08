#include "pch.h"
#include "MathExam.h"
#include "EnglishExam.h"
#include "CommandManager.h"
#include <iostream>

using namespace std;


MathExam::MathExam()
{
}

MathExam::MathExam(int ProblemNum, char* Problem, char* AnsKey, char ansA, char ansB, char ansC, char ansD)
{

}

MathExam::~MathExam()
{
	cout << "~MathExam";
}

void MathExam::AskQuestion()
{
	int MentalHealth   = 0;

	char szAnswer[MAX_NAME_SIZE2];

	cout << "MentalHealth is" << MentalHealth << endl;
	cout << "Question1" << endl;
	cout << "Find the magnitude of WX with W(1,10,1) and X(3, 10, 2).Write your answer in simplified form." << endl;
	cout << "The distance between the two MentalHealth   (x1,y1,z1) and (x2,y2,z2) is given by the distance formula." << endl;
	cout << "d =sqrt[(x2每x1)^2 + (y2每y1)^2 + (z2每z1)^2]" << endl;
	cout << " A. 2" << endl;
	cout << " B. 3" << endl;
	cout << " C. 4" << endl;
	cout << " D. 5" << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[0];
	if (strnlen_s(szAnswer, MAX_NAME_SIZE2) > 0 && szAnswer[0] == Answer[0]) {
		MentalHealth   += 10;
		cout << "MentalHealth is " << MentalHealth   << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE2) > 0 && szAnswer[0] != Answer[0])
	{
		MentalHealth   -= 10;
		cout << "MentalHealth is" << MentalHealth   << endl;
	}
	
	system("CLS");
	cout << "MentalHealth is" << MentalHealth << endl;
	cout << "Question2" << endl;
	cout << "How many radians is 60～?" << endl;
	cout << "The distance between the two MentalHealth   (x1,y1,z1) and (x2,y2,z2) is given by the distance formula." << endl;
	cout << "Hint: To convert from degrees to radians, multiply by the conversion factor ?? radians/180～." << endl;
	cout << " A. ???/3 radians" << endl;
	cout << " B. ???/6 radians" << endl;
	cout << " C. ???/2 radians" << endl;
	cout << " D. ???/4 radians" << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[1];
	if (strnlen_s(szAnswer, MAX_NAME_SIZE2) > 0 && szAnswer[1] == Answer[1]) {
		MentalHealth   += 10;
		cout << "MentalHealth is " << MentalHealth   << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE2) > 0 && szAnswer[1] != Answer[1])
	{
		MentalHealth   -= 10;
		cout << "MentalHealth is" << MentalHealth   << endl;
	}
	
	system("CLS");
	cout << "MentalHealth is" << MentalHealth << endl;
	cout << "Question3" << endl;
	cout << "Use the imaginary number ?? to rewrite the expression below as a complex number. Simplify all radicals." << endl;
	cout << "每sqrt(-16)" << endl;
	cout << "Hint: The imaginary number ?? satisfies: ??2 =每1" << endl;
	cout << " A. -4i " << endl;
	cout << " B. ?-2.5i" << endl;
	cout << " C. 1i?" << endl;
	cout << " D. ?6i" << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[2];

	if (strnlen_s(szAnswer, MAX_NAME_SIZE2) > 0 && szAnswer[2] == Answer[2]) {
		MentalHealth   += 10;
		cout << "MentalHealth is " << MentalHealth   << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE2) > 0 && szAnswer[2] != Answer[2])
	{
		MentalHealth   -= 10;
		cout << "MentalHealth is" << MentalHealth   << endl;
	}
	
	system("CLS");
	cout << "MentalHealth is" << MentalHealth << endl;
	cout << "Question4" << endl;
	cout << "Solve for d:    sqrt(=16+d)= 16" << endl;
	cout << "Hint: To solve for a variable, use inverse operations to undo the operations in the equation. Be sure to do the same operation to both sides of the equation." << endl;
	cout << " A.16 " << endl;
	cout << " B.256 ?" << endl;
	cout << " C.272 ?" << endl;
	cout << " D.288 ?" << endl;
	cout << " What's your Answer: " << endl;

	cin >> szAnswer[3];

	if (strnlen_s(szAnswer, MAX_NAME_SIZE2) > 0 && szAnswer[3] == Answer[3]) {
		MentalHealth   += 10;
		cout << "MentalHealth is " << MentalHealth   << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE2) > 0 && szAnswer[3] != Answer[3])
	{
		MentalHealth   -= 10;
		cout << "MentalHealth is" << MentalHealth   << endl;
	}
	
	system("CLS");
	cout << "MentalHealth is" << MentalHealth << endl;
	cout << "Question5" << endl;
	cout << "Find the complex conjugate of the given number: -2 + 3i" << endl;
	cout << "Hint : Two complex numbers with equal real parts and opposite imaginary parts are called complex conjugates." << endl;
	cout << "a + b??↘complex conjugates↙a每b??" << endl;
	cout << " A. -2+3i" << endl;
	cout << " B. -2-3i?" << endl;
	cout << " C. 2+3i ?" << endl;
	cout << " D. ?2-3i" << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[4];
	if (strnlen_s(szAnswer, MAX_NAME_SIZE2) > 0 && szAnswer[4] == Answer[4]) {
		MentalHealth   += 10;
		cout << "MentalHealth is " << MentalHealth   << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE2) > 0 && szAnswer[4] != Answer[4])
	{
		MentalHealth   -= 10;
		cout << "MentalHealth is" << MentalHealth   << endl;
	}
	
	system("CLS");
	if (MentalHealth >= 30)
	{
		cout << "You are really good student!!" << endl;
		CommandManager::GetInstance()->Update();
	}
	else 
	{
		cout << "You fail the EXAM!! Try the other one!" << endl;
		cout << "You fail the EXAM!! Try the other one!" << endl;
		cout << "You fail the EXAM!! Try the other one!" << endl;
		cout << "Do you want to try English exam to enhance you mental health? (Y/N)" << endl;
		cin >> szAnswer;
		if (strnlen_s(szAnswer, MAX_NAME_SIZE2) > 0 && szAnswer[5] == Answer[5])
		{
			cout << "Go ENG Exam" << endl;
			EnglishExam* pEnglishExam = new EnglishExam;
			pEnglishExam->AskQuestion();
		}
		else
		{
			CommandManager::GetInstance()->Update();
		}
	}


}
