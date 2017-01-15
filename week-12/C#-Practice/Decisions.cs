using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decisions
{
    class Program
    {
        static void Main(string[] args)
        {
            //Console.WriteLine("Big present.");
            //Console.Write("Choose from 1, 2, 3: ");
            //string userValue = Console.ReadLine();

            //string message = "";

            //if (userValue == "1")
            //    message = "Numero uno";
            //else if (userValue == "2")
            //    message = "Numero due";
            //else if (userValue == "3")
            //    message = "Numero tre";
            //else
            //{
            //    message = "Sorry. ";
            //    message = message + "You lose.";
            //}

            //Console.WriteLine(message);

            Console.WriteLine("Big present.");
            Console.Write("Choose from 1, 2, 3: ");
            string userValue = Console.ReadLine();

            string message = (userValue == "1") ? "boat" : "strand of lint";

            Console.WriteLine("You entered {0}, you won a {1}", userValue, message);

            Console.ReadLine();  
        }
    }
}
