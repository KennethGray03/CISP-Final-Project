#include <string>
#include <iostream>
using namespace std;

class Auto
{
private: string* InvNum;
       string* Location;

       void AllocateMemory()
       {
           InvNum = new string;
           Location = new string;
       }

public:
    Auto()
    {
        AllocateMemory();
    }

    Auto(string k, string s)
    {
        AllocateMemory();
        setInvNum(k);
        setLocation(s);

    }
    ~Auto()
    {
        delete InvNum;
        delete Location;
    }
    string getInvNum() const
    {
        return *InvNum;
    }
    string getLocation() const
    {
        return *Location;
    }

    void setInvNum(string A) const
    {
        if (A.empty())
        {
            cout << "(Warning: Unable to set the Inventory Number because it cannot be an empty string!)";
        }
        else
            *InvNum = A;
    }
    void setLocation(string B) const
    {
        if (B.empty())
        {
            cout << "(Warning: Unable to set the Location because it cannot be an empty string!)";
        }
        else
            *Location = B;
    }

    virtual void print()
    {
        cout << "Base Class - Inventory Information\n" << endl;
        cout << "----------------------------------\n";
        cout << "Inventory Number: " << getInvNum() << endl << endl;
        cout << "Location        : " << getLocation() << endl;

    }
};
class Car : public Auto
{
private:
    string CarMake, CarModel, Color, InteriorC;
    int carYB = 0, NumDoorscar = 0;
public:
    Car()
    {

    }
    Car(string InvNum, string Location, string Make, string InteriorC, string Model, string Color, int carYB, int NumDoorscar)
    {
        setInvNum(InvNum);
        setLocation(Location);
        setMake(Make);
        setModel(Model);
        setColor(Color);
        setInterior(InteriorC);
        setYearBuilt(carYB);
        setNumDoors(NumDoorscar);


    }

    int getYearBuilt() const
    {
        return carYB;
    }
    int getNumDoors() const
    {
        return NumDoorscar;
    }

    string getCarMake() const
    {
        return CarMake;
    }
    string getCarModel() const
    {
        return CarModel;
    }
    string getColor() const
    {
        return Color;
    }
    string getInterior() const
    {
        return InteriorC;
    }
    void setMake(string Make)
    {
        if (Make.empty())
        {
            cout << "(Warning: Unable to set the Make because it cannot be an empty string!)";
        }
        else
            CarMake = Make;
    }
    void setModel(string Model)
    {
        if (Model.empty())
        {
            cout << "(Warning: Unable to set the Model because it cannot be an empty string!)";
        }
        else
            CarModel = Model;
    }
    void setColor(string Colorp)
    {
        if (Colorp.empty())
        {
            cout << "(Warning: Unable to set the Color because it cannot be an empty string!)";
        }
        else
            Color = Colorp;
    }
    void setInterior(string Interior)
    {
        if (Interior.empty())
        {
            cout << "(Warning: Unable to set the Interior because it cannot be an empty string!)";
        }
        else
            InteriorC = Interior;

    }
    void setYearBuilt(int YBp)
    {
        if (1899 >= YBp)
        {
            cout << "(Warning: Unable to set the Year because it must be 1900 or greater!)";
        }
        else
            carYB = YBp;
    }
    void setNumDoors(int NumDoorsp)
    {
        if (NumDoorsp <= 0)
        {
            cout << "(Warning: Unable to set the number of doors because it must be above 0!)";
        }
        else
            NumDoorscar = NumDoorsp;
    }


    virtual void print()
    {
        cout << endl << endl << "Derived Class - Car Information\n" << endl;
        cout << "-------------------------------\n";
        cout << "Inventory Number: " << getInvNum() << endl << endl;
        cout << "Location        : " << getLocation() << endl << endl;
        cout << "Make            : " << getCarMake() << endl << endl;
        cout << "Model           : " << getCarModel() << endl << endl;
        cout << "Color           : " << getColor() << endl << endl;
        cout << "Year            : " << getYearBuilt() << endl << endl;
        cout << "Number of doors : " << getNumDoors() << endl << endl;
        cout << "Interior        : " << getInterior() << endl;

    }


};
class Truck : public Auto
{
private:
    string MakeT, ModelT, ColorT, TowCapT;
    int YBT = 0, NumDoorsT = 0;
public:
    Truck()
    {

    }
    Truck(string InvNum, string Location, string Make, string Model, string Color, int YB, int NumDoors, string TowCap)
    {
        setInvNum(InvNum);
        setLocation(Location);
        setMake(Make);
        setModel(Model);
        setColor(Color);
        setYearBuilt(YB);
        setNumDoors(NumDoors);
        setTowCap(TowCap);

    }
    int getYearBuilt() const
    {
        return YBT;
    }
    int getNumDoors() const
    {
        return NumDoorsT;
    }

    string getCarMake() const
    {
        return MakeT;
    }
    string getCarModel() const
    {
        return ModelT;
    }
    string getColor() const
    {
        return ColorT;
    }

    string getTowCap()
    {
        return TowCapT;
    }


    void setMake(string Make)
    {
        if (Make.empty())
        {
            cout << "(Warning: Unable to set the Make because it cannot be an empty string!)";
        }
        else
            MakeT = Make;
    }
    void setModel(string Model)
    {
        if (Model.empty())
        {
            cout << "(Warning: Unable to set the Model because it cannot be an empty string!)";
        }
        else
            ModelT = Model;
    }
    void setColor(string Color)
    {
        if (Color.empty())
        {
            cout << "(Warning: Unable to set the Color because it cannot be an empty string!)";
        }
        else
            ColorT = Color;
    }
    void setYearBuilt(int YB)
    {
        if (1899 >= YB)
        {
            cout << "(Warning: Unable to set the Year because it must be 1900 or greater!)";
        }

        YBT = YB;
    }
    void setNumDoors(int NumDoors)
    {
        if (NumDoors <= 0)
        {
            cout << "(Warning: Unable to set the number of doors because it must be above 0!)";
        }
        else
            NumDoorsT = NumDoors;
    }
    void setTowCap(string TowCap)
    {
        if (TowCap.empty())
        {
            cout << "(Warning: Unable to set the Towing Capacity because it cannot be an empty string!)";
        }
        else
            TowCapT = TowCap;

    }


    virtual void print()
    {
        cout << endl << endl << "Derived Class - Truck Information\n" << endl;
        cout << "---------------------------------\n";
        cout << "Inventory Number: " << getInvNum() << endl << endl;
        cout << "Location        : " << getLocation() << endl << endl;
        cout << "Make            : " << getCarMake() << endl << endl;
        cout << "Model           : " << getCarModel() << endl << endl;
        cout << "Color           : " << getColor() << endl << endl;
        cout << "Year            : " << getYearBuilt() << endl << endl;
        cout << "Number of doors : " << getNumDoors() << endl << endl;
        cout << "Towing capacity : " << getTowCap() << endl;

    }

};

int main()
{
    cout << "                             Class Inheritance Program" << endl << endl << endl;
    Auto obj("BN549", "Nashville");
    obj.print();

    Car obj1("BK576", "Knoxville", "Chevy", "Leather", "Camaro", "Yellow", 2023, 2);

    obj1.print();

    Truck obj2;

    obj2.setInvNum("BA342");
    obj2.setLocation("Ashville");
    obj2.setMake("Ford");
    obj2.setModel("350");
    obj2.setColor("Red");
    obj2.setYearBuilt(2019);
    obj2.setNumDoors(4);
    obj2.setTowCap("21000");
    obj2.print();

    return 0;
}
