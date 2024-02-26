/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:36:44 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 14:57:25 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "ATarget.hpp"
# include <map>

class TargetGenerator {
    private:
        TargetGenerator(const TargetGenerator& other);
        TargetGenerator&    operator=(const TargetGenerator& rhs);
        std::map <std::string, ATarget*> target_map;
        
    public:
        TargetGenerator();
        ~TargetGenerator();
        void        learnTargetType(ATarget* target_type);
        void        forgetTargetType(const std::string& target);
        ATarget*    createTarget(const std::string& target);
};