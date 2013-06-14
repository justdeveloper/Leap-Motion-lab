#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "KeyboardSimuliator.h"

using namespace std;


void main()
{
	char result[1024];
	int x=0;
	int y=0;
	while(true)
	{
		KeyboardSimuliator::PressKey(VK_RIGHT);
		KeyboardSimuliator::ReleseKey(VK_RIGHT);
	}
	cin>>x;
} 