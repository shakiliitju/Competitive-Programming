using System;

namespace Variable
{
	class Program
	{
		static void Main (string[] args)
		{
			string name = "John";
			Console.WriteLine(name);

			int myNum = 15;
			Console.WriteLine(myNum);

			myNum = 20;   // myNum is now 20
			Console.WriteLine(myNum);

			double myDoubleNum = 5.99D;
            char myLetter = 'D';
            bool myBool = true;
            string myText = "Hello";

            string firstName = "John ";
            string lastName = "Doe";
            string fullName = firstName + lastName;
            Console.WriteLine(fullName);

            int x = 5, y = 6, z = 50;
            Console.WriteLine(x + y + z);

            

		}
	}
}