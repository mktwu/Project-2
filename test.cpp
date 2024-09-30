#include "Dish.hpp"
#include "Appetizer.hpp"
#include "Dessert.hpp"
#include "MainCourse.hpp"
#include<iostream>

int main(){
    Appetizer test1;
    test1.setSpicinessLevel(7);
    test1.setServingStyle(Appetizer::FAMILY_STYLE);
    test1.setVegetarian(true);
    test1.getName();
    test1.getIngredients();
    test1.getPrepTime();
    test1.getPrice();
    test1.getCuisineType();
    test1.display();
    std::cout << "Spiciness Level: " << test1.getSpicinessLevel() << std::endl;
    std::cout << "Serving Style: " << test1.getServingStyle() << std::endl;
    std::cout << "Vegetarian: " << test1.isVegetarian() << std::endl;

    std::cout << std::endl;
  
    std::vector<std::string> ingredients = {"Chicken", "Olive Oil", "Garlic", "Rosemary"};
    std::vector<MainCourse::SideDish> side_dishes;
    side_dishes.push_back({ "Mashed Potatoes", MainCourse::SideDish::STARCHES });
    side_dishes.push_back({ "Green Beans", MainCourse::SideDish::VEGETABLE });
    MainCourse test2("Grilled Chicken", ingredients, 30, 18.99, Dish::AMERICAN, MainCourse::GRILLED, "Chicken", side_dishes, true);
    test2.setGlutenFree(true);
    test2.display();
    std::cout << "Cooking Method: " << test2.getCookingMethod() << std::endl;
    std::cout << "Protein Type: " << test2.getProteinType() << std::endl;
    std::cout << "Side Dishes: ";
    for (const auto& side_dish : test2.getSideDishes()) {
    std::cout << side_dish.name << " (" << side_dish.category << ")" << ", ";}
    std::cout << std::endl;
    std::cout << "Gluten-Free: " << test2.isGlutenFree() << std::endl;

    std::cout << std::endl;

    std::vector<std::string> ingredients2 = {"Flour", "Sugar", "Cocoa Powder", "Eggs"};
    Dessert test3("Chocolate Cake", ingredients2, 45, 7.99, Dish::FRENCH, Dessert::SWEET, 9, false);
    test3.display();
    std::cout << "Flavor Profile: " << test3.getFlavorProfile() << std::endl;
    std::cout << "Sweetness Level: " << test3.getSweetnessLevel() << std::endl;
    std::cout << "Contains Nuts: " << test3.containsNuts() << std::endl;
}