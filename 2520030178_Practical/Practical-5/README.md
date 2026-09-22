1. Pipe Communication Process

The program demonstrates communication between a parent process and a child
process using an anonymous pipe.

The parent process works as the Producer.
The child process works as the Consumer.

The parent creates and sends 5 data items through the pipe.
The child process reads the data received from the pipe.
The communication time is calculated using the clock() function.

System Calls Used:

pipe() - Creates a pipe for communication between processes.
fork() - Creates a new child process.
dup2() - Connects standard input/output with the pipe.
exec() - Executes commands such as ls and grep.

Measuring Communication Efficiency:

The clock() function is used to calculate the time taken for communication.

Communication Time = End Time - Start Time


2. ls -l | grep ".c"

The program uses two child processes to perform the operations of the
shell command.

Child Process 1:
ls -l

It displays the files and directories in the current directory.
The output is sent to the pipe.

Child Process 2:
grep ".c"

It receives the output from the pipe and searches for lines containing
.c. It then displays only the matching lines.

Therefore, both processes perform the same operation as:

ls -l | grep ".c"
