/*
Author: Angeli Pante
Course: CSCI-235
Instructor: Wole Oyekoya
Assignment: Project 2
Implements Appetizer subclass
*/

#include "Appetizer.hpp"
#include<iostream>
#include<string>
#include<vector>

/*
Default constructor.
Initializes all private members with default values.
*/
Appetizer::Appetizer() {
    serving_style_ = PLATED;
    spiciness_level_ = 0;
    vegetarian_ = false;
}

/*
Parameterized constructor.
*/
Appetizer::Appetizer(const std::string &name, const std::vector<std::string> &ingredients,
        const int prep_time,
        const double price,
        CuisineType cuisine_type,
        ServingStyle serving_style,
        const int spiciness_level,
        const bool vegetarian)
        : Dish(name, ingredients, prep_time, price, cuisine_type)
        {
            serving_style_ = serving_style;
            spiciness_level_ = spiciness_level;
            vegetarian_ = vegetarian;
        }

//Accessors and Mutators:

/*
Sets the serving style of the appetizer.
@param serving_style The new serving style.
@post Sets the private member `serving_style_` to the value of the
parameter.
*/
void Appetizer::setServingStyle(ServingStyle serving_style){
    serving_style_ = serving_style;
}

/* 
@return The serving style of the appetizer (as an enum)
*/
std::string Appetizer::getServingStyle() const{
    switch (serving_style_) { 
        case PLATED:
            return "PLATED";
        case FAMILY_STYLE:
            return "FAMILY_STYLE";
        case BUFFET:
            return "BUFFET";
    }
}

/*
Sets the spiciness level of the appetizer.
@param spiciness_level An integer representing the spiciness level of
the appetizer.
* @post Sets the private member `spiciness_level_` to the value of the
parameter.
*/
void Appetizer::setSpicinessLevel(int spiciness_level){
    spiciness_level_ = spiciness_level;
}

/*
@return The spiciness level of the appetizer.
*/
int Appetizer::getSpicinessLevel() const {
    return spiciness_level_;
}

/*
Sets the vegetarian flag of the appetizer.
@param vegetarian A boolean indicating if the appetizer is
vegetarian.
@post Sets the private member `vegetarian_` to the value of the
parameter.
*/
void Appetizer::setVegetarian(bool vegetarian){
    vegetarian_ = vegetarian;
}

/*
@return True if the appetizer is vegetarian, false otherwise.
*/
std::string Appetizer::isVegetarian() const {
    if (vegetarian_ == true)
        return "True";
    else
        return "False";
}