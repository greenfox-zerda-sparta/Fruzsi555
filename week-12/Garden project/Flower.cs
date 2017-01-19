using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExamJavaBasicWithCSharp
{
    public class Flower : Plant
    {
        public Flower(string colour)
        {
            this.colour = colour;
            type = "Flower";
            currentwateramount = 0;
            minwateramount = 5;
            canabsorb = 0.75;
        }
    }
}
