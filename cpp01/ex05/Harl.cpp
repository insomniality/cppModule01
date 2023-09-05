#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "debug\n";
}

void Harl::info(void)
{
    std::cout << "info\n";
}

void Harl::warning(void)
{
    std::cout << "warning\n";
}

void Harl::error(void)
{
    std::cout << "error\n";
}

void Harl::himar(void)
{
    std::cout << "sxal ban es xuarkel\n";
}

void Harl::complain(std::string level)
{
    size_t i = 0;

    comp funcs[5] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::himar };
    // void (Harl::*funcs[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string names[4] = { "debug", "info", "warning", "error" };

    while (i < 4 && level != names[i])
    {
        ++i;
    }

    (this->*(funcs[i]))();
}

// google ara "poiner to class member function typedef" karda vor haskanas marses