#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{

	std::stringstream a;

	if (argc != 4 || std::strcmp(argv[2], argv[3]) == 0)
	{
		std::cout << "Err; Wrong input\n";
		exit(1);
	}

	std::fstream nya;

	nya.open(argv[1]);
	if (!nya.is_open())
	{
		std::cout << "Err; Could not open the file\n";
		exit(1);
	}

	a << nya.rdbuf();
	std::string smt(a.str());

	// std::cout << smt << "\n";

	// nya.get(pipe, len, EOF);
	// std::string smt = (std::string)pipe; // te ughaki pipe;
	
	while (smt.find(argv[2]) != std::string::npos) // && argv[2] != argv[3]
	{
		size_t found = smt.find(argv[2]);

		smt.erase(found, std::string(argv[2]).length());
		smt.insert(found, std::string(argv[3]));
	}
	nya.close();

	// ----P1_end----
	
	std::fstream new_nya(std::string(argv[1]) + ".replace");

	// const char *a = smt.c_str();

	new_nya.open(std::string(argv[1]) + ".replace", std::fstream::out);

	if (new_nya.fail())
		perror("asdasdasd");

	new_nya.write(smt.c_str(), smt.length());
	new_nya.close();
}
