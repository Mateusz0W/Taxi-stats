#include "Taxi.h"
#include <iostream>
#include <fstream>
#include <filesystem> 
#include <cstdlib>

using namespace std;

void WriteToWeekFile(Taxi& myTaxi,string FileName){
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
void ReadFile(string FileName,vector <double>& Data){
    ifstream FileRead(FileName,ios_base::binary);
    if(FileRead.is_open()){
        FileRead.seekg(0,ios::end);
        size_t size=FileRead.tellg();
        Data.resize(size);
        FileRead.seekg(0,ios::beg);
        for(int i=0;i<size;i++)
            FileRead>>Data[i];
        FileRead.close();
    }
    else{
        cerr<<"Nie mozna odczytac pliku "<<FileName<<endl;
        exit(EXIT_FAILURE);
    }
}
void Summary(Taxi& myTaxi,vector<double>& SummaryData){
      SummaryData[0]+=myTaxi.TotalIncome();
      for(int i=0;i<4;i++)
        SummaryData[i+1]+=myTaxi._incomes[i];
      SummaryData[5]+=myTaxi.VAT();
      SummaryData[6]+=myTaxi._fuel_value;  
    
}

void WriteSummaryFile(vector<double>& SummaryData,string FileName){
    ofstream FileWrite(FileName,ios_base::binary | ios_base::trunc);
    if(FileWrite.is_open()){  
        for(int i=0;i<SummaryData.size();i++)
            FileWrite<<SummaryData[i]<<endl;
        FileWrite.close();
    }
    else{
        cerr<<"Nie mozna otworzyc pliku "<<FileName<<endl;
        exit(EXIT_FAILURE);
    }
}

void WeekPrint(vector<double> WeekData,Taxi myTaxi){
    int day=1;
    int i=0;
    while( i<WeekData.size()){
        cout<<"---Dzien "<<day<<"---\n";
        cout<<"Calkowity przychod: "<<WeekData[i]<<" zl\n";
        cout<<"VAT do zwrocenia: "<<WeekData[i+1]<<" zl\n";
        for(int j=0;j<4;j++)
            cout<<"Przychod z "<<myTaxi.GetCompanyNames(j)<<": "<<WeekData[i+2+j]<<" zl\n";
        cout<<"-----------\n\n";
        i+=6;
        day++;
    }
}
void SummaryPrint(vector<double> SummaryData,Taxi myTaxi){
    cout<<"----Podsumowanie----\n";
    cout<<"Calkowity przychod: "<<SummaryData[0]<<" zl\n";
    for(int j=0;j<4;j++)
            cout<<"Przychod z "<<myTaxi.GetCompanyNames(j)<<": "<<SummaryData[j+1]<<" zl\n";
    cout<<"VAT: "<<SummaryData[5]<<" zl\n";
    cout<<"Kwota zuzytego paliwa: "<<SummaryData[6]<<" zl\n";
    cout<<"--------------------\n";
}

int main(void){
    Taxi myTaxi;
    string WeekFileName="Week.dat";
    string SummaryFileName="Summary.dat";
    vector<double> SummaryData(7,0.0);  // total_income[0] , total_uber[1], total_bolt[2], total_freeNow[3],total_wolnyprzejazd[4], total_VAT[5],total_Fuel[6]
    vector<double> WeekData;
    while(true){
        cout<<"wprowadz '1' jesli chcesz dopisac dane '2' odczytac biezacy tydzien '3' jesli odczyta  podsumowanie '4' usunąc biezacy tydzien \n";
        int choice;
        cin>>choice;
        switch (choice)
        {
        case 1:
            myTaxi.SetIncomes();
            myTaxi.SetFuel();
            WriteToWeekFile(myTaxi,WeekFileName);
            if(filesystem::exists(SummaryFileName)){
                ReadFile(SummaryFileName,SummaryData);
                Summary(myTaxi,SummaryData); 
                WriteSummaryFile(SummaryData,SummaryFileName);
            }
            else{
                Summary(myTaxi,SummaryData); 
                WriteSummaryFile(SummaryData,SummaryFileName);
            }
            break;
    
        case 2:
            ReadFile(WeekFileName,WeekData);
            WeekPrint(WeekData,myTaxi);
            break;

        case 3:
            ReadFile(SummaryFileName,SummaryData);
            SummaryPrint(SummaryData,myTaxi);
            break;

        case 4:
            ofstream File(WeekFileName,ios_base::trunc);
            File.close();
            cout<<"oprozniono plik\n";
            break;
        }
}
    return 0;
}