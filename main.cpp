#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
    cout << "To start the auto-clicking press space to stop press space again\n";

    bool start = true;
    bool pause = false;

    while (start)
    {
        if (GetKeyState(' '))
        {
            do
            {
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                Sleep(10);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            } while (GetKeyState(' '));
            start = false;
            break;
        }
    }
    return 0;
}