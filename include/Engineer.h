//
// Created by Anton Korkunov on 13/02/2020.
//

#ifndef LAB6_ENGINEER_H
#define LAB6_ENGINEER_H

#include "Employee.h"
#include "WorkTime.h"
#include "Heading.h"
#include "Project_Payment.h"
//#include "Project.h"


class Engineer : public Employee, public WorkTime, public Project_Payment{

public:
    Engineer(float _BudgetProportion,float _payrate,int _id, string _FIO, int _worktime,string _Prof);
    double WorkTime_Payment() override;
    double ProjectPayment() override;
};

class Programmer : public Engineer {
public:
    Programmer(float _BudgetProportion,float _payrate,int _id, string _FIO, int _worktime, string _Prof):Engineer( _BudgetProportion, _payrate, _id,  _FIO,  _worktime, _Prof){};
    void Payday() override;
    double Calculate() override ;
};

class Tester : public Engineer {
public:
    Tester(float _BudgetProportion,float _payrate,int _id, string _FIO, int _worktime, string _Prof):Engineer( _BudgetProportion, _payrate, _id,  _FIO,  _worktime, _Prof){};
    void Payday() override;
    double Calculate() override ;
};

class TeamLeader : public Programmer, public Heading{
public:
    TeamLeader(float _BudgetProportion,float _payrate,int _id, string _FIO, int _worktime,string _Prof, int _Sub, float MRate);
    double Heading_Payment() override;
    void Payday() override;
    double Calculate() override;

};
#endif //LAB6_ENGINEER_H
