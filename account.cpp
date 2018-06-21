#include <stdio.h>
#include <iostream>
using namespace std;

class Person
{
  string name;
  int age;
  int id;

public:
    Person (){}
  Person (string _name, int _age, int _id)
  {
    name = _name;
    age = _age;
    id = _id;
  }

  string getName ()
  {
    return name;
  }

  int getAge ()
  {
    return age;
  }
  int getId ()
  {
    return id;
  }

  void setName (string ujname)
  {
    name = ujname;
  }

  void setAge (int ujage)
  {
    age = ujage;
  }

  void setId (int ujId)
  {
    id = ujId;
  }

  
  void toString ()
  {
    std::
      cout << "Name: " << getName () << " ID: " << getId () << " Age: " <<
      getAge () << std::endl;
  }
};

class Account
{
  Person owner;
  int amount;

public:
    Account (string _name, int _age, int _id, int _amount)
  {
    owner.setName(_name);
    owner.setAge(_age);
    owner.setId(_id);
    amount=_amount;
  }
  int getAmount(){return amount;}
  void in(int be){amount+=be;}
  bool out (int ki){amount-=ki;}
  
void toString (){
    std::cout << owner.getName() << std::endl;
    std::cout << owner.getAge() << std::endl;
    std::cout << owner.getId() << std::endl;
    std::cout << getAmount() << std::endl;
}
};

main ()
{
    Account ac("jani", 16, 1155,1200);
    ac.toString();
    ac.in(1000);
    ac.toString();
    ac.out(2000);
    ac.toString();
  return 0;
}