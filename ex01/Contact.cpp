#include "Contact.hpp"

Contact::Contact() {}

void Contact::set_contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
    first_name = fn;
    last_name = ln;
    nickname = nn;
    phone_number = pn;
    darkest_secret = ds;
}

std::string Contact::get_first_name() const { return first_name; }
std::string Contact::get_last_name() const { return last_name; }
std::string Contact::get_nickname() const { return nickname; }
std::string Contact::get_phone_number() const { return phone_number; }
std::string Contact::get_darkest_secret() const { return darkest_secret; }