/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 03:15:46 by dgomez-m          #+#    #+#             */
/*   Updated: 2024/06/15 04:55:31 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
public:
    PhoneBook();
    void add_contact();
    void display_contacts() ;

private:
    Contact contacts[MAX_CONTACTS];
    int contact_count;
    bool set_field(std::string field, std::string &value);
    void stylize(std::string str);
    bool is_valid_input(const std::string &value) const;
    
};

#endif /* PHONEBOOK_HPP */
