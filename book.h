#include <iostream>
#include <string>
using namespace std;
class book
{
  public:
   void settitle(string name)
   {
     this->title="maybesomeday";
   }
   void settotalpages(int pages)
   {
     this->totalpages=700;
   }
   void setcost(float price)
   {
     this->cost=2000;
   }
   string gettitle()
   {
     return this->title;
   }
   int gettotalpages()
   {
     return this->totalpages;
   }
   float getcost()
   {
     return this->cost;
   }
   void displaybook()
   {
     cout<<"Hi I am a book"<<endl;
     cout<<"My name is maybesomeday."<<endl;
     cout<<"I'm a happy book that smells good ;)"<<endl;
   }
  private:
   string title;
   int totalpages;
   float cost;

 
};
