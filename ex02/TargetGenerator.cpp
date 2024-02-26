/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:43:23 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 14:51:30 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator& other) {
    *this = other;
}

TargetGenerator::~TargetGenerator() {}

TargetGenerator&    TargetGenerator::operator=(const TargetGenerator& rhs) {
    target_map = rhs.target_map;
    return (*this);
}

void                TargetGenerator::learnTargetType(ATarget* target_type) {
    if (target_type) {
        target_map[target_type->getType()] = target_type;
    }
}

void                TargetGenerator::forgetTargetType(const std::string& target) {
    if (target_map.find(target) != target_map.end()) {
        target_map.erase(target_map.find(target));
    }
}

ATarget*    TargetGenerator::createTarget(const std::string& target) {
    ATarget*    tmp = NULL;

    if (target_map.find(target) != target_map.end()) {
        tmp = target_map[target];
    }
    return tmp;
}