#include <Windows.h> // To use Windows API functions.
int main(){
    BOOL isRegistered = RegisterHotKey(NULL, 100, 1, VK_F12); // Hotkey to exit program is F12 key.
    while (!(GetAsyncKeyState(hotkey) & 0x8000)){ // Unless clicking F12, cycle and cycle infinitly
    	SetCursorPos(500, 500); // Move mouse cursor to x=500, y=500 position
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); // Mouse press event generate
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); // Mouse release event generate
        Sleep(10); // Delay time
    }
    UnregisterHotKey(NULL, 100); // Before exiting programe, hotkey is unregistered.
    return true; // That's all. Enjoy this!!!
}
