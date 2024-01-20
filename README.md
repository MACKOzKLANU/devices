# Device Control

## This C++ code defines a simple system for managing electronic devices, including a generic Device class and two specialized classes: Phone and Computer. The system allows you to create instances of these devices, toggle their power states, and perform specific actions depending on their type.

## Code Structure

The code consists of three classes:

1. **Device**: This is the base class representing a generic device. It has a property to track whether it's turned on (`isTurnedOn`) and a method to switch the device on or off (`Switch`).

2. **Phone**: Derived from the `Device` class, this class represents a phone. It has an additional property to store a phone number (`number`) and a method to make a call (`Call`) if the phone is turned on.

3. **Computer**: Also derived from the `Device` class, this class represents a computer. It has an additional property to store an IP address (`ip`) and a method to perform a simple addition calculation (`Calc`) if the computer is turned on.

## Device Functionality

When you run the program, you will see the following actions:

1. A `Device` object (`dew`) is created and switched on and off.

2. A `Phone` object (`phon`) is created, and you'll see information about the phone's default number. The phone is then turned on and a call is attempted.

3. A `Computer` object (`comp`) is created, and you'll see information about its default IP address. The computer is turned on, and a calculation is performed. Then, the computer is turned off, and another calculation is attempted.

## Example Output

An example output may look like this:

```
Switch
1
Switch
0
phone
Switch
1
phone is on
Phone
Number: 123123321 calling 23321233
computer
Switch
1
8
Switch
computer is turned off
```

This output demonstrates how the code simulates device control, including turning devices on and off, and the specific behavior of the phone and computer when they are turned on.

