using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TrouverLeNombre2
{
    class Program
    {
        static void Main(string[] args)
        {
            Random rand = new Random();
            int nombre_secret = rand.Next(0, 100);

            Console.WriteLine("Devinez le nombre entre 1 et 100. ");

            int guess;

            do
            {
                guess = Convert.ToInt32(Console.ReadLine());

                if (guess > nombre_secret)
                {
                    Console.WriteLine("Trop grand!");
                }
                else if (guess < nombre_secret)
                {
                    Console.WriteLine("Trop petit!");
                }
                else
                {
                    Console.WriteLine("Bien joué!");
                }
            } while (guess != nombre_secret);
        }
    }
}
