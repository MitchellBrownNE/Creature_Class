#include <iostream>
#include <string>
#include <iomanip>

//Make Creature, Phoenix, Basilisk class here
class Creature
{
    public:
        std::string CreatureName = "Unknown";
        std::string CreatureType = "Unknown";
        int CreatureQuantity = 0;
        
        Creature()
        {
            
        }
        
        Creature(std::string Name, int Quantity)
        {
            CreatureName = Name;
            CreatureQuantity = Quantity;
        }
        
        
        void SetCreatureName(std::string Name)
        {
            CreatureName = Name;
        }
    
        std::string GetCreatureName()
        {
            return CreatureName;
        }
        
        void SetCreatureQuantity(int Quantity)
        {
            if (Quantity < 0)
            {
                Quantity = (Quantity * -1);
                
                CreatureQuantity = Quantity;
            }
            else
            {
                CreatureQuantity = Quantity;
            }
        }
        
        int GetCreatureQuantity()
        {
            return CreatureQuantity;
        }
        
        void printStatement()
        {
            std::cout << "There's " << CreatureQuantity << " creature's named " << CreatureName << std::endl;;
        }
};

//Pheonix class inherited from Creature class
class Phoenix: public Creature
{
    public:
        std::string CreatureColor;
        std::string CreatureType = "phoenixes";
    
        void setColor(std::string Color)
        {
            CreatureColor = Color;
        }
    
        std::string GetColor()
        {
            return CreatureColor;
        }
        
        void SetCreatureQuantity (int Quantity)
        {
            CreatureQuantity = Quantity;
        }
    
        void SetCreatureName(std::string Name)
        {
            CreatureName = Name;
        }
        
        void printStatement()
        {
            std::cout << "There's " << CreatureQuantity << " " << CreatureColor << " " << CreatureType << " named " << CreatureName << std::endl;;
        }
        
};

//Basilisk class inherited from Creature class
class Basilisk: public Creature
{
    public:
    
        std::string CreatureType = "basilisk";
        int CreatureQuantity = 1;
    
        void SetCreatureName(std::string Name)
        {
            CreatureName = Name;
        }
        
        void printStatement()
        {
            std::cout << "There's " << CreatureQuantity << " " << CreatureType << " named " << CreatureName << std::endl;
        }
};



int main()
{
	//Create empty array of size 3 for storing names
    std::string nameArr[3];
    
	//Create a loop to record user input as names
	for (int i = 0; i < 2; i++)
	{
        std::cout << "Please enter creature #" << (i+1) << "'s name:";
        std::cin >> nameArr[i];
	}
    //Sets third name to “Clover”
    nameArr[2] = "Clover";

    
	Creature c(nameArr[0], 2);
	//Print statement from class
    std::cout << std::endl;
	c.printStatement();

	Phoenix p;

	//Sets name, quantity and color
	p.SetCreatureName(nameArr[1]);
	p.SetCreatureQuantity(3);
	p.setColor("golden");

    //Print statement from class
	p.printStatement();

	Basilisk b;

    //Sets name
	b.SetCreatureName(nameArr[2]);

    //Prints statement from class
	b.printStatement();
}




