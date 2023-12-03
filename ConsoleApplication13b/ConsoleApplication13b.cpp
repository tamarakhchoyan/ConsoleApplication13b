#include <iostream>
int main()
{
    int r;
	int x, y;
	std::cin >> r;
	std::cin >> x >> y;
	if(x>-r && x<r && y<r && y>-r)
	{
		std::cout << "YES";
	}
	else { std::cout << "NO"; }
	return 0;
}