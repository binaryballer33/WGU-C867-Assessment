/* C867Final.cpp
   Scripting and Programming - Applications C867
   Aaron Cuddeback
   Student ID# 000927044
*/

#pragma once
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include "Student.h"

class NetworkStudent : public Student {
public:
	NetworkStudent();

	NetworkStudent(string, string, string, string, int, int*, Degree);

	Degree getDegree() override;

	void print() override;


private:
	Degree degree;
};


#endif //NETWORKSTUDENT_H