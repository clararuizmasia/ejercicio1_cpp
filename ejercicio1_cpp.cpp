#include <iostream>
#include <string>

using namespace std;

bool es_parell(int n) {
	if (n % 2 == 0) return true;
	else
		return false;
}


int main() 
{

	std::string Parell = "parell";
	std::string Senar = "senar";

	bool* elMeuVector = new bool[10];
	
	for (int i = 0; i < 10; i++) 
	{
		if (es_parell(i))
		{
			elMeuVector[i] = true;
		}
		else {
			elMeuVector[i] = false;
		}

		
	}
	int num;

	while (true)
	{
		std::cout << "Introduce un numero un numero del 0-9: " << endl;
		std::cin >> num;


			if (num < 0 || num > 9)
			{
				std::cout << "Introduce un numero del 0-9: ";

			}
			else if(elMeuVector[num])
			{
				std::cout << Parell << endl;
			}
			else
			{
				std::cout << Senar << endl;
			}
		
	}
}

