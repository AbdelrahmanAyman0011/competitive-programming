#include <iostream>
using namespace std;

class Pizza{
    private:
        void makeBase(){
            cout << "Making"<<getPizzaName() << " pizza" << endl;
        }
        void bakePizza(){
            cout << "baking"<<getPizzaName() << " pizza" << endl;
        }
        void addToppings(){
            cout << "adding toppings for"<<getPizzaName() << " pizza" << endl;
        }
        
    protected:
        virtual const char* getPizzaName() = 0;
    public:
        void MakePizza(){
            makeBase();
            addToppings();
            bakePizza();
        }
};

class ChickenPizza : public Pizza{
    protected:
        virtual const char* getPizzaName(){
            return " chicken";
        }
};
class BeefPizza : public Pizza{
    protected:
        virtual const char* getPizzaName(){
            return " Beef";
        }
};
class CheesePizza : public Pizza{
    protected:
        virtual const char* getPizzaName(){
            return " Cheese";
        }
};

class shrimpPizza : public Pizza{
    protected:
        virtual const char* getPizzaName(){
            return " shrimp";
        }
};

void BuyPizza(Pizza* pizza){
    pizza-> MakePizza();
}

int main(){
    cout << "please choose pizza type  1 beef, 2 chicken, 3 cheese , 4 shrimp  :\n";
    int choice;
    cin >> choice;
    Pizza* pizza = NULL;

    switch(choice){
        case 1:
            pizza = new BeefPizza;
            break;
        case 2:
            pizza = new ChickenPizza;
            break;
        case 3:
            pizza = new CheesePizza;
            break;
        case 4:
            pizza = new shrimpPizza;
            break;
        default:
            cout << "invalid choice" << endl;
    }
    if(pizza){
        BuyPizza(pizza);
        delete pizza;
    }
}