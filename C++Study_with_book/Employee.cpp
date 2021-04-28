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

	void Employee::demote(int demeritAmount)
	{
		setSalary(getSalary() - demeritAmount);
	}

	void Employee::hire()
	{
		mHired = true;
	}

	void Employee::fire()
	{
		mHired = false;
	}

	void Employee::display()const
	{
		cout << "EmployeeName: " << getLastName() << "," << getFirstName() << endl;
		cout << "-----------------------------" << endl;
		cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
		cout << "EmployeeNumber: " << getEmployeeNumber() << endl;
		cout << "EmployeeSalary: $" << getSalary() << endl;
		cout << endl;
	}

	const string& Employee::getFirstName()const
	{
		return mFirstName;
	}

	void Employee::setFirstName(const string& firstName)
	{
		mFirstName = firstName;
	}

	const string& Employee::getLastName()const
	{
		return mLastName;
	}

	void Employee::setLastName(const string& lastName)
	{
		mLastName = lastName;
	}

	int Employee::getEmployeeNumber()const
	{
		return mEmployeeNumber;
	}

	void Employee::setEmployeeNumber(int employeeNumber)
	{
		mEmployeeNumber = employeeNumber;
	}

	int Employee::getSalary()const
	{
		return mSalary;
	}

	void Employee::setSalary(int newSalary)
	{
		mSalary = newSalary;
	}

	bool Employee::isHired()const
	{
		if (mHired) return true;
		else return false;
	}
}