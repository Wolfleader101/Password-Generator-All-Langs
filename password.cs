using System;

namespace PasswordGenerator
{
  class Program
  {
        const string characters = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890`~!@#$%^&*()_+{}|\\;:,<.>/?";
        static int StringLength = characters.Length;
        static char GenRand() {
            Random rnd = new Random();
            int rand = rnd.Next(StringLength); 
	        return characters[rand];
     
        }
    static void Main(string[] args) {
    
        int length = 12;
        string Pswd = String.Empty;
        
        for (int i = 0; i < length; i++)
        {     
            Pswd += GenRand();
        }
      Console.WriteLine(Pswd);    
    }
  }
}