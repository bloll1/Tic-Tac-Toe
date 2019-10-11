@course CIS310 Operating Systems
@assignment p002
@due 09/16/2019
@Author: Conor M Golden
@Email: Goldencm203@potsdam.edu

vssh-b is a executable shell. It has all static methods, 1 constructor, 1 deconstructor and one main method. After execution of the program the shell will
load the current directory that the shell is currently located and awaits user input. The user can change the current directory and execute commands from the
shell. Upon execution of seperate commands the shell will fork itself and execute the executable and the shell will wait till the seperate executable finishes.


Commands:

	cd -- change directory: this command is used to change the current directory that the shell currently is looking in
	Ex: cd C:/Users/

	./ -- run executable: if you input the name of a executable within the current directory the shell will run that program
	Ex: ./vssh-b

	C:/User/guest/helloworld -- run executable in seperate directory: in this example you can run specific executables outside of the current directory
	Ex: C:/User/guest/helloworld

	ls -- list: list all the items in the current working directory
	Ex: ls (Output: Documents Music CoolMathGames)

	Enter (key) -- to command string on the command-line

	exit || EOF -- terminates the program

Test Data:

	cd C:\Users\

Expected Output:

	The current directory would now show C:\Users\ (as long as the directory is valid on your local machine)


Test Data:
	
	./vssh-b

Expected Output:

	The shell will find and execute the file in the current directory that the shell is in and execute a copy of it. After execution the shell will continue 
	waiting for the next command input for the user.
	
Execution:

	No variables are currently required for the execution of the program. All is required of the user is to run the executable. 

Compilation:

	Required for the compilation for the executable are the three main files: executable.cpp shell.h shell.cpp. 