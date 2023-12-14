#ifndef TAXI_H
#define TAXI_H

#include <array>
#include <string>

class Taxi{
    private:
        std::array<int,4> _incomes;  //uber[0]  bolt[1]  freenow[2]  wolny_przejazd[3]
        std::array<std::string,4> _Company_Names={"Uber","Bolt","FreeNow","Wolny przejazd"}
    public:
        void SetIncomes();

};

#endif