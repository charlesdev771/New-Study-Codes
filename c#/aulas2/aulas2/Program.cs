using System;

namespace aulas2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Age: ");
            int age = Int32.Parse(Console.ReadLine());

            if (age > 18)
            {
                Console.WriteLine("bigger");
            }else
            {
                Console.WriteLine("smaller");
            }
            Console.ReadKey(true);

            int val = 10;

            int[] numbers = new int[val];

            for(int i = 0; i <= val; i++)
            {
                Console.WriteLine(numbers[i]);
                numbers[i] = i * 2;
            }

            foreach(int number in numbers)
            {
                Console.WriteLine(number);
            }


        }
    }
}
