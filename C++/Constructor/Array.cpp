



	#include<iostream>
	using namespace std;

	class Array
	{
	    private:
       		    int marks[5];
   		

	    public: 
          
		 void getArray()
	         {
		              int i=0;


		              cout<<"Enter the Marks: ";
             		

			      for(i=0;i<5;i++)
			              cin>>marks[i];
	         }


	        void putArray()
           	{
         	     int i=0;
              		
			cout<<"The Marks are: ";
     

		         for(i=0;i<5;i++)
              			cout<<marks[i]<<"\n";
           	}



	};



	int main()
	{

		Array a1;

		a1.getArray();

		a1.putArray();

		return 0;
	}
