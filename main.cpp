#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

int main() {
    ofstream plik;
    plik.open("pozycja.txt");
  while (1) {
    POINT cursorPos;
    GetCursorPos(&cursorPos);
    float x = 0;
    x = cursorPos.x;
    float y = 0;
    y = cursorPos.y;
    if ((GetKeyState(VK_LBUTTON) & 0x8000) != 0)
    {
        cout << x << " " << y;
        plik << x << " " << y << "\n";
        Sleep(100);
    }
    Sleep(100);
    if (GetKeyState(VK_F12)) {
        plik.close();
        return 0; }
  }
  return 0;
}
