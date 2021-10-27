#include <iostream>
#include "Student.h"
using namespace std;

Student::Student()
{
	name = nullptr;
	marks = nullptr;
	marksCount = 0;
}
Student::Student(const char* StudentName, const int studentMarksCount)
{
	createName(StudentName);
	marks = new int[studentMarksCount];
	for (int i = 0; i < studentMarksCount; i++)
	{
		marks[i] = 0;
	}
	marksCount = studentMarksCount;

}

Student::Student(const char* StudentName, const int studentMarksCount, const int* studentMarks)
{
	createName(StudentName);
	marks = new int[studentMarksCount];
	for (int i = 0; i < studentMarksCount; i++)
	{
		marks[i] = studentMarks[i];
	}
	marksCount = studentMarksCount;
}

Student::~Student()
{
	if (name!=nullptr)
		delete[] name;
	

	if (marks != nullptr)
		delete[] marks;

	cout << "Отработал деструктор\n";
	system("pause");
}


void Student::createName(const char* StudentName)
{
	int nameLeght = strlen(StudentName);
	name = new char[nameLeght + 1];
	for (int i = 0; i < nameLeght; i++)
	{
		name[i] = StudentName[i];
	}
}

void Student::setName(const char* StudentName)
{
	delete[] name;
	createName(StudentName);
}

void Student::setMark(int mark, int index)
{
	if (index < 0 || index >= marksCount)
	{
		return;
	}
	if (index < 1 || index >12)
	{
		mark = 0;
	}
	marks[index] = mark;
}

double Student::getAver()
{
	double sum = 0;
	for (int i = 0; i < marksCount; i++)
	{
		sum += marks[i];
	}
	return sum /= marksCount;

}
