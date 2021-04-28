#include<iostream>
#include"Employee.h"

using namespace std;

namespace Records {
	Employee::Employee(
		const std::string& firstName,
		const std::string& lastName)
		:mFirstName(firstName), mLastName(lastName) {}

	void Employee::promote(int raiseAmount)
	{
		setSalary(getSalary() + raiseAmount);
	}
}