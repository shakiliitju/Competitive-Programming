using System;

namespace Input
{
	class Program
	{
		static void Main(string[] args)
		{
			// Type your username and press enter
			Console.WriteLine("Enter your username: ");

			// Create a string variable and get user input from the keyboard and store it in the variable
			string usrename = Console.ReadLine();

			// Print the value of the variable, which will display the input value
			Console.WriteLine("Username is: " + usrename)

			Console.WriteLine("Enter your age: ");
			int age = Convert.ToInt32(Console.ReadLine());
			Console.WriteLine("Your age is: " + age);

			
		}
	}
}