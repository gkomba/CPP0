/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:11:55 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/16 22:21:25 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    totalContacts = 0;
    oldestContact = 0;
}

void PhoneBook::addNewContact(const Contact &NewContact)
{
    if (totalContacts < MAXCONTACTS)
    {
        ListOfContacts[totalContacts] = NewContact;
        totalContacts++;
    }
    else
    {
        ListOfContacts[oldestContact % MAXCONTACTS] = NewContact;
    }
    oldestContact = (oldestContact + 1) % MAXCONTACTS;

    std::cout << "Contact Saved!" << std::endl;
}

void   PhoneBook::dysplayContacts(char flag, int i) const
{
    if (flag == 'f')
    {
        i -= 1;
        std::cout << ListOfContacts[i].GetFirstName() << std::endl;
        std::cout << ListOfContacts[i].GetLastName() << std::endl;
        std::cout << ListOfContacts[i].GetNickname() << std::endl;
        std::cout << ListOfContacts[i].GetPhoneNUmber() << std::endl;
        std::cout << ListOfContacts[i].GetDarkSecret() << std::endl;
        std::cout << std::endl;
    }
    else if (flag == 's')
    {
        std::cout << std::left << std::setw(10) << i + 1 << "|"
        << std::setw(10) << (ListOfContacts[i].GetFirstName().length() > 10 ? ListOfContacts[i].GetFirstName().substr(0, 9) + "." : ListOfContacts[i].GetFirstName()) << "|"
        << std::setw(10) << (ListOfContacts[i].GetLastName().length() > 10 ? ListOfContacts[i].GetLastName().substr(0, 9) + "." : ListOfContacts[i].GetLastName()) << "|"
        << std::setw(10) << (ListOfContacts[i].GetNickname().length() > 10 ? ListOfContacts[i].GetNickname().substr(0, 9) + "." : ListOfContacts[i].GetNickname()) << std::endl;
        std::cout << std::endl;
    }
}

void    PhoneBook::searchContacts()const
{
    int index;

    if (totalContacts == 0)
    {
        std::cout << "No Contacts Saved!" << std::endl;
        return ;
    }
    else
    {
        std::cout << totalContacts << "Contacts Saved" << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Saved Contacts" << std::endl;
    std::cout << std::left << std::setw(10) << "index" << "|";
    std::cout << std::left << std::setw(10) << "first name" << "|";
    std::cout << std::left << std::setw(10) << "last name" << "|";
    std::cout << std::left << std::setw(10) << "nickname" << std::endl;
    index = -1;
    while (++index < totalContacts)
    {
        this->dysplayContacts('s', index);
    }
    index = -1;
    std::cout << "Enter contact index: ";
    std::cin >> index;
    std::cin.ignore();
    if (index < 0 || index > totalContacts)
        std::cout << "Invalid index!" << std::endl;
    else
        this->dysplayContacts('f', index);
}