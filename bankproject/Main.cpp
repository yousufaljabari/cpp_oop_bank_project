#include<iostream>
#include"clsLoginScreen.h"
#include"clsCurrency.h"
#include"vector"
#include"fstream"
using namespace std;

int main()
{
	while (true)
	{
		if (!clsLoginScreen::ShowLoginScreen())
			break;
	}
    

    return 0;
	
    
}
	