#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	int	len;
	
	if (argc != 4)
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
	nya.close();

	nya.open(argv[1], std::ios::binary | std::ios::ate); // why ios::binary
	len = nya.tellg();
	nya.close();
	nya.open(argv[1], std::ios::out | std::ios::in);

	char pipe[len];
	nya.get(pipe, len, EOF);
	
	std::string smt = (std::string)pipe; // te ughaki pipe;
	while(smt.find(argv[2]) != std::string::npos)
		smt[smt.find(argv[2])].swap(argv[3]);

	// smt-@ lcvatsa popoxvats text-ov vor@ petqa nor file sarqel u mej@ dnel

}
