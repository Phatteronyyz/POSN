#include <iostream>
#include <stdlib.h> 
#include <windows.h> 

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
    cout << "Hours: "; cin >> h;
    cout << "Minutes: "; cin >> m;
    cout << "Seconds: "; cin >> s;
    timer(10, 20);
    
}