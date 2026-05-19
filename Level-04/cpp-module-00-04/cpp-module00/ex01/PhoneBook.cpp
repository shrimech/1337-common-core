/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 09:22:26 by shrimech          #+#    #+#             */
/*   Updated: 2025/11/29 10:18:30 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


Shrimech::PhoneBook::PhoneBook()
{
    index = 0;
    system("clear");
    std::string art =
    "███████╗ ██╗  ██╗ ██████╗  █████ ███╗   ███╗ ███████╗ ███████╗ ██╗  ██╗ \n"
    "██╔════╝ ██║  ██║ ██╔══██╗   █   ████╗ ████║ ██╔════╝ ██╔════╝ ██║  ██║ \n"
    "███████╗ ███████║ ██████╔╝   █   ██╔████╔██║ █████╗   ██║      ███████║ \n"
    "     ██║ ██╔══██║ ██╔═══╝    █   ██║╚██╔╝██║ ██╔══╝   ██║      ██╔══██║ \n"
    "███████║ ██║  ██║ ██║  ██╗   █   ██║ ╚═╝ ██║ ███████╗ ███████╗ ██║  ██║ \n"
    "╚══════╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ █████ ╚═╝     ╚═╝ ╚══════╝ ╚══════╝ ╚═╝  ╚═╝ \n";
    
    size_t i = 0;
    while (art[i] != '\0') {
        std::cout << art[i] << std::flush;
        usleep(2000);
        ++i;
    }
    usleep(1500000);
    
    usleep(400000);
    system("clear");
    std::cout << GREEN << "----------you are alowed just for tree option----------\n"<< RESET <<
    CIEL << "--------------------------ADD--------------------------\n"<< RESET << 
    PURPLE << "---description: use command ADD to add a new contact---\n\n"<< RESET <<
    CIEL << "-------------------------SEARCH------------------------\n"<< RESET <<
    PURPLE << "description: use command SEARCH to search for a contact\n\n"<< RESET <<
    CIEL << "--------------------------EXIT-------------------------\n"<< RESET <<
    PURPLE << "description: use command EXIT for close your PhoneBook\n\n" << RESET << std::endl;
    std::cout << "..." << std::endl;
    usleep(10000000);
    
    std::cout << RED << "PHONEBOOK Downloading: [" << std::flush;
    for (int i = 0; i < WIDTH; ++i) {std::cout << " ";}
    std::cout << "]\rPHONEBOOK Downloading: [" << std::flush;
    for (int i = 0; i <= WIDTH - 2; ++i) {
        std::cout << "#" << std::flush;
        usleep(150000);
    }
    std::cout << "] Done!\n" << RESET;
    usleep(1000000);
    system("clear");
    
    std::cout << GREEN << "***************** -your PHONEBOOK is ready- *****************" << RESET <<std::endl;
}

int Shrimech::PhoneBook::add_contact(Shrimech::Contact *contact)
{
    std::string a;
    system("clear");
    std::cout << GREEN << "--ENTER YOUR NEW CONTACT ..... \n" << RESET << std::endl;
    std::cout <<YELLOW << "first name :" << RESET;
    std::getline(std::cin , a);
    if (std::cin.eof())
    return 2;
    contact->set_f(a);
    a = contact->get_f();
    if(*a.c_str() == 0)
    return 1;
    std::cout <<YELLOW << "last name :" << RESET;
    std::getline(std::cin , a);
    if (a.c_str() == NULL)
    return 2;
    contact->set_l(a);
    a = contact->get_l();
    if(*a.c_str() == 0)
    return 1;
    std::cout <<YELLOW << "nick name :" << RESET;
    std::getline(std::cin , a);
    if (a.c_str() == NULL)
    return 2;
    contact->set_n(a);
    a = contact->get_n();
    if(*a.c_str() == 0)
    return 1;
    std::cout <<YELLOW << "phone number :" << RESET;
    std::getline(std::cin , a);
    if (a.c_str() == NULL)
    return 2;
    contact->set_p(a);
    a = contact->get_p();
    if(*a.c_str() == 0)
    return 1;
    std::cout <<YELLOW << "darkest secret :" << RESET;
    std::getline(std::cin , a);
    if (a.c_str() == NULL)
    return 2;
    contact->set_d(a);
    a = contact->get_d();
    if(*a.c_str() == 0)
    return 1;
    return(0);
}

void Shrimech::PhoneBook::add_contacts(Shrimech::Contact *contact,int *a) {
    contacts[index % 8] = *contact;
    index++;
    if (*a < 8)
    (*a)++;
}

void Shrimech::PhoneBook::display_phonebook(int size){
    int i = 0;
    
    if (size == 0)
    {
        std::cout << RED << "No contacts available.\n" << RESET;
        return;
    }
    std::cout<<"|------------------------------------------|"<<std::endl;
    std::cout<<"|index    |first name|last name |nick name |"<<std::endl;
    std::cout<<"|---------|----------|----------|----------|"<<std::endl;
    
    while (i < size)
    {
        std::string f = contacts[i].get_f();
        std::string l = contacts[i].get_l();
        std::string n = contacts[i].get_n();
        std::cout << BLUE << "|" << std::left << std::setw(9) << i+1 << "|";
        if (f.size() > 10)
        std::cout << BLUE << std::left << std::setw(10) << f.substr(0,9) + "." << "|";
        else
        std::cout << BLUE << std::left << std::setw(10) << f << "|";
        if (l.size() > 10)
        std::cout << BLUE << std::left << std::setw(10) << l.substr(0,9) + "." << "|";
        else
        std::cout << BLUE << std::left << std::setw(10) << l << "|";
        if (n.size() > 10)
        std::cout << BLUE << std::left << std::setw(10) << n.substr(0,9) +"." << "|" << std::endl;
        else
        std::cout << BLUE << std::left << std::setw(10) << n << "|" << std::endl;
        i++;
        std::cout<<"|------------------------------------------|"<<std::endl;
    }
}

void Shrimech::PhoneBook::display_contact(int index){
    std::cout << BLUE << "first name :" << contacts[index - 1].get_f() << RESET << std::endl;
    std::cout << BLUE << "last name :" << contacts[index - 1].get_l() << RESET << std::endl;
    std::cout << BLUE << "nick name :" << contacts[index - 1].get_n() << RESET << std::endl;
    std::cout << BLUE << "phone number :" << contacts[index - 1].get_p() << RESET << std::endl;
    std::cout << BLUE << "darkest secret :"<< contacts[index - 1].get_d()  << RESET << std::endl;
}

int main()
{
    int size = 0;
    Shrimech::PhoneBook PhoneBook;
    Shrimech::Contact   Contact;
    (void)Contact;
    std::string input;

    while(1){
        std::cout << YELLOW << "the PHONEBOOK is on your service  $> " << RESET << std::flush;
        getline(std::cin ,input);
        if(std::cin.eof() || !input.compare("EXIT")){
            std::cout << std::endl;
            break;
        }
        if(!input.compare("ADD") || !input.compare("SEARCH"))
        {
            if (!input.compare("ADD")) {
                int a = PhoneBook.add_contact(&Contact);
                if(a == 1){
                    std::cout<<RED<< "you can't enter an empty info !!"<< RESET << std::endl;
                    continue;
                }
                if(a == 2){
                    break;
                }
                PhoneBook.add_contacts(&Contact,&size);
            }
            if (!input.compare("SEARCH")) {
                if (size == 0)
                {
                    std::cout<<RED << "your contact is empty"<< RESET <<std::endl;
                    continue;
                }
                PhoneBook.display_phonebook(size);
                std::cout << YELLOW << "what is your target contact: (1-8)  $>" << RESET << std::flush;
                std::getline(std::cin , input);
                if (std::cin.eof())
                    break;
                if(atoi(input.c_str()) > 0 && atoi(input.c_str()) <= size && input.size()==1)
                {
                    PhoneBook.display_contact(atoi(input.c_str()));
                    // std::cout << "good index"<<std::endl;
                }
                else if (atoi(input.c_str()) > size && atoi(input.c_str()) <= 8)
                    std::cout << RED << "you have only " << size << " contact in your phonebook !" << RESET <<std::endl;
                else
                    std::cout << RED << "next time enter a valid target (1-8) !" << RESET <<std::endl;
            }
        }
        // std::cout <<<<std::endl;

    }

}