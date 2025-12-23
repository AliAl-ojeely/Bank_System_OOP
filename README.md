Bank_System_OOP
A Comprehensive Banking Management System in C++

This project is a practical and advanced application of Object-Oriented Programming (OOP) concepts. It simulates real-world banking operations within a console environment, with a strong emphasis on writing Clean Code, modularity, and maintainability.

Features
The system provides the following core functionalities:

Client Management: Add new clients, update records, delete clients, and search functionality.
Transactions: Deposit, withdraw, and transfer funds between accounts.
User Management: A permission-based system for Users and Admins.
System Logs: Track login activities (Login Register) and transfer logs.
User Interface: Organized, easy-to-navigate menus.
Project Architecture & OOP Implementation
This project is architected to strictly follow the four main pillars of OOP, ensuring a distinct Separation of Concerns.

1. Encapsulation
Sensitive data is protected within classes, preventing direct access. Interaction happens strictly through public interfaces (Setters & Getters).

Example: Properties like _Balance and _PinCode in clsBankClient are private. Validation logic is applied within the Setters to ensure data integrity.
2. Inheritance
Inheritance is used to eliminate code redundancy and establish logical relationships between entities.

clsPerson: The Base Class containing common attributes (FirstName, LastName, Email, Phone).
clsBankClient: Inherits from clsPerson and extends it with banking-specific attributes (AccountNumber, Balance, PinCode).
clsUser: Inherits from clsPerson and extends it with system-access attributes (UserName, Password, Permissions).
3. Abstraction
Implementation details are hidden from the end-user and the main function.

The UI Layer (Screens) is completely separated from the Business Logic Layer. The user interacts with clsMainScreen, which invokes underlying methods without revealing how the data is processed.
4. Polymorphism
The system utilizes polymorphism (via function overriding and overloading) to allow objects to be treated as instances of their parent class while executing their specific behaviors.

File Structure
The project follows a modular structure where every class is contained in its own Header file (.h):

Bank_System_OOP/
├── main.cpp                  
├── Global/
│   └── clsDate.h             
├── Core_Logic/               
│   ├── clsPerson.h           
│   ├── clsBankClient.h       
│   └── clsUser.h             
├── Screens/                  
│   ├── clsMainScreen.h      
│   ├── clsTransactionsScreen.h
│   ├── clsManageUsersScreen.h
│   └── ... (Other specific screens)
└── Utilities/
    ├── clsString.h           # String manipulation library
    └── clsUtil.h             # General uti
