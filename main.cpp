#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
    cout << "To start the auto-clicking press space to stop press space again\n";

    bool start = true;
    bool pause = false;
    char startStop = ' '; /*change this to change the button to start*/

    while (start)
    {
        if (GetKeyState(startStop))
        {
            do
            {
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                Sleep(10);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            } while (GetKeyState(startStop));
            start = false;
            break;
        }
    }
    return 0;
}