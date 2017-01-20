using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MailKit.Net.Pop3;
using MailKit;

namespace Pop3ClientProject
{
    class Program
    {
        static void Main(string[] args)
        {
            using (var client = new Pop3Client())
            {
                client.Connect("pop.gmail.com", 995);

                client.AuthenticationMechanisms.Remove("XOAUTH2");
                client.Authenticate("zerdaspartaperidot@gmail.com", "password"); // Authenticate --> azonosito mechanizmus, ami nincs a google-nel, ezert meg korabban le kell allitani

                for (int i = 0; i < client.Count; i++)
                {
                    var message = client.GetMessage(i);

                    message.WriteTo(string.Format("{0}.msg", i));

                    client.DeleteMessage(i);
                }

                client.Disconnect(true);
            }
        }
    }
}