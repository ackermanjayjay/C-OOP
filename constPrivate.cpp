#include<iostream>

using namespace std;

class Book
{

private:
int date,
   semester,
      id,
      masuk;
string name,
         cek,
      jurusan;

public:
Book(int tanggal,
      int tempuh,
      int nomor,
      int pass,
      int masuk,
      string liat,
      string nama,
       string prodi)
      {
         cek = liat;
         date = tanggal;
          masuk = pass;
         semester = tempuh;
         id = nomor;
         name = nama;
         jurusan = prodi;
        
      }
string cekNama()
{
   while("cek")
   {
   cout << "Insert your name : ";
   cin>>name;
   if( name =="Ackerman")
   {
      cout<<"\nWelcome Ackerman"<<endl;
      break;
   }
   else if (name !="Ackerman"){
         cout<<"\nInvalid login please try again : \n";
  
   }
   
         
   
   }
 return name;
}
int cekId()
{
   while(masuk)
   {
      cout<<"Insert Your ID = ";
      cin>> id;
      cout<<"Insert Your Semester = ";
      cin>> semester;
   if( id == 470055 & semester == 4)
   {
     cout<<"\nYour Prodi is = Informatika"<<endl;
     cout<< "\nYou must in this Uni in 2019"<<endl;
     break; 
   } 
         }
         return semester;
           return id; 
      }
      int cekDate()
      {
         date = 2019;
         return date;
      }


void display()
{
   cout <<"\nYour Name is = "<<name<<endl;
   cout <<"Your ID is = "<<id<<endl;
   cout <<"Your Semester is = "<<semester<<endl;
   cout <<"Date in is = "<<date<<endl;
   
}


};



int main()
{
   Book book1(0,0, 0,0,0," ", " ", " ");
   book1.cekNama();
   book1.cekId();
   book1.display();


 return 0;  
}