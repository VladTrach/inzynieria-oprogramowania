//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TStudent.h
//  @ Date : 05.03.2018
//  @ Author : 
//
//


#if !defined(_TSTUDENT_H)
#define _TSTUDENT_H


class TStudent {
public:
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
private:
	string studentName;
	int studentAge;
};

#endif  //_TSTUDENT_H
