using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;
using Lb3AutoSvr50322Lib;
using System.Resources;
using System.Runtime.InteropServices.WindowsRuntime;


namespace ClientCsh
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var obj = new MyMath50322();
            IMyMath50322 pimymath = obj;
            
            int res = pimymath.Add(10, 20);
            Console.WriteLine(res);

            res = pimymath.Add(pimymath.Param1, 20); //не получается с параметром
            Console.WriteLine(res);
            pimymath.Param1 = 5;
            res = pimymath.Add(pimymath.Param1, 20); //не получается с параметром
            Console.WriteLine(res);
            res = pimymath.Sub(10, 20);
            Console.WriteLine(res);
            Console.WriteLine();    
            Console.ReadLine();

            //IVer
            IVer pIVer = (IVer)pimymath;
            Console.WriteLine(pIVer.GetAuthor("Dmitrahcyonok gr50322 "));
            Console.ReadLine();



            Marshal.ReleaseComObject(pimymath);


        }
    }
}
