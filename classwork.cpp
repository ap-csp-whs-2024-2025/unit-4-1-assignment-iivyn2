#include <iostream>
#include <string>

int main( )
{
 //exercise1

  int x;
  int y;
  int add_xy;
  int sub_xy;
  int div_xy;
  int mult_xy;
  int mod_xy;
  x = 25; 
  y = 3; 


  add_xy = x + y; 
  sub_xy = x - y;
  mult_xy = x * y; 
  div_xy = x/y;
  mod_xy = x % y;
  std::cout << "x + y= " << add_xy << std::endl;
  std::cout << "x - y= " << sub_xy << std:: endl; 
  std::cout << "x * y= " << mult_xy << std:: endl;
  std::cout << "x / y= " << div_xy << std:: endl;
  std::cout << "x mod y= " << mod_xy << std:: endl;

  int z = 10; 
  bool xGreaterz = x > z;
  bool ylessThanx = y < x;
  std::cout << xGreaterz << std::endl;
  std::cout << ylessThanx << std::endl;

//exercise2
bool hasUmbrella = true;
bool isSunny = false; 

std::cout << "Is it both sunny and do you have an umbrella? " << (isSunny && hasUmbrella) <<  std::endl;
std::cout << "Is it either sunny or do you have an umbrella? " << (isSunny || hasUmbrella) << std::endl;
std::cout << "Is it not sunny? " << (!isSunny) << std::endl;
std::cout << "Is it not sunny and you don't have an umbrella? " << (!isSunny && !hasUmbrella) << std::endl; 

//exercise3
int n = 7; 
double m = 4.0;
bool hasLicense = false; 

std::cout << "Is n greater than m" << (n )
  return 0;


}
