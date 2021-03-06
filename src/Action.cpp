//
// Created by Antoine on 14/09/2021.
//

#include <utility>
#include <iostream>
#include "Action.h"

Action::Action(std::string desc): m_description(std::move(desc)) {}

void Action::AddEffect(const ActionEnum& string, int value) {
	m_effects[string] = value;
}


void Action::performAction(std::map<ActionEnum, int>& map) {
	for(const auto& effect : m_effects){
		map[effect.first] += effect.second;
	}
	std::cout << "Executing action : " << m_description << std::endl;
}

const std::map<ActionEnum, int> &Action::getEffects() {
    return m_effects;
}

