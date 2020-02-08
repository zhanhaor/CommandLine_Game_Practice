#include "pch.h"
#include "CommandManager.h"
#include "MathExam.h"
#include "EnglishExam.h"
#include "Student.h"
#include "StudentManager.h"

#include <iostream>

using namespace std;

EnglishExam::EnglishExam()
{

}

EnglishExam::EnglishExam(int ProblemNum, char* Problem, char* AnsKey, char ansA, char ansB, char ansC, char ansD)
{
	
}

EnglishExam::~EnglishExam()
{
	cout << "EnglishExam";
}

void EnglishExam::AskQuestion()
{
	int MentalHealth= 50;
	char choose1 = ' ';
	char szAnswer[MAX_NAME_SIZE];

	//Question 1
	cout << "MentalHealth is :  " << MentalHealth << endl;
	cout << "Question1" << endl;
	cout << "What is the longest that an elephant has lived? (That we know of)" << endl;
	cout << " A. 17 years" << endl;
	cout << " B. 49 years" << endl;
	cout << " C. 86 years" << endl;
	cout << " D. 142 years" << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[0];

	if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[0] == Answer[0]) {
		MentalHealth += 10;
		cout << "MentalHealth is :  " << MentalHealth << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[0] != Answer[0])
	{
		MentalHealth -= 10;
		cout << "MentalHealth is : " << MentalHealth << endl;
	}
	system("CLS");

	//Question 2
	cout << "MentalHealth is :  " << MentalHealth << endl;
	cout << "Question2" << endl;
	cout << "To?my?great?frustration,?the?computer?I?had?____?went?wrong?again." << endl;
	cout << " A. To repair " << endl;
	cout << " B. repairing" << endl;
	cout << " C. had repaired" << endl;
	cout << " D. repaired" << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[1];

	if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[1] == Answer[1]) {
		MentalHealth += 10;
		cout << "MentalHealth is :  " << MentalHealth << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[1] != Answer[1])
	{
		MentalHealth -= 10;
		cout << "MentalHealth is : " << MentalHealth << endl;
	}
	
	system("CLS");

	//Question 3
	cout << "MentalHealth is :  " << MentalHealth << endl;
	cout << "Question3 " << endl;
	cout << "He would rather read it ten times than cite it,_________?" << endl;
	cout << " A. mustn' he" << endl;
	cout << " B. can't he" << endl;
	cout << " C. doesn't he" << endl;
	cout << " D. wouldn't he" << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[2];
	if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[2] == Answer[2]) {
		MentalHealth += 10;
		cout << "MentalHealth is :  " << MentalHealth << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[2] != Answer[2])
	{
		MentalHealth -= 10;
		cout << "MentalHealth is : " << MentalHealth << endl;
	}
	
	system("CLS");

	//Question 4
	cout << "MentalHealth is :  " << MentalHealth << endl;
	cout << "Question4" << endl;
	cout << "He ______ the road by the lake because it was the nearest way to the cottage." << endl;
	cout << " A. made" << endl;
	cout << " B. took" << endl;
	cout << " C. walked" << endl;
	cout << " D. went" << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[3];
	if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[3] == Answer[3]) {
		MentalHealth += 10;
		cout << "MentalHealth is :  " << MentalHealth << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[3] != Answer[3])
	{
		MentalHealth -= 10;
		cout << "MentalHealth is : " << MentalHealth << endl;
	}
	
	system("CLS");

	//Question 5
	cout << "MentalHealth is :  " << MentalHealth << endl;
	cout << "Question5" << endl;
	cout << "There seemed to _______ no sign of life under the fallen building." << endl;
	cout << " A.leave " << endl;
	cout << " B.feel " << endl;
	cout << " C.have " << endl;
	cout << " D.exist " << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[4];
	if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[4] == Answer[4]) {
		MentalHealth += 10;
		cout << "MentalHealth is :  " << MentalHealth << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[4] != Answer[4])
	{
		MentalHealth -= 10;
		cout << "MentalHealth is : " << MentalHealth << endl;
	}
	
	system("CLS");

	//Question 6
	cout << "MentalHealth is :  " << MentalHealth << endl;
	cout << "Question6" << endl;
	cout << "One word frees us _______ all the weight and pain in life, that word is love." << endl;
	cout << " A.for " << endl;
	cout << " B.without " << endl;
	cout << " C.against " << endl;
	cout << " D. of" << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[5];
	if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[5] == Answer[5]) {
		MentalHealth += 10;
		cout << "MentalHealth is :  " << MentalHealth << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[5] != Answer[5])
	{
		MentalHealth -= 10;
		cout << "MentalHealth is : " << MentalHealth << endl;
	}
	
	system("CLS");
	//Question 7
	cout << "MentalHealth is :  " << MentalHealth << endl;
	cout << "Question7" << endl;
	cout << "We didn't know we passed by each other because we could hardly ______ anything in the fog." << endl;
	cout << " A.make a fool of " << endl;
	cout << " B.make a point of " << endl;
	cout << " C.make for " << endl;
	cout << " D.make out " << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[6];
	if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[6] == Answer[6]) {
		MentalHealth += 10;
		cout << "MentalHealth is :  " << MentalHealth << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[6] != Answer[6])
	{
		MentalHealth -= 10;
		cout << "MentalHealth is : " << MentalHealth << endl;
	}

	system("CLS");

	//Question 8
	cout << "MentalHealth is :  " << MentalHealth << endl;
	cout << "Question8" << endl;
	cout << "The superstar was accused of  _______  adcertising for a well-known brand." << endl;
	cout << " A.wrong " << endl;
	cout << " B.false " << endl;
	cout << " C.mistaken " << endl;
	cout << " D.error " << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[7];
	if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[7] == Answer[7]) {
		MentalHealth += 10;
		cout << "MentalHealth is :  " << MentalHealth << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[7] != Answer[7])
	{
		MentalHealth -= 10;
		cout << "MentalHealth is : " << MentalHealth << endl;
	}
	
	system("CLS");
	//Question 9
	cout << "MentalHealth is :  " << MentalHealth << endl;
	cout << "Question9" << endl;
	cout << "The government will provide temporary ____ for the victim to survive after the earthquake." << endl;
	cout << " A. apartments" << endl;
	cout << " B. accomodation" << endl;
	cout << " C.entertainment " << endl;
	cout << " D.public house " << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[8];
	if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[8] == Answer[8]) {
		MentalHealth += 10;
		cout << "MentalHealth is :  " << MentalHealth << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[8] != Answer[8])
	{
		MentalHealth -= 10;
		cout << "MentalHealth is : " << MentalHealth << endl;
	}

	
	system("CLS");

	//Question 10
	cout << "MentalHealth is :  " << MentalHealth << endl;
	cout << "Question10" << endl;
	cout << "The shame left a ___ on him, so it would be hard for him to find a job." << endl;
	cout << " A. mark" << endl;
	cout << " B. sign" << endl;
	cout << " C. signal " << endl;
	cout << " D. track" << endl;
	cout << " What's your Answer: " << endl;
	cin >> szAnswer[9];
	if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[9] == Answer[9]) {
		MentalHealth += 10;
		cout << "MentalHealth is :  " << MentalHealth << endl;
	}
	else if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[9] != Answer[9])
	{
		MentalHealth -= 10;
		cout << "MentalHealth is : " << MentalHealth << endl;
	}

	system("CLS");
	if (MentalHealth >= 60)
	{
		cout << "You are really good student!!" << endl;
		
	}
	else
	{
		cout << "You fail the EXAM!! Try the other one!" << endl;
		cout << "You fail the EXAM!! Try the other one!" << endl;
		cout << "You fail the EXAM!! Try the other one!" << endl;
		cout << "Your Mental Health is: " << MentalHealth << endl;
	
		cout << "Do you want to try Math exam to enhance you mental health? (Y/N)" << endl;
		cin >> szAnswer[10];
		if (strnlen_s(szAnswer, MAX_NAME_SIZE) > 0 && szAnswer[10] == Answer[10])
		{
			MathExam* pMathExam = new MathExam;
			pMathExam->AskQuestion();
		}
		else
		{
			CommandManager::GetInstance()->Update();
		}
	}
	


	
}