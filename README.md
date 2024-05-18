# on-disk-detection-bypass
Direct syscalls Injection to bypass AV/EDR. The main purpose of this repository is to understand the static detection and how to bypass it. When I was using direct syscalls in my implant, after compiling the code MDE was detecting the binary in static analysis. I found that MDE is looking for "syscall" instructions because for sure it is not a common behaviour to use these instructions directly into binary. So i added some nop instructions and series of extra instructions to bypass the static analysis.

# My Detailed Blog 
https://systemweakness.com/on-disk-detection-bypass-avs-edr-s-using-syscalls-with-legacy-instruction-series-of-instructions-5c1f31d1af7d.

# Only for educational purposes.


