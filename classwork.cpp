#include <iostream>
#include <string>

int main()
{
  // Exercise 1

  int x = 25;
  int y = 3;

  std::cout << "Exericise 1" << std::endl;
  std:: cout << "x + y = " << x + y << std::endl;

std::cout << "x - y = " << x - y << std::endl;

std::cout << "x * y = " << x * y << std::endl;

std::cout << "x / y = " << x/y << std::endl;


std:: cout << "Exercise 2" << std::endl;

int z = 10;
std:: cout << "x > z: " << (x > z) << std::endl;

std:: cout << "y < x: " << (y < x) << std::endl;

// Exercise 2

bool isSunny = true;
bool hasUmbrella = false;
std:: cout << "isSunny && hasUmbrella: " << (isSunny && hasUmbrella) << std::endl;
std:: cout << "isSunny || has Umbrella: " << (isSunny || hasUmbrella) << std::endl;
std:: cout << "!isSunny: " << (!isSunny) << std::endl;
   return 0;
}
