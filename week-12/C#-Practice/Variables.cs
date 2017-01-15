using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Variables
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Type your last name: ");
            string myLastName = Console.ReadLine();

            Console.WriteLine("Hello, " + myLastName);
            Console.ReadLine();
        }
    }
}
