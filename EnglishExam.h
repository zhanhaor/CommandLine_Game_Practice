#pragma once

const int MAX_NAME_SIZE = 256;

class EnglishExam
{

private:
	int ProblemNum;
	char Problem[MAX_NAME_SIZE];
	char ansA[MAX_NAME_SIZE];
	char ansB[MAX_NAME_SIZE];
	char ansC[MAX_NAME_SIZE];
	char ansD[MAX_NAME_SIZE];

	char Answer[MAX_NAME_SIZE] = { 'C','C','A','D','C','A','C','B','B','B','Y','\0' };


public:
	EnglishExam();
	EnglishExam(int ProblemNum, char* Problem, char* AnsKey, char ansA, char ansB, char ansC, char ansD);
	virtual ~EnglishExam();
	virtual void AskQuestion();




};


