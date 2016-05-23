
	// Generic Classes
	#include<iostream>
	using namespace std;

	template<class T> 
	class Stack
	{
		private:

			T s[10];
			int top;

		public:

			Stack()
			{
				top = -1;
				cout<<"Stack is created....\n";
			}

			void push(T x)
			{
				top++;
				s[top] = x;
				cout<<x<<" is pushed....\n";

			}

			void pop()
			{
				cout<<s[top]<<" is poped....\n";
				top--;
			}

			void display()
			{
				int i;
				for(i=top; i >=0 ; i--)
				cout<<s[i]<<" ";
				cout<<endl;
			}				

	};

	int main()
	{
		Stack<int> s1;

		s1.push(12);
		s1.push(34);

		s1.display();
 
		s1.pop();

		s1.display();
	
		return 0;
	}



