#include <iostream>



int main(void)
{
    std:: string str = std::string("HI THIS IS BRAIN");
    std:: string *stringPTR = &str;
    std:: string &stringREF = str;

    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR:    " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:    " << &stringREF << std::endl;

    return (0);
}
