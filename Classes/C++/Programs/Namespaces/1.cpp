

	#include<iostream>

	using namespace std;

	#include "header1.h"

	#include "header2.h"

	using namespace ABCD;		
	
	int main()
	{
		std::cout<<"Working Hours : "<<ABCD::WORK_HOUR<<"\n";

		printAddress();

		Employee e1;

		e1.printEmployee();
			
		
		cout<<"Working Hours : "<<XYZ::WORK_HOUR<<"\n";

		XYZ::printAddress();

		XYZ::Employee e2;

		e2.printEmployee();
			
		cout<<"Day in the year : "<<EFG::DAY_IN_YEAR<<"\n";		
	
		cout<<" I : "<<A::I<<endl;

		cout<<" J : "<<A::J<<endl;
		
		return 0;
	}

	
