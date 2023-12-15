#include "Taxi.h"
#include <iostream>
#include <fstream>
#include <filesystem> 
#include <cstdlib>

using namespace std;

void WriteToFile(Taxi& myTaxi,string FileName){
    ofstream FileWrite(FileName,ios_base::app | ios_base::binary);
    if(FileWrite.is_open()){
        FileWrite<<myTaxi.TotalIncome()<<endl;
        FileWrite<<myTaxi.VAT()<<endl;
        for(int i=0;i<4;i++)
            FileWrite<<myTaxi.GetIncome(i)<<endl;
        FileWrite.close();
    }
    else{
        cerr<<"Nie mozna otworzyc pliku "<<FileName<<endl;
        exit(EXIT_FAILURE);
    }
}
void ReadFromFile(string FileName){
    ifstream FileRead(FileName,ios_base::binary);
    if(FileRead.is_open()){
        char sign;
        while((sign=FileRead.get()) != EOF)
            cout<<sign;
        FileRead.close();
        
    }
    else{
        cerr<<"Nie mozna odczytac pliku "<<FileName<<endl;
        exit(EXIT_FAILURE);
    }
}
void ReadSummaryFile(string FileName,array<double,7>& SummaryData){
    ifstream FileRead(FileName,ios_base::binary);
    if(FileRead.is_open()){
        for(int i=0;i<7;i++)
            cin>>SummaryData[i];
        FileRead.close();
    }
    else{
        cerr<<"Nie mozna odczytac pliku "<<FileName<<endl;
        exit(EXIT_FAILURE);
    }
}
void Summary(Taxi& myTaxi,array<double,7>& SummaryData){
      SummaryData[0]+=myTaxi.TotalIncome();
      for(int i=0;i<4;i++)
        SummaryData[i+1]+=myTaxi._incomes[i];
      SummaryData[5]+=myTaxi.VAT();
      SummaryData[6]+=myTaxi._fuel_value;  
    
}

void WriteSummaryFile(Taxi& myTaxi,array<double,7>& SummaryData,string FileName){
    if(filesystem::exists(FileName)){
        ReadSummaryFile(FileName,SummaryData);
    }
    ofstream FileWrite(FileName,ios_base::binary | ios_base::trunc);
    if(FileWrite.is_open()){
        Summary(myTaxi,SummaryData);     
        for(int i=0;i<7;i++)
            cout<<SummaryData[i]<<endl;
        FileWrite.close();
    }
    else{
        cerr<<"Nie mozna otworzyc pliku "<<FileName<<endl;
        exit(EXIT_FAILURE);
    }
}

int main(void){
    Taxi myTaxi;
    myTaxi.SetIncomes();
    myTaxi.SetFuel();
    string FileName="Stats.dat";
    array<double,7> SummaryData;  // total_income[0] , total_uber[1], total_bolt[2], total_freeNow[3],total_wolnyprzejazd[4], total_VAT[5],total_Fuel[6]
   
    return 0;
}