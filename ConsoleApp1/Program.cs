using System;
using System.Runtime.InteropServices;

namespace ConsoleApp1
{
    class Program
    {
        [DllImport("Dll1.dll", EntryPoint = "Test", CallingConvention = CallingConvention.Cdecl)]
        public static extern int Test();

        static void Main(string[] args)
        {
            int a = Test();
            Console.WriteLine("Hello World!");
        }
    }
}
