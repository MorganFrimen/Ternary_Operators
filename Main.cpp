#include <iostream>

static int s_Level{ 2 };
static int s_Speed{ 4 };

int main()
{
	/*if (s_Level > 5)
		s_Speed = 10;
	else
		s_Speed = 5;*/

	s_Speed = s_Level > 5 ? 10 : 5;
	std::cout << s_Speed << std::endl;
}