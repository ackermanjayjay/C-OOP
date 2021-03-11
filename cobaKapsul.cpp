#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;
    string band;
    string name;

  public:
    // Setter
    void setName(string nam)
    {
      name = nam;
      cout <<"Masukkan Nama = ";
      cin >> name;
    }
    void setBand(string grup)
    {
        band = grup;
        
    }
    void setSalary(int s) {
      salary = s;
      cout<<"Masukkan Gaji = ";
      cin>> salary;
    }
    // Getter
    int getSalary() {
      return salary;
    }
    string getName()
    {
      return name;
    }

    string getBand()
    {
        return band;
    }
    void tampil()
    {
       cout <<"\nNama : " <<name;
        cout <<"\nMendapat Gaji Rp." <<salary;
                cout <<"\nNama Band = " <<band;


    }
};

int main() {
  Employee Roselia;
  Roselia.setSalary(0);
  Roselia.setBand("Roselia");
  Roselia.setName("");
    Roselia.tampil();

} 
