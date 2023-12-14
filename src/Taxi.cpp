#include "Taxi.h"
#include <iostream>

using namespace std;

void Taxi::SetIncomes(){
    for(int i=0;i<4;i++){
        cout<<"Wprowadz przychody z "<<_Company_Names[i]<<endl;
        cin>>_incomes[i];
    }
}
void Taxi::SetFuel(){
    cout<<"Wprowadz wartosc paliwa\n";
    cin>>_fuel_value;
}
double Taxi::TotalIncome(){
    double sum=0;
    for(int i=0;i<4;i++)
        sum+=_incomes[i];
    return sum;
}
double Taxi::VAT(){
    return (TotalIncome()*0,23 - _fuel_value*0,23);
}
void Taxi::Print(){
    
}
double Taxi::GetIncome(int i){
    return _incomes[i];
}
string Taxi::GetCompanyNames(int i){
    return _Company_Names[i];
}