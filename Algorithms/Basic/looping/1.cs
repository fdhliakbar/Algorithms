using System;

namespace Nyan
{
    class Program
    {
        static void Main(string[] args)
        {
            // Outer Loop
            for (int i = 1; i <= 2; ++i)
            {
                Console.WriteLine("Outer: " + i);
                // Inner Loop
                for (int j = 1; j <= 3; j++)
                {
                    Console.WriteLine(" Inner: " + j);
                }
                /*
                    Outer: 1
                        Inner: 1
                        Inner: 2
                        Inner: 3
                    Outer: 2
                        Inner: 1
                        Inner: 2
                        Inner: 3
                */
            }
        }
    }
}