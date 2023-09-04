#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
    if(argc != 4)
    {
        std::cout << "Err; Wrong number of arguments\n";
        exit(1);
    }

    std::fstream nya;
    nya.open(argv[1], std::ios::out | std::ios::in);
    if (!nya.is_open())
    {
        std::cout << "Err; Could not open the file\n";
        exit(1);
    }    
}
