#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    system("cls");

    double init = 0;
    double percent = 0;
    int time = 0, month = 0;

    float amount = 0, expenses = 0;

    cout << "Enter Initial Amount->";
    cin >> init;
    cout << "Enter Percentage increase->";
    cin >> percent;
    cout << "Enter Number of days->";
    cin >> time;
    cout << "Enter Number of Months->";
    cin >> month;
    cout << "Enter Expenses of each month->";
    cin >> expenses;


    amount = init;

    for (int j = 1; j <= month;j++){
        for (int i = 1; i <= time; i++)
            init = init + percent * init / 100;

        init = init - expenses;
    }
       

    cout << "\nProfit ->" << init-amount;

    getch();
}