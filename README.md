# Guest-House-Management

## Introduction
A typical luxury guesthouse requires a management system to control its various operations such as maintaining the record of all the people in its domain of services, attending to various needs of customers, and also achieving increased efficiency in the overall working of the guesthouse itself.
This project particularly deals with all these issues using c++ concepts. File handling, Classes, and functions are the frequently used concepts.

###### Main Menu offers the following options
![alt text](https://github.com/shivam-motla/Guest-House-Management/blob/main/images/Main%20Menu.png?raw=true)

## Get Availablity
Out of the five rooms, it shows which room is available (by showing ‘A’ in the availability column) and which room is occupied. if the room is not available (indicated by ‘NA’ in the availability column) then the name of the guest is displayed in cust_name column along with the staying period in the period column. If the available room is booked, then the available indication turns to not available.
![alt text](https://github.com/shivam-motla/Guest-House-Management/blob/main/images/Availablity.png?raw=true)

## Features of the room
It shows detailed features of the room, as per the entered room number. It shows the type of room, the charge of room per day, number of beds, and maximum no of persons can stay in this room. Other details such as the availability of geyser and TV are shown.
![alt text](https://github.com/shivam-motla/Guest-House-Management/blob/main/images/Features%20of%20rooms.png?raw=true)

## Room Allocation
Room is allocated after accepting details, name of the guest, city in which guest is reciting, Nationality of guest, and the number of days he/she wants to stay.
![alt text](https://github.com/shivam-motla/Guest-House-Management/blob/main/images/Room%20Allocation.png?raw=true)


## Show customer details
It shows all the details of the guest, accepted in ‘Room Allocation’.
![alt text](https://github.com/shivam-motla/Guest-House-Management/blob/main/images/customer%20details.png?raw=true)


## Cancellation
When the guest leaves. It cancels all the data of the corresponding room.
![alt text](https://github.com/shivam-motla/Guest-House-Management/blob/main/images/Cancellation.png?raw=true)

## Restaurant
It offers the facility of ordering food item from the list and also display bill of all the items ordered for particular guest in one go. The restaurant bill is automatically added to the total bill of the staying guest. If no person is staying in the entered room it shows ‘Sorry! No person is staying in this room’.
![alt text](https://github.com/shivam-motla/Guest-House-Management/blob/main/images/Ordering%20in%20restaurant.png?raw=true)
![alt text](https://github.com/shivam-motla/Guest-House-Management/blob/main/images/Restaurant%20bill.png?raw=true)


## Total Bill
It shows the total bill of the staying guest, it includes the staying charges and the bill of restaurant orders. 
![alt text](https://github.com/shivam-motla/Guest-House-Management/blob/main/images/TOtAMt.png?raw=true)


## HEADER FILES
         
iostream.h :-
- cin
-	cout
  
fstream.h :-
-	read
-	write
-	close
-	eof

conio.h :-
-	getch
-	clrscr

string.h :-
-	strcpy
-	strlen
-	strcmpi

## USER DEFINED FUNCTIONS

-	availability()
-	getdata()
-	rstbill()
-	showdetails()
-	totalbill()



## BUILT IN FUNCTIONS

-	strcpy
-	strcmp
-	strlen
-	open
-	close
-	seekg
-	read
-	write
-	clrscr
-	getch
