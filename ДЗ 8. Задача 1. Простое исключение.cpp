#include<iostream>
#include <string>
#include <exception>

int function(std::string str, int forbidden_length)
{
    if (str.length() == forbidden_length) 
    { 
        throw std::exception("Вы ввели слово запретной длины! До свидания"); 
    }
    return str.length();
}


int main(int argc, char** argv)
{
 
    setlocale(LC_ALL, "Rus");
    system("chcp 1251");

    int forbidden_length = 0;
    std::string str;

    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;

    while (true)
    {
        try
        {
            std::cout << "Введите слово: ";
            std::cin >> str;
            std::cout << "Длина слова " << str << " равна " << function(str, forbidden_length) << std::endl;
        }
        catch (const std::exception& error)
        {
            std::cout << error.what() << std::endl;
            break;
        }

    }

    return 0;
}
