# Blood-Management-with-C-CSE115

INSTALL: 
--------------
Make sure to save the project file in a main directory.
C:// drive will be more preferable .

Requested to run the program from a IDE. CodeBlocks is more prefferable.

HOW TO USE:
--------------

HOME PAGE:
Press 1 for Sign In , Press 2 for Sign Up.For signup , It'll take datas and write it into database.
If you select 1, it'll open a login page Which will take your username and password and match it with 
the user-pass from main database (File Named: user, pass).

Algorithm for Match user password with database's data is quite simple. First we search the user name 
from user database . Lets assume the username is in 6th line in database. We will compare the 6th line
password with the user inputed password . If it matches then you're good to go. 


USER UI:
After successfully logged In , two options will occure. One Named "Donate Now" and the other one is "Find Blood".

Donate Now:
This window is not that complicated . Let's say you're a good guy and you want to donate your blood for people 
in need. It'll show you all the pending blood requests. 

Find Blood:
This window will ask you which blood you need. Let's say you need A+ grouped blood. So you write it in .
Then it'll ask in which area your hospital located. Let's say you put Bashundara. The program will sort
all the donors which are in Bashundhara Area. It'll show all the informations of the donor. So , you tried 
to contact everyone , still you didn't find your blood? No worries!!! The program will store your request and 
put your data in FIND BLOOD section.
On the other hand if you collect blood from someone, the program will ask you the donor's username. 
Now the rest the work is for Admins.

ADMIN:
From Login screen you can enter to the Admin panel using the username "admin" and password "11223".
Admin ui is simple . You have one options which called "Update User Data". Here a list will appear of all
registered donors. After that a simple list will appear called "Donated Users" . It'll show all the name's of 
users that donated recently. Admin have to deactive that user because after donating blood , one cann't donate 
for a few months. So admin press the deactive button and enter the User ID (Not username. UserID is the listed Numbers)
and boom!! (jk) , the user is deactivated . His Info won't show in donors list. Lastly, the active button works exactly 
the opposite of the deactive button. It activates the user so that his information shows in donors list.

Sorry for my poor English. Hope you liked it.

https://www.facebook.com/dhr4fi  
https://github.com/redwanalirafi

DEMO USER :
username: redwan
password: 11111

ADMIN LOGIN:
username: admin
password: 11223
