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
std:: cout << "!isSunny && !hasUmbrella: " << (!isSunny && !hasUmbrella) << std::endl;


// Exercise 3
std:: cout << "Exercise 3" << std::endl;

int n = 7;
double m = 4.0;
bool hasLicense = false; 

std::cout << "n > m: " << (n > m) << std::endl;
std::cout << "m == 4.0: " << (m == 4.0) << std::endl;
std::cout << "hasLicense && m <= n: " << (hasLicense && m <= n) << std::endl;


// Exercise 4
std:: cout << "Exercise 4 " << std::endl;
std:: string firstName = "John";
std:: string lastName = "Doe";
double score = 85.75;
std:: cout << lastName << ", " << firstName << std::endl;
std:: cout << "Your score is: " << score << std::endl;

// Exercise 6
std:: cout << "Exercise 6" << std::endl;
int age = 18;
double height = 5.9;
bool isStudent = true;
std::string city = "New York";

std:: cout << "Year born: " << (2024 - age) << std::endl;
std:: cout << "Is considered an adult: " << (age >= 18) << std::endl;
std:: cout << "Is height over 6 ft: " << (height > 6) << std::endl;
std:: cout << "Is a student and living in New York: " << (isStudent && city == "New York") << std::endl;


// Bonus Challenge
std:: cout << "Bonus Challenge" << std::endl;
int i = 50;
double d = 100.5;
bool flag = false;

std:: cout << "Is i divisible by 5 and d is greater than 50: " << ( i % 5 == 0 && d > 50 ) << std::endl;
std:: cout << "d is less than or equal to 50 or flag is true: " << ( d <= 50 || flag) << std::endl;
std:: cout << "flag is true and i is greater than 30: " << (flag && i > 30) << std::endl; 

   return 0;
}
