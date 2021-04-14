# Requirements
## Introduction
 * We see libraries in many places: Public library, Collages, Schools, Personal library.
 * This topic was chosen because as I go to library to issue books that make me curious how the basic operations are performed internally. 
 * Using C Programming for this also helps me to understand the concepts of it.
 

## Research
### Library Management Software System.
The histoy of libraries began with the first efforts to organize collections of documents. Library which contains collection of material on one or several subjects,made accessible to a defined community for reference or borrowing. A library's collection can include printed materials and other physical resources in many formats. A library, which may vary widely in size, may be organized for use and maintained by a public body such as a government, an institution, or a private individual. Library also provide space for individual to study/read books. 

### Benefits
Library management system offer a range of benefites. Here are few of them: 

### Better Book Management
The library management system helps librarian to maintain the book easily.  

### Ease burden on user
When user want to search for any book there is no need to check for all the book in the library they can use the search function which make the availabilty of book easy and save the time.

### Ease of record
Library management system allows to maintain the records easy. We can know who as issued book, number of books available in each catagory. As it reduce the manual work.

### Organization
This system is used in many organizations where there is need of information ina single place which helps to reduce time waste.  

## Cost and Features 
If Indian App firm is chosen to create a Library Management System then the cost can range between $25000-$35000. This estimate is when the system is being developed with basic features and for a single platform.


## Defining Our System
### Certain assumptions:
* Few systems already exists with which our system will interact
    * Education institutions
    * Analytics System
![Description](https://github.com/Anvithagreddy/Project_ltts/blob/master/Mini_Project/1_Requirements/system.png)
### Explanation:
* Library Management System have few inbuilt features like:
    * Login to system
    * Add a book record
    * search a book
    * view list of books
    * Update a book record
    * Count of book in each Catagory 

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/arc-arnob/LnT_Mini_Project/blob/main/1_Requirements/swot.png)

# 4W&#39;s and 1&#39;H

## Why:
* Which helps to maintain the records of the books and save the time.

## What:
* To bulid a system to add, search, update the books information.

## When:
* When we want to reduce the manual work and there time.

## Where:
* Where there is a collection of different materaials in one place.

## How:
* By creating a system which will provide all the functionalities required.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to login to the system    | Techincal | IMPLEMENTED |
| HR02 | User shall be able to add new book record | Techincal | IMPLEMENTED | 
| HR03 | User shall be able to search a book record | Techincal |  IMPLEMENTED  |
| HR04 | User shall be able to view book records | Techincal |  IMPLEMENTED  |
| HR05 | User shall be able to update a book record | Techincal |  IMPLEMENTED  |
| HR06 | User shall be able to count of book for required catagory | Techincal |  IMPLEMENTED  |

##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | Pin should match with default(3 attempts) else exit from the system. | HR01 | IMPLEMENTED |
| LR02 | (1). New record shall be added by providing all the asked information                                                                                                    (2). Book_Id should be unique else book should not be accepted. | HR02 |  IMPLEMENTED  |
| LR03 | If user searches for an invalid Book "No Record Found" message should be displayed | HR03 |  IMPLEMENTED  |
| LR04 | User need to enter id for the book record to be updated, if no such record is available then "No Record Found" Message should be displayed | HR03 |  IMPLEMENTED  |
| LR05 | User shall be able to provide the count of books for required catagory | HR06 |  IMPLEMENTED  |
