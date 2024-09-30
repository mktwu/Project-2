#ifndef MAINCOURSE_H
#define MAINCOURSE_H
#include "Dish.hpp"

class MainCourse : public Dish {
    public:
        enum CookingMethod {GRILLED, BAKED, FRIED, STEAMED, RAW};
        struct SideDish { //why can't SideDish just be called "Viand"? so much shorter and easier.
            std::string name;
            enum Category {GRAIN, PASTA, LEGUME, BREAD, SALAD, SOUP, STARCHES, VEGETABLE} category;
        };

        MainCourse(); //default constructor
        MainCourse(const std::string &name, const std::vector<std::string> &ingredients,
        const int prep_time, const double price,
        CuisineType cuisine_type, CookingMethod cooking_method,
        const std::string &protein_type,
        const std::vector<SideDish> &side_dishes,
        const bool gluten_free); //parameterized constructor

        //Accessors and Mutators
        void setCookingMethod(CookingMethod cooking_method); //@param cooking_method The new cooking method. @post Sets the private member `cooking_method_` to the value of the parameter.
        std::string getCookingMethod() const; //@return The cooking method of the main course (as an enum)

        void setProteinType(const std::string &protein_type); //@param protein_type A string representing the type of protein. @post Sets the private member `protein_type_` to the value of the parameter
        std::string getProteinType() const; //@return The type of protein in the main course.

        void addSideDish(const SideDish &side_dish); //@param side_dish A SideDish struct containing the name and category of the side dish. @post Adds the side dish to the `side_dishes_` vector. seriously this would be faster as "Viand"
        std::vector<SideDish> getSideDishes() const; // @return A vector of SideDish structs representing the side dishes served with the main course.

        void setGlutenFree(bool gluten_free); //@param gluten_free A boolean indicating if the main course is gluten free. @post Sets the private member `gluten_free_` to the value of the parameter.
        std::string isGlutenFree() const; //@return True if the main course is gluten-free, false otherwise.

    private:
        CookingMethod cooking_method_; //cooking method used for main course
        std::string protein_type_; //string describing type of protein used in main course
        std::vector<SideDish> side_dishes_; //vector containing SideDish structs representing the viands served with the main course
        bool gluten_free_; //flag/signal indicating if main course is gluten-free
};

#endif