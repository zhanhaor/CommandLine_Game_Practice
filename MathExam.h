#pragma once


const int MAX_NAME_SIZE2 = 150;

class MathExam
{

private:
	int ProblemNum;
	char Problem[MAX_NAME_SIZE2];
	char ansA[MAX_NAME_SIZE2];
	char ansB[MAX_NAME_SIZE2];
	char ansC[MAX_NAME_SIZE2];
	char ansD[MAX_NAME_SIZE2];

	char Answer[MAX_NAME_SIZE2] = { 'D','A','A','C','B','Y','y','\0'};


public:
	MathExam();
	MathExam(int ProblemNum, char* Problem, char* AnsKey, char ansA, char ansB, char ansC, char ansD);
	virtual ~MathExam();


	virtual void AskQuestion();




};

