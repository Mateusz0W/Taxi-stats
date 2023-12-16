#ifndef TAXI_H
#define TAXI_H

#include <array>
#include <vector>
#include <string>

class Taxi{
    private:
        std::array<double,4> _incomes;  //uber[0]  bolt[1]  freenow[2]  wolny_przejazd[3]
        std::array<std::string,4> _Company_Names={"Uber","Bolt","FreeNow","Wolny przejazd"};
        double _fuel_value;
    public:
        void SetIncomes();
        void SetFuel();
        double TotalIncome();
        double VAT();
        double GetIncome(int i);
        std::string GetCompanyNames(int i);
        friend void Summary(Taxi& myTaxi,std::vector<double>& SummaryData);

};

#endif