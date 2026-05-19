/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 09:22:38 by shrimech          #+#    #+#             */
/*   Updated: 2025/11/29 10:18:07 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/************** --HEADER_GUARDS-- *****************/
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

/************** --MACROS--------- *****************/
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define PURPLE "\033[35m"
#define CIEL    "\033[36m"
#define RESET   "\033[0m"
#define WIDTH   50

/************** --INCLUDES------- *****************/
#include <iostream>
// #include <string>
#include <unistd.h>
#include <cstdlib>
#include <csignal>
#include <iomanip>



/************** --NAMESPACES---- *****************/
namespace Shrimech {
/************** --CLASSES------- *****************/


// Contact class declaration
class Contact {
    private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;
    public:
    void        set_f(std::string fname);
    void        set_l(std::string lname);
    void        set_n(std::string nname);
    void        set_p(std::string pnmbe);
    void        set_d(std::string darks);
    std::string get_f(void);
    std::string get_l(void);
    std::string get_n(void);
    std::string get_p(void);
    std::string get_d(void);
    std::string without_space(std::string s);
     
};


// PhoneBook class declaration
class PhoneBook {
    private:
        Contact contacts[8];
        int     index;
    public:
        PhoneBook();
        int add_contact(Shrimech::Contact *contact);
        void add_contacts(Shrimech::Contact *contact, int *a);
        void display_phonebook(int size);
        void display_contact(int index);
};


/************** --FUNCTIONS----- *****************/

}


#endif