#pragma once

class CommandManager
{
private:
	static CommandManager* mInstance;

private:
	CommandManager();

public:
	~CommandManager();

	static CommandManager* GetInstance();

	void Update();

private:

	void HandleDoExam();
	void HandleDoEnglish();
	void HandleDoMath();
	void HandleStat();
	void HandleCreateStudent();
};

#ifndef FUN_H
#define FUN_H
void gotoxy(int x, int y);
#endif



