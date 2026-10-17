#include <iostream>
#include<conio.h>
#include<string>
#include "Student.H"

int main()
{
	std::string name;
	double gpa;
	char choice;

	Student student;

	std::cout << "Enter the name of the student ";
	std::getline(std::cin, name);

	std::cout << "Enter " << name << " GPA: ";
	std::cin >> gpa;

	student.SetName(name);
	student.SetGpa(gpa);

	student.Display();
		
	std::cout << "\n" << " Do you wish to create another student (Y/N) ";
	std::cin >> choice;

	if (choice == 'Y' || choice == 'y')
	{

	std::cout << "\N" << "enter the name of the student: ";
		std::getline(std::cin, name);
	
		std::cout << "Enter" << name << " GPA: ";
		std::cin >> gpa;


		Student* pStudent = new Student(name, gpa);
	
		pStudent->Display();

		delete pStudent;
		pStudent = nullptr;

	}

	(void)_getch();
	return 0;
}
