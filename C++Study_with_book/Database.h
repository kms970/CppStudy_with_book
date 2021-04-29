#pragma once
#include<iostream>
#include<vector>
#include"Employee.h"

namespace Records
{
	const int kFirstEmployeeNumber = 1000;

	class Database
	{
	public:
		Employee& addEmployee(const std::string& firstName, const std::string& lastName); //&가 붙지 않으면 객체 생성비용 발생 즉, 속도 저하 (결과의 새로운 클론을 원할때 사용)
		Employee& getEmployee(int employeeNumber);
		Employee& getEmployee(const std::string& firstName, const std::string& lastName);

		void displayAll() const;
		void displayCurrent() const;
		void displayFormer() const;

	private:
		std::vector<Employee> mEmployees;
		int mNextEmployeeNumber = kFirstEmployeeNumber;
	};
}