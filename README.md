# on-disk-detection-bypass
Direct syscalls Injection to bypass AV/EDR. The main purpose of this repository is to understand the static detection and how to bypass it. When I was using direct syscalls in my implant, after compiling the code MDE was detecting the binary in static analysis. I found that MDE is looking for "syscall" instructions because for sure it is not a common behaviour to use these instructions directly into binary. So i added some nop instructions and series of extra instructions to bypass the static analysis.

# Detail Blog 

