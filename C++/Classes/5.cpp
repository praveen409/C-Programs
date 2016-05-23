




	#include<iostream>
	#include<cstring>
	using namespace std;


	class Train
	{
		private:
			char name[20];
			char origin[20];
			char destination[20];
			float fare;

		public:
			void setTrain(char *n, char *o, char *d, float f);
			void putTrain();

	};


	void Train :: setTrain(char *n, char *o, char *d, float f)
	{
		strcpy(name, n);
		strcpy(origin, o);
		strcpy(destination, d);	
		fare = f;
	}

	void Train :: putTrain()
	{
		cout<<name<<"\t"<<origin<<"\t"<<destination<<"\t"<<fare<<"\n";
	}


	int main()
	{
		Train t[3];

		t[0].setTrain("Pinakini  Express", "Chennai", "vijaywada", 120);
		t[1].setTrain("Vaigai    Express", "Chennai", "Madurai  ", 110);
		t[2].setTrain("Brindavan Express", "Chennai", "Banglore ", 145);

		cout<<"Name \t Origin \t Destination \t Fare \n";
		cout<<"=======================================\n";

		for(int i=0; i<3; i++)
		{
			t[i].putTrain();
		}

		return 0;
	}
