using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExamJavaBasicWithCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Garden garden = new Garden();

            garden.AddToGarden();

            garden.Watering(0);
            garden.Watering(40);
            garden.Watering(70);
        }
    }
}
