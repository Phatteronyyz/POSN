#include <iostream>
#include <stdlib.h> //for system()
#include <windows.h> //for Sleep() and Beep()

using namespace std;

//timer function
void timer(int m, int s)
{
    for (;;)
    {
        if ( m == 0 && s == 0)
        {
            break;
        }
        if (s == 0)
        {
            s = 59;
            m--;
        }
        system("cls");
        cout << m << " : " << s--;
        Sleep(1000);
    }
}

int main()
{
    int h, m, s;
   /* cout << "Hours: "; cin >> h;
    cout << "Minutes: "; cin >> m;
    cout << "Seconds: "; cin >> s;*/
    timer(10, 20);
    /*for (int i = 100; ; i = i + 50)
        Beep(i, 1000);*/
}