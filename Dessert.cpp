/*
Author: Angeli Pante
Course: CSCI-235
Instructor: Wole Oyekoya
Assignment: Project 2
Implements Dessert subclass
*/

#include "Dessert.hpp"
#include<iostream>
#include<string>
#include<vector>

//Default constructor
Dessert::Dessert(){
    flavor_profile_ = SWEET;
    sweetness_level_ = 0;
    contains_nuts_ = false;
}

/*
Parameterized constructor.
 @param name The name of the dessert.
 @param ingredients The ingredients used in the dessert.
 @param prep_time The preparation time in minutes.
 @param price The price of the dessert.
 @param cuisine_type The cuisine type of the dessert.
 @param flavor_profile The flavor profile of the dessert.
 @param sweetness_level The sweetness level of the dessert.
 @param contains_nuts Flag indicating if the dessert contains nuts.
*/
Dessert::Dessert(const std::string &name, const std::vector<std::string> &ingredients,
        const int prep_time, const double price,
        CuisineType cuisine_type,
        FlavorProfile flavor_profile,
        const int sweetness_level,
        const bool contains_nuts)
        : Dish(name, ingredients, prep_time, price, cuisine_type)
        {
            flavor_profile_ = flavor_profile;
            sweetness_level_ = sweetness_level;
            contains_nuts_ = contains_nuts;
        }

// Accessors and mutators

/*
Sets the flavor profile of the dessert.
@param flavor_profile The new flavor profile.
@post Sets the private member `flavor_profile_` to the value of the
parameter.
*/
void Dessert::setFlavorProfile(FlavorProfile flavor_profile){
    flavor_profile_ = flavor_profile;
}

/*
@return The flavor profile of the dessert as an enum
*/
std::string Dessert::getFlavorProfile() const {
    switch(flavor_profile_){
        case SWEET:
            return "SWEET";
        case BITTER:
            return "BITTER";
        case SOUR:
            return "SOUR";
        case SALTY:
            return "SALTY";
        case UMAMI:
            return "UMAMI";
    }
}
/*
Sets the sweetness level of the dessert.
@param sweetness_level An integer representing the sweetness level of
the dessert.
@post Sets the private member `sweetness_level_` to the value of the
parameter.
*/
void Dessert::setSweetnessLevel(int sweetness_level){
    sweetness_level_ = sweetness_level;
}

/*
@return The sweetness level of the dessert.
*/
int Dessert::getSweetnessLevel() const {
    return sweetness_level_;
}

/*
Sets the contains_nuts flag of the dessert.
@param contains_nuts A boolean indicating if the dessert contains
nuts.
@post Sets the private member `contains_nuts_` to the value of the
parameter.
*/
void Dessert::setContainsNuts(bool contains_nuts){
    contains_nuts_ = contains_nuts;
}

/*
@return True if the dessert contains nuts, false otherwise
*/
std::string Dessert::containsNuts() const {
    if (contains_nuts_ == true)
        return "True";
    else
        return "False";
}