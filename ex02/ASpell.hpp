/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:06:51 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 11:53:42 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"
#include <iostream>

class ATarget;

class ASpell {
    protected:
        std::string name;
        std::string effects;

    public:
        ASpell();
        ASpell(const ASpell& other);
        ASpell(std::string nm, std::string eff);
        virtual ~ASpell();
        
        ASpell&             operator=(const ASpell& rhs);
        
        std::string         getName() const;
        std::string         getEffects() const;
        virtual ASpell*     clone() const = 0;
        void                launch(const ATarget& target) const;        
};