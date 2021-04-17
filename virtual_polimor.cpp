#include <iostream>    
using namespace std;    
class Shape {       
    private: 
    int ukuran;
    //  base class  
    public:    
virtual void draw(){                             // virtual function  
      this->ukuran;
        cout<<"Ukuran Shape: "<<endl;
    cin>>ukuran;
     cout<<"Hasil Ukuran Shape : "<<ukuran<<endl;
    }     
};     
class Rectangle: public Shape                  //  inheriting Shape class.  
{      
    private:
    int panjang;
 public:    
 void draw()      
   {      
       this->panjang;
       cout<<"Besarnya Rectangle: "<<endl;
       cin>>panjang;
        cout<<"Hasil Panjang Rectangle : "<<panjang<<endl;
    }      
};    
class Circle: public Shape                        //  inheriting Shape class.  
  
{      
    private:
    int jari;
 public:    
 void draw()      
   {      
       this->jari;
      cout<<"Jari-jari lingkaran: "<<endl;
      cin>>jari;
         cout<<"Hasil Jari-jari lingkaran : "<<jari<<endl;
   }      
};    
int main(void) {    
    Shape *s;                               //  base class pointer.  
    Shape sh;                               // base class object.  
       Rectangle rec;    
        Circle cir; 
      s=&sh;    
     s->draw();     
        s=&rec;    
     s->draw();   
     s=&cir;
    s->draw();     
}    
