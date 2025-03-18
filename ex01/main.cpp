/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:15:27 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/18 18:13:27 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

bool isNumeric(const std::string &str)
{
    return !str.empty() && str.find_first_not_of("+-0123456789") == std::string::npos;
}

bool    checkFieldEmpy(t_data data)
{
    if (data.firstname.empty() || data.lastname.empty() || data.nickname.empty() || data.phonenumber.empty() || data.darksecret.empty())
    {
        std::cout << "Field Empty...Try agin" << std::endl;
        data.option = "ADD";
        std::cout << std::endl;
        return (false);
    }
    return (true);
}

bool    setData(t_data data, PhoneBook &phonebook)
{
          
    Contact NewContact;
    std::cout << "Enter First Name: " << std::endl;
    std::getline(std::cin, data.firstname);
    if (std::cin.eof())
       exit(0);
    std::cout << "Enter Last Name: " << std::endl;
    std::getline(std::cin, data.lastname);
    if (std::cin.eof())
       exit(0);
    std::cout << "Enter Nickname: " << std::endl;
    std::getline(std::cin, data.nickname);
    if (std::cin.eof())
       exit(0);
    std::cout << "Enter Phone Number: " << std::endl;
    std::getline(std::cin, data.phonenumber);
    if (std::cin.eof())
       exit(0);
    if (!isNumeric(data.phonenumber))
    {
        std::cout << "Phone Number must be numeric.. Try again" << std::endl;
        setData(data, phonebook);
    }
    std::cout << "Enter Dark Secret: " << std::endl;
    std::getline(std::cin, data.darksecret);
    if (std::cin.eof())
       exit(0);
    std::cout << std::endl;

    if (checkFieldEmpy(data))
    {
        NewContact.SetFirstName(data.firstname);
        NewContact.SetLastName(data.lastname);
        NewContact.SetNickname(data.nickname);
        NewContact.SetPhoneNUmber(data.phonenumber);
        NewContact.SetDarkSecret(data.darksecret);
        phonebook.addNewContact(NewContact);
        std::cout << std::endl;
        return (true);
    }
    return (false);
}

int main()
{
    PhoneBook       phonebook;
    t_data          data;

    
    std::cout << "ADD -> To add New Contact" << std::endl;
    std::cout << "SEARCH -> To search a contact" << std::endl;
    std::cout << "EXIT -> To end the program" << std::endl;
    std::cout << std::endl;
    while (true)
    {
        std::cout << "Enter the Option" << std::endl;
        std::getline(std::cin, data.option);
        if (std::cin.eof())
            break ;
        std::cout << std::endl;
        if (data.option == "ADD")
        {
            if (!setData(data, phonebook))
                break ;
        }
        else if (data.option == "SEARCH")
            phonebook.searchContacts();
        else if (data.option == "EXIT")
        {
            std::cout << "Ending the program ..." << std::endl;
            break ;
        }
        else
        {
            std::cout << "Enter a valid command: ADD/SEARCH/EXIT" << std::endl;
            std::cout << std::endl;
        }
    }
    return (0);
}
