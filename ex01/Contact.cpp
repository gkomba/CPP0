/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:25:46 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/16 22:21:30 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    phone = "";
    number = "";
    firstName = "";
    lastName = "";
    nickname = "";
    darkSecret = "";
}

void    Contact::SetFirstName(const std::string &NfirstName)
{
    firstName = NfirstName;   
}

void    Contact::SetLastName(const std::string &NlastName)
{
    lastName = NlastName;
}
void    Contact::SetPhoneNUmber(const std::string &Nphone)
{
    phone = Nphone;
}

void    Contact::SetNickname(const std::string &Nnickname)
{
    nickname = Nnickname;
}

void    Contact::SetDarkSecret(const std::string &NdarkSecret)
{
    darkSecret = NdarkSecret;
}


std::string    Contact::GetFirstName() const
{
    return (firstName);
}

std::string    Contact::GetLastName() const
{
    return (lastName);
}

std::string    Contact::GetPhoneNUmber() const
{
    return (phone);
}

std::string    Contact::GetNickname() const
{
    return (nickname);
}

std::string    Contact::GetDarkSecret() const
{
    return (darkSecret);
}