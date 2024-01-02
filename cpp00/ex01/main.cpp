#include "PhoneBook.hpp"

int	main()
{
	PhoneBook pb;
	std::string line;

	while(std::getline(std::cin, line))
	{
		if (!line.compare("ADD"))
			pb.AddContact();
		else if (!line.compare("SEARCH"))
			pb.Aff_Repo();
		else if (!line.compare("EXIT"))
			break;
	}
	return (0);
}
