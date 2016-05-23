



	#include<iostream>
	using namespace std;




	namespace ProjectA
	{
		void message()
		{
			cout<<"Message from Project A....\n";
		}
	}



	namespace ProjectB
	{
		void message()
		{
			cout<<"Message from Project B.....\n";
		}
	}






	using namespace ProjectB;

	int main()
	{
		message();

		ProjectA :: message();

		message();
                    
                            
                
		return 0;
	}	


