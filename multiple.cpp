/*write a class called Pet
it inherits from both the class Patient and the class Dog
Pet has one private member: name
Pet has public getName and setName functions.*/

#include <iostream>
using namespace std;

//base: Patient
class Patient
{
    private:
        int idNumber;
    public:
        void setIdNumber(int idIn);
        int getIdNumber();
};

void Patient::setIdNumber(int idIn){
  idNumber=idIn;
}

int Patient::getIdNumber(){
  return idNumber;
}

//base: Dog 
class Dog
{
    private:
        string breed;
    public:
        void setBreed(string breedIn);
        string getBreed();
};
  
void Dog::setBreed(string breedIn){
  breed=breedIn;
}

string Dog::getBreed(){
  return breed;
}

class Pet: public Dog, public Patient{
   private:
  string name;
public:
  void setName(string name1);
  string getName();
};

void Pet::setName(string name1){
  name=name1;
}

string Pet::getName(){
  return name;
}



int main()
{
    Pet p1;
    p1.setName("Kali");
    p1.setIdNumber(44444);
    p1.setBreed("Aussie");
    
    cout<<p1.getName()<<" "<<p1.getIdNumber()<<" "<<p1.getBreed();
    return 0;
}
