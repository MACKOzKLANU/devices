#include <string>
#include <iostream>

using namespace std;

class Device{
    protected:
    bool isTurnedOn;

    public:
    Device() {
        isTurnedOn = false;
    }
    Device(bool isTurnedOn): isTurnedOn(isTurnedOn)
    {
        
    }
    void Switch(){
        cout << "Switch" << endl;
        if(isTurnedOn == false){
            isTurnedOn  = true;

        }
        else if (isTurnedOn == true){
            isTurnedOn  = false;
        }
        cout << isTurnedOn << endl;

    }


};

class Phone : public Device{
    private:
        string number;
    public:
        Phone() {
            number = "123123321";
            cout << "phone" << endl;
        }
        Phone(string number): number(number)
        {
            
        }
        void Call(string numsar){
            if(this->isTurnedOn == true){
                cout << "phone is on"<< endl;
                cout << "Phone" << endl;
                cout << "Number: " << number << " calling " << numsar << endl;
            }
            else if(this->isTurnedOn == false){
                cout << "phone is turned off" << endl;
                cout << this->isTurnedOn << endl;
            }
        }

    };

class Computer : public Device{
    private:
    string ip;

    public:
    Computer(){
        ip  = "127.0.0.1";
        cout << "computer" << endl;
    };
    Computer(string ip): ip(ip)
    {
    }

    int Calc(int n1, int n2){
        if(this->isTurnedOn == true){

            cout << n1+n2 << endl;
            return n1+n2;

        }
        else{
            cout <<"computer is turned off" << endl;
        }
    }


};

int main(){
    Device dew;
    dew.Switch();

    dew.Switch();

    Phone phon;
    phon.Switch();
    phon.Call("23321233");

    cout <<"computer" << endl;
    Computer comp;
    comp.Switch();

    comp.Calc(3, 5);
    comp.Switch();
    comp.Calc(3, 5);







};