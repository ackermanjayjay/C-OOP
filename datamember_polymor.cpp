#include <iostream>    
using namespace std;    
class Animal {                                          //  base class declaration. 
private:
string hewan;
    public:   
    void setHewan()
    {
    this->hewan;
      cout<<"Masukkan Hewan: "<<endl;
    cin>>hewan;
    cout<<"Nama Hewan: "<<hewan<<endl;
    }
};     
class Dog: public Animal                       // inheriting Animal class.  
{ 
    private: 
    string color;
 public:    
   void setWarna()
   {
       this->color;
    cout<<"Masukkan Warna Hewan: "<<endl;
    cin>>color;
     cout<<"Warna hewan: "<<color<<endl;
   }
   
};    
int main() {    
    Dog an1;
    an1.setHewan();
    an1.setWarna();     
}    
