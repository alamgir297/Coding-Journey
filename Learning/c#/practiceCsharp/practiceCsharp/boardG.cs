using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Board {
    int[,] board = new int[5, 5];
    static void Main() {
        Board board = new Board();
        int wd = 8;
        int ht = 8;
        for (int y=1; y<=wd; y++) {
            if (y % 2 == 0) {
                for(int x=ht; x>=1; x--) {
                    Console.Write("{0},{1} ", x, y);
                }
            }
            else {
                for (int x = 1; x <= wd; x++) {
                    Console.Write("{0},{1} ", x, y);
                }
            }
           
            Console.WriteLine();
        }
    }
}