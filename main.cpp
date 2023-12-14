#include "Taxi.h"
#include <iostream>
#include <fstream>
#include <filesystem> 
#include <cstdlib>

using namespace std;

void WriteToFile(Taxi& myTaxi,string FileName){
    ofstream FileWrite(FileName,ios_base::binary);
    if(FileWrite.is_open()){
        FileWrite<<"------------------------\n\n";
        FileWrite<<"Podsumuwanie:\n\n";
        FileWrite<<"Calkowity przychod: "<<myTaxi.TotalIncome()<<endl;
        FileWrite<<"VAT do zwrocenia :"<<myTaxi.VAT()<<endl<<endl;
        FileWrite<<"------------------------\n\n";
        for(int i=0;i<4;i++){
            FileWrite<<"Przychod z "<<myTaxi.GetCompanyNames(i)<<":\n";
            FileWrite<<myTaxi.GetIncome(i); 
        }
        FileWrite<<"\n\n------------------------\n\n\n ";
        FileWrite.close();
    }
    else{
        cerr<<"Nie mozna otworzyc pliku "<<FileName<<endl;
        exit(EXIT_FAILURE);
    }
}
void ReadFromFile(Taxi& myTaxi,string FileName){
    ifstream FileRead(FileName,ios_base::binary);
    if(FileRead.is_open()){
       /* FileRead.seekg(0,ios::end);
        size_t FileSize=FileRead.tellg();
        FileRead.seekg(0,ios::beg);
        char *buffer= new char[FileSize+1];*/
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

int main(void){
    Taxi myTaxi;
    myTaxi.SetIncomes();
    myTaxi.SetFuel();

    string FileName="Stats.dat";
    if(filesystem::exists(FileName)){

    }
    else{
       WriteToFile(myTaxi,FileName);
       ReadFromFile(myTaxi,FileName);
    }
    return 0;
}