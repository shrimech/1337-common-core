/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SetGet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 09:22:44 by shrimech          #+#    #+#             */
/*   Updated: 2025/11/29 09:51:48 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string Shrimech::Contact::without_space(std::string s)
{
    s.erase(0, s.find_first_not_of(' '));
    s.erase(s.find_last_not_of(' ') + 1);
    return s;
}

void Shrimech::Contact::set_f(std::string fname) {
    firstname = without_space(fname);
}

void Shrimech::Contact::set_l(std::string lname) {
    lastname = without_space(lname);
}

void Shrimech::Contact::set_n(std::string nname) {
    nickname = without_space(nname);
}

void Shrimech::Contact::set_p(std::string pnmbe) {
    phonenumber = without_space(pnmbe);
}

void Shrimech::Contact::set_d(std::string darks) {
    darkestsecret = without_space(darks);
}

std::string Shrimech::Contact::get_f(void) {
    return firstname;
}

std::string Shrimech::Contact::get_l(void) {
    return lastname;
}

std::string Shrimech::Contact::get_n(void) {
    return nickname;
}

std::string Shrimech::Contact::get_p(void) {
    return phonenumber;
}

std::string Shrimech::Contact::get_d(void) {
    return darkestsecret;
}