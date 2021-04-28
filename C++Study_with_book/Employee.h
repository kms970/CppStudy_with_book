#pragma once
#include<string>
namespace Records {
	const int kDefaultStartingSalary = 30000;//k는 상수를 의미하는 독일어 Konstant의 첫 글자인 'k'를 상수 앞에 붙이는 관례를 따름

	class Employee
	{
	public:
		Employee() = default;
		Employee(const std::string& firstName, const std::string& lastName);

		void promote(int raseAmount = 1000);
		void demote(int demeritAmount = 1000);
		void hire();
		void fire();
		void display() const;

		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;

		void setEmployeeNumber(int employeeNumber);
		int getEmployeeNumber() const;

		void setSalary(int newSalary);
		int getSalary() const;

		bool isHired() const;

	private:
		std::string mFirstName;
		std::string mLastName;
		int mEmployeeNumber = -1;
		int mSalary = kDefaultStartingSalary;
		bool mHired = false;
	};
}