#include "Car.h"
#include <iostream>
using namespace std;

Person::Person()
{
    Name = " ";
    ID = 0;
    Age = 0;
}
Person::Person(string name, int id, int age)
{
    setname(name);
    setID(id);
    setage(age);
}
void Person::setname(string name)
{
    Name = name;
}
void Person::setID(int id)
{
    ID = id;
}
void Person::setage(int age)
{
    Age = age;
}
string Person::getname()
{
    return Name;
}
int Person::getid()
{
    return ID;
}
int Person::getage()
{
    return Age;
}
void Person::print()
{
    cout << "The person name is" << Name  << ", and his age is : " << Age << endl;
}

Customer::Customer(string Name, int Age)
{
    setname(Name);
    setage(Age);
    setmechanicid(0);
}
Customer::Customer()
{
    setmechanicid(0);
    setname("");
    setage(0);

}
string Customer::getmechanicname()
{
    return Mechanicname;
}
void Customer::setmechanicname(string Mname)
{
    Mechanicname = Mname;
}
void Customer::setmechanicid(int mechID)
{
    MechanicID = mechID;
}
int Customer::getmechanicid()
{
    return MechanicID;
}
void Customer::setappintment(Appointment app)
{
    apoin.hours = app.hours;
    apoin.mins = app.mins;
}
Appointment Customer::getapointment()
{
    return apoin;
}
bool Customer::operator == (Customer C1)
{
    if ((this->getapointment().hours == C1.getapointment().hours) &&
        (this->getapointment().mins == C1.getapointment().mins))

        return true;
    else return false;


}
bool Customer::operator < (Customer C1)
{
    if (this->getapointment().hours < C1.getapointment().hours)
        return true;


    else if ((this->getapointment().mins < C1.getapointment().hours) &&
        (this->getapointment().hours == C1.getapointment().hours))

        return true;
    else return false;


}
bool Customer::operator > (Customer C1)
{
    if (this->getapointment().hours > C1.getapointment().hours)
        return true;


    else if ((this->getapointment().mins > C1.getapointment().hours) &&
        (this->getapointment().hours == C1.getapointment().hours))

        return true;
    else return false;


}
mechanic::mechanic()
{
    count = 0;
    setname("");
    setID(0);
    setage(0);
    Appointment a;
    a.hours = 0;
    a.mins = 0;
    setappointment(a);
}
mechanic::mechanic(string Name, int ID, int Age, int size)
{
    setname(Name);
    setID(ID);
    setage(Age);

    int* a = new int(size);
}

bool mechanic::isAvailable(Appointment A1)
{
    for (int i = 0; i < count; i++)
    {
        //Appointment tmp = getappointment(i);
        Appointment tmp = getappointment(i);
        if ((tmp.hours == A1.hours)
            && (tmp.mins == A1.mins))
            return false;
        else return true;
    }
    return false;
}
void mechanic::setcount(int Count)
{
    count = Count;
}
int mechanic::gethours(int i)
{
    return a.hours;
}
int mechanic::getmins(int i)
{
return a.mins;
}
int mechanic::getcount()
{
    return count;
}
void mechanic::setappointment(Appointment aep) {
    a.hours = aep.hours;
    a.mins = aep.mins;
}
Appointment mechanic::getappointment(int i)
{
    Appointment tmp;
    tmp.hours = gethours(i);
    tmp.mins = getmins(i);
    return tmp;
}




// queue constructor
template<class T>
//Queue<T>::Queue()
Queue<T>::Queue()
{
    rear = -1;
    front = -1;
    size = 0;
    data = new T[10];
}
template<class T>
T Queue<T>::Front()
{
    if (!isEmpty())
        return this->data[this->front];
}

// Enqueue the Cudtomer according to their appointments
//template<class T>

template<class T>
void Queue<T>::push(T enq)
{
    if (isFull())
    {
    }   
    else
    {
        rear++;
        data[rear] = enq;
        size++;

        if (front == -1)
        {
            front = 0;
        }

        
    }

}

// Dequeue
template<class T>
//T Queue<T>::pop()

T Queue<T>::pop()
{
    if (isEmpty()) {

    }
    T deq = data[front];
    front++;
    size--;
    if (size == 0) {
        front = -1;
        rear = -1;
    }
    //cout << "Dequeued " << front + 1 << endl;
    return deq;
}


// checks if queue is full
template<class T>
//bool Queue<T>::isFull()

bool Queue<T>::isFull()
{
    return (rear == 9);
}


// checks if queue is empty
template<class T>
//bool Queue<T>::isEmpty()
bool Queue<T>::isEmpty()
{
    return ((front == -1) && (rear == -1));
}