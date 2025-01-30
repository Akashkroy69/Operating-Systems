### Q1. If we execute kernel programs in the user mode and user programs in kernel 
mode what are some consequences? 

1. Executing Kernel Programs in User Mode: Kernel programs are designed to run in kernel mode which has all the access to h/w and system services. If you run in user mode. It will not be fully functional and may lead to system failure message, BLUE screen.
2. Executing User Programs in Kernel Mode: generally user written program doesn't have access to h/w, sensors, kernel program and sytem service program. This is done for security reasons and supervised access to system internals. If you run the user program in kernel mode, it will have all the access. That can cause security breach, unsupervised, unlimited resource uses. Also, generally an user program running user mode has process boundary that seprates it from other programs running in system. When u run the program in kernel mode, it loads the program in the kernel space that doesn't have process boundary and it can access or breach into other processes and resources being used by other processes. Also it will have control over process table residing in the kernel space.

### Chat GPT refined my answer: 
1. Executing Kernel Programs in User Mode

    - Kernel programs are designed to run in kernel mode, where they have full access to hardware and system resources.
    - If you try to execute them in user mode, they lose access to privileged instructions, hardware, and critical system services.
    ## Consequences:
        - The program may fail to execute properly or return errors due to restricted access.
        - Critical OS functions (e.g., memory management, device drivers) may not work, leading to system instability or failure.
        - In some cases, it may trigger a system crash, such as a Blue Screen of Death (BSOD) in Windows or a Kernel Panic in Linux.

2. Executing User Programs in Kernel Mode

    - Normally, user programs run in user mode, where they are restricted from directly accessing hardware, sensors, and OS internals for security and stability.
    - If a user program runs in kernel mode, it gains full access to system resources, leading to severe issues.
    ## Consequences:
        - Security Breach: The user program bypasses all security mechanisms and can access any part of the system, including sensitive kernel data.
        Unsupervised & Unlimited Resource Usage: The program can take control of CPU, memory, and I/O devices without restrictions, potentially leading to system hangs or crashes.
        - Loss of Process Isolation: Normally, user programs are confined within separate process boundaries to prevent interference with other processes. Running in kernel mode removes these boundaries, allowing the program to access or modify other processes’ data.
        - Process Table Manipulation: The user program can modify the kernel’s process table, giving it control over other processes, leading to data corruption or even system takeover.
        - System Instability: A buggy user program running in kernel mode can crash the entire OS, since there are no safeguards preventing it from executing unsafe operations.