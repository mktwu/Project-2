#ifndef APPETIZER_H
#define APPETIZER_H
#include "Dish.hpp"

class Appetizer : public Dish {
    public:
        enum ServingStyle {PLATED, FAMILY_STYLE, BUFFET};

        Appetizer(); //default constructor
        Appetizer(const std::string &name, const std::vector<std::string> &ingredients,
        const int prep_time,
        const double price,
        CuisineType cuisine_type,
        ServingStyle serving_style,
        const int spiciness_level,
        const bool vegetarian); //parameterized constructor

        // Accessors and Mutators
        void setServingStyle(ServingStyle serving_style);
        std::string getServingStyle() const;

        void setSpicinessLevel(int spiciness_level);
        int getSpicinessLevel() const;

        void setVegetarian(bool vegetarian);
        std::string isVegetarian() const;

    private:
        ServingStyle serving_style_;
        int spiciness_level_;
        bool vegetarian_;
};

#endif