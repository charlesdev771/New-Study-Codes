using System;

namespace aulas3
{
    class Program
    {

        public string name;
        public int age;

        public int soma(int var1, int var2)
        {
            return var1 + var2;
        }











    }

    class Teste
    {

        static void Main(String[] args)
        {
            Program p = new Program();

            int var3 = p.soma(1, 1);

            Console.WriteLine(var3);
            Console.ReadKey();
            
        }


    }



 
}
