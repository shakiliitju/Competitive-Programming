using System;

namespace Operators
{
	class Program
	{
		static void Main(string[] args)
		{
			int sum1 = 100 + 50;    // 150 (100 + 50)
			int sum2 = sum1 + 250;  // 400 (1509 + 250)
			int sum3 = sum2 + sum2;  // 800 (400 + 400)

			Console.WriteLine(sum1);
			Console.WriteLine(sum2);
			Console.WriteLine(sum3);

			int x = 10;
			x += 5;
			Console.WriteLine(x);

			
		}
	}
}