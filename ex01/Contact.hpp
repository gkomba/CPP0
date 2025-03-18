/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:15:44 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/18 17:30:35 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <iomanip>

class   Contact
{
    private:
        std::string phone;
        std::string number;
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string darkSecret;

    public:
        Contact();

        void    SetFirstName(const std::string &firstName);
        void    SetLastName(const std::string &lastName);
        void    SetPhoneNUmber(const std::string &phone);
        void    SetNickname(const std::string &nickname);
        void    SetDarkSecret(const std::string &darkSecret);

        std::string    GetFirstName() const;
        std::string    GetLastName() const;
        std::string    GetPhoneNUmber() const;
        std::string    GetNickname() const;
        std::string    GetDarkSecret() const;
};