/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:16:25 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 14:27:54 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::SpellBook(const SpellBook& other) {
    *this = other;
}

SpellBook::~SpellBook() {}

SpellBook&  SpellBook::operator=(const SpellBook& rhs) {
    spell_book = rhs.spell_book;
    return (*this);
}

void        SpellBook::learnSpell(ASpell* spell) {
    if (spell) {
        spell_book[spell->getName()] = spell->clone(); 
    }
}

void        SpellBook::forgetSpell(const std::string& spell_name) {
    std::map <std::string, ASpell*>::iterator it = spell_book.find(spell_name);
    
    if (it != spell_book.end()) {
        delete it->second;
        spell_book.erase(it);
    }
}

ASpell*     SpellBook::createSpell(const std::string& spell_name) {
    ASpell* tmp = NULL;
    
    if (spell_book.find(spell_name) != spell_book.end()) {
        tmp = spell_book[spell_name];
    }
    return (tmp);
}
