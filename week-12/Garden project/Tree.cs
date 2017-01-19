using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExamJavaBasicWithCSharp
{
    public class Tree : Plant
    {
        public Tree(string colour)
        {
            this.colour = colour;
            type = "Tree";
            currentwateramount = 0;
            minwateramount = 10;
            canabsorb = 0.4;
        }
    }
}
