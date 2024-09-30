#ifndef DESSERT_H
#define DESSERT_H
#include "Dish.hpp"

class Dessert : public Dish {
    public:
        enum FlavorProfile {SWEET, BITTER, SOUR, SALTY, UMAMI}; //describes dominant flavor profile of dessert

        Dessert(); //default constructor
        Dessert(const std::string &name, const std::vector<std::string> &ingredients,
        const int prep_time, const double price,
        CuisineType cuisine_type,
        FlavorProfile flavor_profile,
        const int sweetness_level,
        const bool contains_nuts); //parameterized constructor

        //Accessors and Mutators
        void setFlavorProfile(FlavorProfile flavor_profile); // @param flavor_profile The new flavor profile. @post Sets the private member `flavor_profile_` to the value of the parameter.
        std::string getFlavorProfile() const; // @return The flavor profile of the dessert (as an enum)

        void setSweetnessLevel(int sweetness_level); //@param sweetness_level An integer representing the sweetness level of the dessert. @post Sets the private member `sweetness_level_` to the value of the parameter.
        int getSweetnessLevel() const; //@return The sweetness level of the dessert

        void setContainsNuts(bool contains_nuts); // @param contains_nuts A boolean indicating if the dessert contains nuts. @post Sets the private member `contains_nuts_` to the value of the parameter.
        std::string containsNuts() const; //@return True if the dessert contains nuts, false otherwise.

    private:
        FlavorProfile flavor_profile_; //flavor profile of dessert
        int sweetness_level_; //integer representing sweetness level of dessert on a scale of 1 to 10
        bool contains_nuts_; //flag indicating if dessert contains nuts
};

#endif