#include "Contact.hpp"
#include <cstdlib>

Contact::Contact()
{
}

Contact::~Contact()
{
}

void    Contact::init() {
   	std::cout << "First Name: " << std::flush;
	if (!std::getline(std::cin, _firstName) || _firstName.empty())
		std::exit(0);
	std::cout << "Last Name: " << std::flush;
	if (!std::getline(std::cin, _lastName) || _lastName.empty())
		std::exit(1);
	std::cout << "Nickname: " << std::flush;
	if (!std::getline(std::cin, _nickname) || _nickname.empty())
		std::exit(1);
	std::cout << "Phone Number: " << std::flush;
	if (!std::getline(std::cin, _phoneNumber) || _phoneNumber.empty())
		std::exit(1);
	std::cout << "Darkest Secret: " << std::flush;
	if (!std::getline(std::cin, _darkestSecret) || _darkestSecret.empty())
		std::exit(1);
}

std::string Contact::_truncten(std::string str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::view(int index) const {
    if (_firstName.empty() || _lastName.empty() || _nickname.empty())
        return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << _truncten(_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << _truncten(_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << _truncten(_nickname) << std::flush;
    std::cout << "|" << std::endl;
}

void    Contact::display(int index) const {
    if (_firstName.empty() || _lastName.empty() || _nickname.empty())
        return ;
    std::cout << std::endl;
    std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone: " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}
