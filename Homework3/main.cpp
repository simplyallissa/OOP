#include <iostream>
#include <cstdlib>
using namespace std;

class Pizza {
public:
    //Accessor functions
    string getPizzaType();
    string getPizzaSize();
    int getCheeseToppingAmount();
    int getPepperoniToppingAmount();
    //Mutator functions
    void setPizzaType(string typeOfPizza);
    void setPizzaSize(string sizeOfPizza);
    void setNumberOfCheeseToppings(int cheeseToppingsOfPizza);
    void setNumberOfPepperoniToppings(int pepperoniToppingsOfPizza);
    //Function that outputs a textual description of the pizza object
    void outputDescription();
    //Function that computes the cost of the pizza and returns a double
    void pizzaCost();

private:
    string pizzaType;
    string pizzaSize;
    int pizzaCheeseToppingsAmount;
    int pizzaPepperoniToppingsAmount;
};

string Pizza::getPizzaType() {
    return pizzaType;
}

string Pizza::getPizzaSize() {
    return pizzaSize;
}

void Pizza::setPizzaType(string typeOfPizza) {
    pizzaType = typeOfPizza;
}

void Pizza::setPizzaSize(string sizeOfPizza) {
    pizzaSize = sizeOfPizza;
}

void Pizza::setNumberOfCheeseToppings(int cheeseToppingsOfPizza) {
    pizzaCheeseToppingsAmount = cheeseToppingsOfPizza;
}

void Pizza::setNumberOfPepperoniToppings(int pepperoniToppingsOfPizza) {
    pizzaPepperoniToppingsAmount = pepperoniToppingsOfPizza;
}

void Pizza::outputDescription() {
    cout << "Your pizza will be a " << pizzaSize << ", " << pizzaType << " with " << pizzaCheeseToppingsAmount << " cheese and " << pizzaPepperoniToppingsAmount << " pepperoni toppings, ";
}

//Small pizza $10 + $2 per topping
//Medium pizza $14 + $2 per topping
//Large pizza $17 + $2 per topping
void Pizza::pizzaCost() {
    int priceForToppings;
    pizzaSize = getPizzaSize();
    int numberOfToppings;
    numberOfToppings = pizzaCheeseToppingsAmount + pizzaPepperoniToppingsAmount;
    priceForToppings = (numberOfToppings * 2);
    if(pizzaSize == "small"){
        int finalCost = priceForToppings + 10;
        cout << "and will cost $" << finalCost << "." << endl;
    } else if (pizzaSize == "medium"){
        int finalCost = priceForToppings + 14;
        cout << "and will cost $" << finalCost << "." << endl;
    } else if(pizzaSize == "large"){
        int finalCost = priceForToppings + 17;
        cout << "and will cost $" << finalCost << "." << endl;
    } else {
        cout << "Your pizza must be small, medium, or large. For larger, specialty pizzas, please contact our sales department.";
    }
}

int main(){

    string typesOfPizza[3] = {"deep dish", "hand tossed", "pan"};
    string sizesOfPizza[3] = {"small", "medium", "large"};

    for (int i=0; i < 3; i++) {
        Pizza userPizza;
        userPizza.setPizzaType(typesOfPizza[i]);
        userPizza.setPizzaSize(sizesOfPizza[i]);
        userPizza.setNumberOfCheeseToppings(i + 1);
        userPizza.setNumberOfPepperoniToppings(i + 1);
        userPizza.outputDescription();
        userPizza.pizzaCost();
    };

}



