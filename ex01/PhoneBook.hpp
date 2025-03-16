/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:04:16 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/16 22:03:52 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAXCONTACTS 8

class PhoneBook
{
    private:
        int         totalContacts;
        int         oldestContact;
        Contact     ListOfContacts[MAXCONTACTS];
    
    public:
        PhoneBook();

        void    addNewContact(const Contact &NewContact);
        void    searchContacts()const;
        void    dysplayContacts(char flag, int i) const;
};

#endif