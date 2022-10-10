#include "Car.h"
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the size of the array: " << endl;
    cin >> n;
    Queue<Customer>queue;
    mechanic a[] = { mechanic("Khaled", 90211, 45,n), mechanic("Mohamed", 9324, 38,n),
    mechanic("Yosry", 9578, 48,n), mechanic("Mohanned", 9068, 53,n),
    mechanic("Steven", 9178, 50,n), mechanic("Karim", 9385, 33,n) };

    Customer arr[] = { Customer("Nada", 25), Customer("Nala", 32),
     Customer("Rafik", 40), Customer("Yassin", 20),
     Customer("Nour",  35), Customer("Lujain",  38) };
    Customer temp;
    

    Appointment AA;
    AA.hours = 1;
    AA.mins = 30;
    arr[0].setappintment(AA);
    a[0].setcount(6);
    Appointment AB;
    AB.hours = 2;
    AB.mins = 00;
    arr[1].setappintment(AB);
    a[1].setcount(6);
    Appointment AC;
    AC.hours = 12;
    AC.mins = 00;
    arr[2].setappintment(AC);
    a[2].setcount(6);
    Appointment AD;
    AD.hours = 1;
    AD.mins = 30;
    arr[3].setappintment(AD);
    a[3].setcount(6);
    Appointment AE;
    AE.hours = 2;
    AE.mins = 00;
    arr[4].setappintment(AE);
    a[4].setcount(6);
    Appointment AF;
    AF.hours = 3;
    AF.mins = 30;
    arr[5].setappintment(AF);
    a[5].setcount(6);




    for (int i = 0; i < 6; i++)
    {
        Appointment tmp = arr[i].getapointment();
        if (a[i].isAvailable(tmp))
        {
            arr[i].setmechanicid(a[i].getid());
            a[i].setappointment(arr[i].getapointment());
            arr[i].setmechanicname(a[i].getname());
            //Queue<Customer>.push(arr[i]);

        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            if (arr[i] > arr[j]) {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        queue.push(arr[i]);
    }

    while (!queue.isEmpty())
    {
        Customer C = queue.pop();

        //C.print();

        cout << "Customer " << C.getname() << " should be assigned to the mechanic " << C.getmechanicname() << " at " << C.getapointment().hours << " : " << C.getapointment().mins << endl;


    }
    return 0;
}