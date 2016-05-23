      


	 #include<iostream>
         #include<string.h>
       
       using namespace std;
       class Account
       {
         private:
                char *accno;
                char *name;
                int balance;
         public:
                Account(char *acno,char *n,int bal)
                {
                 int length,len;
                 length=strlen(accno);
                 accno=new char[length+1]; 
                 strcpy(accno,acno);
                 len=strlen(n);
                 name=new char[len+1];
                 strcpy(name,n);
                 balance=bal;
                }
                ~Account()
                {
                 cout<<"account deleted\n";
                 delete[] accno;
                 accno=NULL;
                 delete[] name;
                 name=NULL;
                } 
       void withdraw(int v)
       {
         balance=balance-v;
       }
       void deposit(int d)
       {
        balance=balance+d;
       }
       int getBalance()  
       {
        return balance;
       }
       char* getName()
       {
        	return name;
       } 
       char *getAccountNumber()
       {
        	return accno; 
       }
      };




    
	int main()
	{
		Account a1 = Account("1234", "Kashif", 2000);

		a1.withdraw(1000);
		cout<<"Balance is : "<<a1.getBalance()<<"\n";
		cout<<"Account Holder Name : "<<a1.getName()<<"\n";
		
		a1.deposit(3000);
		cout<<"Balance is : "<<a1.getBalance()<<"\n";

		cout<<"Account Number 	   : "<<a1.getAccountNumber()<<"\n";		
		return 0;

	}
