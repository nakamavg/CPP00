#include "PhoneBook.hpp"
#include <iomanip>
#define ARROW_LEFT "\033[A"
#define ARROW_RIGHT "\033[C"
#define ARROW_UP "\033[A"
#define ARROW_DOWN "\033[B"

PhoneBook::PhoneBook() : contact_count(0)
{
}
bool PhoneBook::is_valid_input(const std::string &value) const
{
	const std::string arrow_keys[] = {ARROW_LEFT, ARROW_RIGHT, ARROW_UP,
		ARROW_DOWN};
	for (int i = 0; i < 5; i++)
	{
		// Check if the current key exists within the input value (std::string)
		if (value.find(arrow_keys[i]) != std::string::npos)
		{
			// If the key is found in the input value, print an error message
			std::cout << "(arrow key detected)" << std::endl;

			// Return false to indicate that the input is invalid
			return (false);
		}
	}
	return (true);
}
bool PhoneBook::set_field(std::string field, std::string &value)
{
	std::cout << "Enter " << field << ": ";
	std::getline(std::cin, value);
	if (value.empty() || !is_valid_input(value))
	{
		std::cout << "Invalid input" << std::endl;
		return (false);
	}
	return (true);
}
void PhoneBook::add_contact()
{
	Contact	new_contact;

	std::string first_name, last_name, nickname, phone_number, darkest_secret;
	while (!set_field("first name", first_name))
		;
	while (!set_field("last name", last_name))
		;
	while (!set_field("nickname", nickname))
		;
	while (!set_field("phone number", phone_number))
		;
	while (!set_field("darkest secret", darkest_secret))
		;
	new_contact.set_contact(first_name, last_name, nickname, phone_number,
		darkest_secret);
	if (contact_count > MAX_CONTACTS)
		contact_count = 0;
	contacts[contact_count] = new_contact;
	contact_count++;
}

void PhoneBook::stylize(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << '|';
}
void PhoneBook::display_contacts()
{
	for (int i = 0; i < contact_count; ++i)
	{
		std::cout << '|' << std::setw(10) << i + 1 << '|';
		stylize(contacts[i].get_first_name());
		stylize(contacts[i].get_last_name());
		stylize(contacts[i].get_nickname());
		std::cout << std::endl;
	}
	while (42)
	{
		std::string index;
		std::cout << "\nEnter the index of the contact you want to display: ";
		std::cout << std::endl;
		std::cout << "or Enter BACK to return (to the main menu" << std::endl;
		std::getline(std::cin, index);
		if (index == "BACK")
			break ;
		else if (index.length() == 1 && index[0] >= '1' && index[0] <= '8')
		{
			int i = index[0] - '1';
			std::cout << "First name: " << contacts[i].get_first_name() << std::endl;
			std::cout << "Last name: " << contacts[i].get_last_name() << std::endl;
			std::cout << "Nickname: " << contacts[i].get_nickname() << std::endl;
			std::cout << "Phone number: " << contacts[i].get_phone_number() << std::endl;
			std::cout << "Darkest secret: " << contacts[i].get_darkest_secret() << std::endl;
		}
		else
		{
			std::cout << "Invalid index" << std::endl;
		}
	}
}
