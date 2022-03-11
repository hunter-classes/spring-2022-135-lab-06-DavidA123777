#include <iostream>

#include "vigenere.h"
#include "caesar.h"

int main()
{




//task a you would have to call using make test-ascii
std::cout << "Task B: using input of 'Happy' and a shift of 2; outputs Jcrra" << std::endl;
std::string b = "Happy";
int shift = 2;
encryptCaesar(b, shift);
std::cout << "\n";

std::cout << "Task C: using input of 'Hello' and a shift of keywork cake; outputs Jevpq" << std::endl;
std::string p = "Hello";
std::string k = "cake";
encryptVigenere(p,k);

  return 0;
}
