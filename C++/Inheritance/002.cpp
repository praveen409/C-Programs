

	#include<iostream>
	#include<cstring>
	
	using namespace std;
	
	class employee
	{
		private:
			int id;
			char name[20];
			char phno[20];
			char email[20];
		public:
			void getemployee(int i,char n[],char p[],char e[])
			{
			 	id = i;
				strcpy(name,n);
				strcpy(phno,p);
				strcpy(email,e);
			}
			
			void putemployee()
			{
			cout <<"ID : "<<id<<"\nNAME : "<<name
				<<"\nPHNO : "<<phno<<"\nEMAIL : "
					<<email<<endl;

			}

	};
	
	class parttime : public employee
	{
		private:
			int hours;
		public:
			void getparttime(int i,char n[],char p[],char e[],int h)
			{
			getemployee(i,n,p,e);

			hours = h;
			}
	
			void putparttime()
			{
			putemployee();
			cout<<"Working Hours : "<<hours<<endl;
			}

	};

	class fulltime : public employee
	{
		private:
			int Days;
		public:
			
			void getfulltime(int i,char n[],char p[],char e[],int d)
			{
			getemployee(i,n,p,e);

			Days = d;
			}
	
			void putfulltime()
			{
			putemployee();
			cout<<"Working Days : "<<Days<<endl;
			}
			

	};





	int main()
	{
		parttime p1;
		fulltime f1;
		
		p1.getparttime(413,"herry","94949494","charrey@gmail.com",128);
		f1.getfulltime(473,"hahdj","98989898","dsfdsse@hasnm.com",123);
		
		p1.putparttime();
		cout<<"\n\n";
		f1.putfulltime();
		cout<<"\n\n";

	return 0;
	}
