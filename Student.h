#pragma once
class Student
{

	char* name;
	int marksCount;
	int* marks;
	void createName(const char* StudentName);
public:

	Student();

	Student(const char* StudentName, const int studentMarksCount);

	Student(const char* StudentName, const int studentMarksCount, const int* studentMarks);

	~Student();

	const char* getName()
	{
		return name;
	}

	int getMarks(int index)
	{
		return marks[index];
	}
	 
	void setName(const char* StudentName);
	void setMark(int mark, int index);
	double getAver();

};