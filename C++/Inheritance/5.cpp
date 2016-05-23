






	class A
	{
		private:
			int a1;
		public:
			int a2;
		protected:
			int a3;

	};
	
	class B : public A
	{
		private:
			int b1;
		public:	
			int b2;   a2
		protected:
			int b3;   a3

	};
	
	class C : private B
	{
		private:
			int c1;  b2 a2 b3 a3
		public:
			int c2;
		protected:
			int c3;
	};
	
	class D : private C
	{
		private:
			int d1, c2, c3;
		public:	
			int d2;  
		protected:
			int d3; 

	};


	int main()
	{
		A a;

			a.a1 // not allowed

			a.a2 // allowed

			a.a3 // not allowed

		B b;

			b.b2, b.a2

		C c;
			c.c2
	

		D d;
		
			d.d2
	}
