

	#include<iostream>
	using namespace std;

	int main(int argc,char *argv[])
	{
	int year,month,days,hours,mints,sec;

	cout << "Enter the years : ";
	cin >> year;
	
	month = year * 12;

	days = year * 365;
	
	hours = days * 24;
	
	mints = hours * 60;
	
	sec = mints * 60;
	
	cout << " Years	\t:"<< year <<"\n";
	cout << " Months \t:"<< month <<"\n";
	cout << " Days	\t:"<< days <<"\n";
	cout << " Hours	\t:"<< hours <<"\n";
	cout << " Minits \t:"<< mints <<"\n";
	cout << " Seconds\t:"<< sec <<endl;

	return 0;
	}

