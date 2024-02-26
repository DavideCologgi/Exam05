/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:17:21 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 11:54:25 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const ASpell& other) {
    *this = other;
}

ASpell::ASpell(std::string nm, std::string eff) : name(nm), effects(eff) {}

ASpell::~ASpell() {}

ASpell& ASpell::operator=(const ASpell& rhs) {
    this->name = rhs.name;
    this->effects = rhs.effects;
    return (*this);
}

std::string ASpell::getName() const {
    return (name);
}

std::string ASpell::getEffects() const {
    return (effects);
}

void        ASpell::launch(const ATarget& target) const {
    target.getHitBySpell(*this);
}