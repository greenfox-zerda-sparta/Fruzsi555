using System;
using System.IO;
using System.Diagnostics;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using MailKit;
using MailKit.Net.Pop3;

namespace WpfApplication1
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            ok.MouseLeftButtonUp += new MouseButtonEventHandler(ok_Click);
        }
        private void ok_Click(object sender, RoutedEventArgs e)
        {
            //ProcessStartInfo startInfo = new ProcessStartInfo();
            //startInfo.FileName = @"D:\green_fox_stuff\repos\cs_practice_and_poc\SimpleIMAP4\SimpleIMAP4\bin\Debug\SimpleIMAP4.exe";
            //startInfo.Arguments = @"/a " + textBox.Text + " " + passwordBox.Password;
            //Process.Start(startInfo);
            string eMailAdress = emailAddress.Text;
            string password = passwordBox.Password;

            using (var client = new Pop3Client())
            {
                client.Connect("pop.gmail.com", 995);

                client.AuthenticationMechanisms.Remove("XOAUTH2");
                client.Authenticate("zerdaspartaperidot@gmail.com", "Frujudmat999");

                for (int i = 0; i < client.Count; i++)
                {
                    var message = client.GetMessage(i);

                    message.WriteTo(string.Format($"{0}.msg", i));

                    var testText = message.GetTextBody(MimeKit.Text.TextFormat.Plain);
                    richTextBox.Selection.Text += message.Date + " Subject: " + message.Subject + " Message: " + testText;

                    //client.DeleteMessage(i);
                }
                client.Disconnect(true);
            }
        }
    }
}
