#include<iostream>
#include"Database.h"

using namespace std;
using namespace Records;

int main()
{
	Database myDB;
	Employee emp1 = myDB.addEmployee("G", "W");
	
	Employee emp2 = myDB.addEmployee("AB", "CD");

	Employee& emp3= myDB.addEmployee("EF", "GH");

	myDB.displayAll();
}