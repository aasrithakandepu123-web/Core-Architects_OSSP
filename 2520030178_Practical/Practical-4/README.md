### Description

This program demonstrates how a parent process can create and manage multiple child processes using the `fork()` system call.

The parent creates **three child processes**. Each child displays its own process ID, waits for a different period using `sleep()`, and then terminates.

The parent process first uses `wait()` to wait for any child process to finish. After that, it uses `waitpid()` to wait for a particular child process. Finally, the parent waits for the remaining child process to complete.

The parent process terminates only after all three child processes have finished.

### System Calls Used

* **fork()** – Creates a new child process.
* **wait()** – Makes the parent wait until any child process terminates.
* **waitpid()** – Makes the parent wait for a specific child process.
* **sleep()** – Delays the execution of a process for a specified time.
* **exit()** – Terminates a process.
* **getpid()** – Returns the process ID of the current child process.

### Difference Between wait() and waitpid()

| `wait()`                                               | `waitpid()`                                                           |
| ------------------------------------------------------ | --------------------------------------------------------------------- |
| Waits for any child process to finish.                 | Waits for a particular child process.                                 |
| Does not require a specific process ID.                | Requires the process ID of the child.                                 |
| Useful when the parent can accept any completed child. | Useful when the parent needs to control the order of child processes. |
| Simpler method for general child synchronization.      | Provides more specific process synchronization.                       |

### Conclusion

Thus, the program demonstrates **process creation and synchronization** using `fork()`, `wait()`, and `waitpid()`. The parent process successfully manages all three child processes and terminates after they have completed.

