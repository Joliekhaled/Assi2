#include <iostream>

using namespace std;

class Person
{

private:
    string Name;
    int ID;
    int Age;

public:
    Person();
    Person(string name, int id, int age);
    void setname(string name);
    void setID(int id);
    void setage(int age);
    string getname();
    int getid();
    int getage();
    void print();

};
struct Appointment
{
    int hours;
    int mins;
};

class Customer : public Person
{

private:
    int MechanicID;
    Appointment apoin;
    string Mechanicname;


public:
    Customer(string Name, int Age);
    Customer();
    void setmechanicname(string Mname);
    string getmechanicname();
    void setmechanicid(int mechID);
    int getmechanicid();
    void setappintment(Appointment app);
    Appointment getapointment();
    bool operator == (Customer C1);
    bool operator < (Customer C1);
    bool operator > (Customer C1);

};

class mechanic : public Person
{


private:
    int count;
    Appointment a;

public:
    mechanic();
    mechanic(string Name, int ID, int Age, int size);
    bool isAvailable(Appointment A1);
    void setcount(int Count);
    int gethours(int);
    int getmins(int);
    int getcount();
    void setappointment(Appointment aep);
    Appointment getappointment(int i);

};

// QUEUE CLASS
template<class T>
class Queue
{
private:
    T* data;
    int rear;
    int front;
    int size;
public:
    //default constructor that initializes the rear, front and size to pre-set values
    Queue();

    // push function inserts the different data types into the queue (enqueuing)
    void push(T temp);

    // pop function removes the first element from the array (dequeuing)
    T pop();

    // checks if data[] array is empty while popping
    bool isEmpty();

    // checks if array is full while enqueuing
    bool isFull();

    T Front();
};
