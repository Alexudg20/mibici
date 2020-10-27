#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

class Bici
{
public:
string ID;
int Uso, Dis;
    Bici(){
}

Bici(const string ID, const int Uso, const int Dis)
{
    this->ID = ID;
    this->Uso = Uso;
    this->Dis = Dis;
}

~Bici()
{
}

void setID(const string ID){
    this -> ID = ID;
}
string getID(){
    return this -> ID;
}
void setUso(const int Uso){
    this ->Uso=Uso;
}
int getUso(){
    return this->Uso;
}
void setDis(const int Dis){
    this ->Dis=Dis;
}
int getDis(){
    return this->Dis;
}
bool repite(Bici a){
    return (a.getID()==(this->ID)&& a.getUso()==(this->Uso)&& a.getDis()==(this->Dis));

}
void mostrar(){
    cout<<this->ID;
}};