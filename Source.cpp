#include <iostream>
#include "Student.h"
#include <iomanip>
#include <cassert>
using namespace std;

//class Date
//{
//	int m_day;
//	int m_mounth;
//	int m_year;
//public:
//
//	int getDay()
//	{
//		return m_day;
//	}
//	void setDay(int day)
//	{
//		m_day = day;
//	}
//
//	int getMounth()
//	{
//		return m_mounth;
//	}
//	void setMounth(int mounth)
//	{
//		m_mounth = mounth;
//	}
//
//	int getYear()
//	{
//		return m_year;
//	}
//	void setYear(int year)
//	{
//		m_year = year;
//	}
//
//
//};

/*class Fraction
{
private:

	int m_numerator;
	int m_denumerator;
public:

	Fraction(int numerator = 0, int denumerator = 1)
	{
		//do
		//{
		//	if (denumerator == 0)
		//	{
		//		cout << "������ �� ���� ������! ��� �� ����� ����� �������.\n";
		//		cin >> denumerator;
		//	}
		//} while (denumerator == 0);
		assert(denumerator != 0);

		m_numerator = numerator;
		m_denumerator = denumerator;
	}

	int getNumerator()
	{
		return m_numerator;
	}

	int getDenumerator()
	{
		return m_denumerator;
	}



	~Fraction()
	{
		m_numerator;
		m_denumerator;
	}

};*/

int main()
{
	setlocale(LC_ALL, "Rus");


	/*Date d;
	d.setDay(27);
	cout << "����: " << d.getDay() << "\n";

	d.setMounth(10);
	cout <<"�����: " << d.getMounth() << "\n";

	d.setYear(2021);
	cout <<"���: " << d.getYear() << "\n";*/

	//cout << "������������ ��������\n";
	//Student student("������ A.B", 3, new int[3]{ 10,10,9 });
	//cout << "������� ���� " << student.getName() << ":" << fixed << setprecision(2) << student.getAver() << "\n";

	const int size = 2;
	Student* student = new Student[size]
	{
		{"������� 1",3,new int[3]{10, 10, 9}},
		{"������� 2", 3, new int[3]{ 8, 10, 8 }}
	};
	double sum = 0;
	for (Student* stud = student; stud < student + size; stud++)
	{
		double aver = stud->getAver();
		cout << "������� ���� " << stud->getName() << ":" << fixed << setprecision(2) << aver << "\n";
		sum += aver;
	}

	cout << "������� ���� " << ":" << fixed << setprecision(2) << sum / size << "\n";
	delete[] student;


	return 0;
}

