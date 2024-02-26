/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:30:09 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 14:34:44 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include "Warlock.hpp"

Warlock::Warlock(std::string nm, std::string tle) : name(nm), title(tle) {
    std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& other) {
    *this = other;
}

Warlock::~Warlock() {
    std::cout << getName() << ": My job here is done!" << std::endl;
}

Warlock&  Warlock::operator=(const Warlock& rhs) {
    this->name = rhs.name;
    this->title = rhs.title;
    return (*this);
}

const std::string&    Warlock::getName() const {
    return (name);
}

const std::string&    Warlock::getTitle() const {
    return (title);
}

void            Warlock::setTitle(const std::string& tle) {
    title = tle;
    return;
}

void            Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void            Warlock::learnSpell(ASpell* spell) {
    spell_book.learnSpell(spell);
}

void            Warlock::forgetSpell(std::string spell_name) {
    spell_book.forgetSpell(spell_name);
}

void            Warlock::launchSpell(std::string spell_name, const ATarget& targ) {
    if (spell_book.createSpell(spell_name)) {
        spell_book.createSpell(spell_name)->launch(targ);
    }
}

#endif