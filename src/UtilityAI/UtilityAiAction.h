// Created by Quentin Pamart on 15/09/2021.

#pragma once
#include "../Action.h"

class UtilityAiAction : public Action {
public:
    explicit UtilityAiAction(std::string desc, float (*func)(int, int));
    // todo utility args -> parametre a evaluer, max, fonction
    virtual float utility(const std::map<ActionEnum, int>&) = 0;   // [0;1]
protected:
    float (*evalFunc) (int, int);
};