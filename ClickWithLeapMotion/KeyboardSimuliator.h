#pragma once
class KeyboardSimuliator
{
	public:
		static void PressKey(char c);
		static void ReleseKey(char c);
		static void Sendchar(char c);
		static void SendText(char*text);
		static void SendInt(char number);
};

