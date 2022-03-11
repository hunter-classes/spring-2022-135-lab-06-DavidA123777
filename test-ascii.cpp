#include <iostream>
#include <cctype>
#include <string>


int main(){
std::string str = "";
std::cout << "Task A: uses user input and prints out the ascii value of each character in the sentence." << std::endl;

std::cout << "Please input a line of text: " << std::endl;
getline(std::cin, str);
char a;
int len = str.length();

for (int i = 0; i < len; i++){
  a = str[i];
  std::cout << a << " " << int(a) << std::endl;

}
std::cout << "\n";
  return 0;
}
