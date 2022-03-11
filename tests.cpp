#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
// add your tests here
TEST_CASE("Checks capital letters in the caesar cipher"){
  CHECK(encryptCaesar("HAPPY!", 2) == "JCRRA!");
  CHECK(encryptCaesar("YES", 4) == "CIW");
}

TEST_CASE("Checks lower case letters in the caesar cipher"){
  CHECK(encryptCaesar("happy", 2) == "jcrra");
}
TEST_CASE("Checks that the vigenere cipher works"){
  CHECK(encryptVigenere("Hello", "cake") == "Jevpq");
}
