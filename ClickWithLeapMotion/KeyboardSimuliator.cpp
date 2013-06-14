#include "KeyboardSimuliator.h"
#include <windows.h>


void KeyboardSimuliator::PressKey(char c)
{
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = c;
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));
}
void KeyboardSimuliator::ReleseKey(char c)
{
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = c;
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));
}
void KeyboardSimuliator::Sendchar(char c)
{
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = c;
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
	Sleep(1); 
}
void KeyboardSimuliator::SendText(char*text)
{
	for(int i=0;i<strlen(text);i++)
	{
		Sendchar(text[i]);
	}
}
void KeyboardSimuliator::SendInt(char number)
{
	char buff[32];
	memset(buff,0,32);
	itoa(number,buff,10);
	SendText(buff);
}