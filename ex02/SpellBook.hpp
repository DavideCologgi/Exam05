/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:09:08 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 14:15:33 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "ASpell.hpp"
# include <map>

class ASpell;

class SpellBook {
    private:
        SpellBook(const SpellBook& other);
        SpellBook& operator=(const SpellBook& rhs);
        std::map <std::string, ASpell*> spell_book;

    public:
        SpellBook();
        ~SpellBook();

        void        learnSpell(ASpell* spell);
        void        forgetSpell(const std::string& spell_name);
        ASpell*     createSpell(const std::string& spell_name);
};