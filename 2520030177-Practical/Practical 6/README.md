This repository contains three C programs related to Operating Systems.

## 1. Client-Server Communication Using FIFO

### Files
- client.c
- server.c

### Description

The client and server communicate with each other using named pipes (FIFO).

Two FIFO files are used:

- `client_fifo` - used by the client to send a message to the server.
- `server_fifo` - used by the server to send a response back to the client.

### Server Program

The server creates the two FIFO files and waits for a message from the client.

Compile the server:

    gcc server.c -o server

Run the server:

    ./server

Expected output:

    Server started...

### Client Program

The client takes a message from the user and sends it to the server.

Compile the client:

    gcc client.c -o client

Run the client:

    ./client

Example:

    Enter message: Myself Harini

Expected server output:

    Server started...
    Client: Myself Harini

Expected client output:

    Enter message: Myself Harini
    server: Message received by server

### Execution Order

First run the server in Terminal 1:

    gcc server.c -o server
    ./server

Then open a second Ubuntu terminal and run the client:

    gcc client.c -o client
    ./client

The server must be running before the client is executed.

---

## 2. Signal Handling

### File
- `signal.c`

### Description

This program demonstrates the creation of child processes using `fork()` and the generation of different signals using `raise()`.

The program demonstrates the following signals:

- SIGINT
- SIGTERM
- SIGALRM
- SIGKILL
- SIGSTOP
- SIGCONT

The program also displays the Parent Process ID and Child Process ID.

### Compile

Use:

    gcc signal.c -o signal

### Run

Use:

    ./signal

Example output may contain:

    Parent Process ID = ...
    Child Process ID = ...
    Generating SIGINT...

    Child Process ID = ...
    Generating SIGTERM...

    Child Process ID = ...
    Generating SIGALRM...

### Important Note

Some signals such as SIGKILL and SIGSTOP can terminate or stop a process. Therefore, the program may not display all the signal messages in sequence.

---

## 3. Technologies Used

- C Programming
- Linux / Ubuntu
- WSL (Windows Subsystem for Linux)
- GCC Compiler
- FIFO / Named Pipes
- fork()
- Process IDs
- UNIX Signals

## 4. Commands Used

Compile server:

    gcc server.c -o server

Run server:

    ./server

Compile client:

    gcc client.c -o client

Run client:

    ./client

Compile signal program:

    gcc signal.c -o signal

Run signal program:

    ./signal

## 5. Conclusion

These practical programs demonstrate important Operating System concepts including:

- Client-server communication
- Named pipes (FIFO)
- Process creation using fork()
- Process IDs
- UNIX/Linux signals
- Compilation and execution of C programs in Ubuntu
