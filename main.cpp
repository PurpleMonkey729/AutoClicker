#include <stdio.h>
#include <Windows.h>
int main(){
	int hotkey = VK_F12; 
 	BOOL isRegistered = RegisterHotKey(NULL, 100, 1, hotkey);
    while (!(GetAsyncKeyState(hotkey) & 0x8000)){
    	SetCursorPos(700, 768);
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        Sleep(10);
    }
    UnregisterHotKey(NULL, 100);
    return true; 
}
