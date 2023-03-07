#ifndef MEDIO_H
#define MEDIO_H

#include<iostream>
#include<sstream>
using namespace std;
class Medio {
protected:
	string code;
	string name;
public:
	Medio(string , string );
	virtual ~Medio();

	string getCode();
	string getName();

	void setCode(string);
	void setName(string);


	virtual string toString() = 0;
};

#endif // !MEDIO_H
