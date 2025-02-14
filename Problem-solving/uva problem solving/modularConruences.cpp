#include <bits/stdc++.h>
using namespace std;
//int divisibility(long long s[], unsigned long num, int len){
//    int len, mod, cur=0;
//    for(int i=0; i<len; i++){
//        cur=cur*10+(s[i]);
//        cur=cur%num;
//    }
//    if(mod==0) return 1;
//    else return 0;
//}
int main()
{
    unsigned long test_case, i, number, cnt;
    unsigned long number2, moduler;

    cin >> test_case;
    while (test_case--)
    {
        cin >> number >> number2 >> moduler;
        i = moduler + 1;
        unsigned long tmpnumber = number - moduler;
        // for (i = 1; i < 100000000000000000000000000; i++)
        for(i;;i++)
        {
            i++;
            unsigned long value;
            if (tmpnumber % i == 0)
                value = tmpnumber / i;

            if (number2 % value == moduler)
            {

                cout << value << endl;
                break;
            }
        }
    }
    return 0;
}
