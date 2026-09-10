 Client Server Communication Using Named Pipes

Named Pipes, also called FIFOs, are used for communication between processes.
In this program, the client sends a message to the server. The server receives the message, processes it, and sends a response back to the client.

Files

client.c
This program sends a message to the server and receives the server response.
server.c
This program receives the client message and sends a response to the client.


System Calls
mkfifo() is used to create a named pipe.
open() is used to open the named pipe.
read() is used to read data from the pipe.
write() is used to write data into the pipe.
close() is used to close the pipe.

FIFO Behavior with Multiple Clients
When multiple clients communicate using the same FIFO, they share the same communication channel.
FIFO follows the First In First Out order.
Small writes are handled atomically up to PIPE_BUF, so data from different clients is not mixed within an individual small write.
For multiple clients, separate response FIFOs can be used to provide the correct response to each client.


 POSIX Signal Handling
A signal is a notification sent to a process when an event occurs.
The program handles SIGINT, SIGTERM and SIGUSR1 signals.
SIGINT is an interrupt signal.
SIGTERM is a termination signal.
SIGUSR1 is a user defined signal.


Functions Used

signal() is used to register a function to handle a signal.
raise() is used to generate a signal.
fork() is used to create a child process.
wait() is used to wait for a child process.
getpid() is used to get the process ID.

Asynchronous Event Handling
Signal handling is asynchronous because a signal can be received at any time while the process is running.
When a signal is received, the operating system calls the registered signal handler.

Role of Signal Handler
A signal handler is a function that is executed when a specific signal is received.
It identifies the received signal and performs the required action.
Signal Numbers
SIGINT has signal number 2.
SIGTERM has signal number 15.
SIGUSR1 has signal number 10.

