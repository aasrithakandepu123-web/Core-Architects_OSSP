Operating Systems Practicals

This repository consists of three C programs that demonstrate important Operating System concepts using Linux/Ubuntu.

1. Client–Server Communication Using FIFO
Programs Used
client.c
server.c
Objective

To implement communication between a client and server using Named Pipes (FIFO).

Two FIFO files are used:

client_fifo → transfers messages from client to server.
server_fifo → transfers responses from server to client.
Server Program

The server creates the required FIFO files and waits for a message from the client.

Compile:

gcc server.c -o server

Execute:

./server

Output:

Server started...

The server remains active and waits for the client to send a message.

Client Program

The client accepts a message from the user and sends it to the server through the FIFO.

Compile:

gcc client.c -o client

Execute:

./client

Example:

Enter message: Myself Harini

The server receives and displays:

Client: Myself Harini

The client receives the response:

server: Message received by server
Execution Steps

Terminal 1 – Server

gcc server.c -o server
./server

Terminal 2 – Client

gcc client.c -o client
./client

The server should be started first, followed by the client.

2. Signal Handling Using fork()
Program Used
signal.c
Objective

To demonstrate process creation and UNIX signal handling using fork() and signals.

The program creates a parent process and a child process and demonstrates different signals.

Signals Demonstrated
SIGINT
SIGTERM
SIGALRM
SIGKILL
SIGSTOP
SIGCONT

The program also displays the Process ID (PID) of both the parent and child.

Compile the Program
gcc signal.c -o signal
Run the Program
./signal
Sample Output
Parent Process ID = 1234
Child Process ID = 1235

Generating SIGINT...

Child Process ID = 1235
Generating SIGTERM...

Child Process ID = 1235
Generating SIGALRM...

The exact output may vary depending on the execution of the processes and signals.

Important Point

SIGKILL and SIGSTOP are special signals.

SIGKILL immediately terminates a process.
SIGSTOP stops/suspends a process.
SIGCONT continues a stopped process.

Because of this, the program may stop or terminate before displaying every signal message.

3. Technologies and Concepts Used

The practicals use the following technologies and Operating System concepts:

C Programming
Linux / Ubuntu
WSL (Windows Subsystem for Linux)
GCC Compiler
Named Pipes (FIFO)
Process Creation using fork()
Process IDs (PID)
UNIX/Linux Signals
4. Compilation and Execution Commands
Server

Compile:

gcc server.c -o server

Run:

./server
Client

Compile:

gcc client.c -o client

Run:

./client
Signal Program

Compile:

gcc signal.c -o signal

Run:

./signal
5. Conclusion

These Operating Systems practical programs provide a basic understanding of inter-process communication and process management in Linux.

The practicals demonstrate:

FIFO-based client-server communication
Named pipe communication
Creation of processes using fork()
Identification of processes using PIDs
Handling of UNIX/Linux signals
Compilation and execution of C programs using GCC

Overall, these programs help understand how processes communicate and interact with each other in a Linux Operating System.
