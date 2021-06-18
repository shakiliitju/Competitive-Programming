using System;

namespace Typecasting
{
	class Program
	{
		static void Main(string[] args)
		{
			int myInt = 9;
			double myDouble = myInt;       // Automatic casting: int to double

			Console.WriteLine(myInt);     // Output 9
			Console.WriteLine(myDouble);  // Output 9.0

			double mydouble = 9.78;
            int myint = (int) mydouble;    // Manual casting: double to int

            Console.WriteLine(mydouble);   // Outputs 9.78  
            Console.WriteLine(myint);      // Outputs 9

            int Int = 10;
            double Double = 5.25;
            bool Bool = true;

            Console.WriteLine(Convet.ToString(Int));     // convert int to string
            Console.WriteLine(Convet.ToDouble(Int));     // convert int to double
            Console.WriteLine(Convet.ToInt32(Double));     // convert double to int
            Console.WriteLine(Convet.ToString(Bool));     // convert bool to string

            

		}
	}
}