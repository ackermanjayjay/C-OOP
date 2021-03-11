#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;
    string band;

  public:
    // Setter
    void setBand(string grup)
    {
        band = grup;
        cout <<"Masukkan Band = ";
        cin>>band;
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

    string getBand()
    {
        return band;
    }
    void tampil()
    {
        cout <<"\nNama Band = "<<band;
        cout <<"\nMendapat Gaji Rp." <<salary;

    }
};

int main() {
  Employee myObj;
  myObj.setSalary(0);
  myObj.setBand("");
    myObj.tampil();

} 