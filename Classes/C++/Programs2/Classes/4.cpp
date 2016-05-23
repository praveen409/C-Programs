




	#include<iostream>
	#include<cstring>
	using namespace std;


	class Mobile
	{
		private:
			char company[20];
			char model[20];
			char os[20];
			float price;

		public:
			void setCompany(char *company)
			{
				strcpy(this->company, company);	
			}

			void setModel(char *model)
			{
				strcpy(this->model, model);
			}

			void setOS(char *os)
			{
				strcpy(this->os, os);
			}

			void setPrice(float price)
			{
				this->price = price;
			}

			char *getCompany()	
			{
				return this->company;
			}

			char *getModel()
			{
				return this->model;
			}
			
			char *getOS()
			{
				return this->os;
			}
	
			float getPrice()
			{
				return this->price;
			}

	};

	int main()
	{
		Mobile m1;

		m1.setCompany("Samsung");
		m1.setModel("Galaxy Y");
		m1.setOS("Android 2.0");
		m1.setPrice(10000);


		cout<<"Company : " << m1.getCompany() << "\n";
		cout<<"Model   : " << m1.getModel()  << "\n";
		cout<<"Operating System : "<< m1.getOS() <<"\n";
		cout<<"Price   : "<< m1.getPrice() <<"\n";

		return 0;  
	}
