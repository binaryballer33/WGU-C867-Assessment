/* C867Final.cpp
   Scripting and Programming - Applications C867
   Aaron Cuddeback
   Student ID# 000927044
*/

#include "pch.h"
#include "SecurityStudent.h"
#include <iostream>

SecurityStudent::SecurityStudent() {}

SecurityStudent::SecurityStudent(string studID, string fiName, string laName, string emAddr, int a, int *nmDays, Degree deg) : Student(studID, fiName, laName, emAddr, a, nmDays) {
	degree = deg;
}

Degree SecurityStudent::getDegree() {
	return degree;
}

void SecurityStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge()
		<< "\t" << "daysInCourse: {"; cout << getNumDays()[0] << ", " << getNumDays()[1] << ", " << getNumDays()[2] << "}";
	cout << " Degree Program: Security" << '\n';
}