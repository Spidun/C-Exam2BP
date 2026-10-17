#pragma once


#include <iostream>
#include<string>


class Student
{
private:
	std::string m_name;
	double m_gpa;

public:
	Student()
	{
		m_name = "Unkown";
		m_gpa = 0;
	}

	Student(const std::string name, const double gpa)
	{
		SetName(name);
		SetGpa(gpa);
	}

	void SetName(const std::string name)
	{
		m_name = name;
	}

	void SetGpa (const double gpa)
	{
		m_gpa = gpa;
	}

	void Display()
	{
		std::cout << m_name << "has a GPA of "
			<< m_gpa << ".\n";
	}
};