When you use an #include directive like #include <stdio.h> in a C program, you're instructing the compiler to include the code from the header file stdio.h into your source code at the point where the #include directive appears. This inclusion happens before the actual compilation process begins. Let's clarify a few concepts regarding how this works and where the actual code implementations reside:

Header Files
Purpose: Header files in C (typically ending in .h) contain declarations of functions, macros, constants, and data types used by various libraries. For example, stdio.h includes declarations for standard input and output functions like printf() and scanf().
Content: These files do not usually contain the actual "implementation" of the functions—they only declare how the functions are structured, their parameters, their return types, and any macros or constants.
Implementation Files
Libraries: The actual implementations of these functions are typically in precompiled library files, which could be either static libraries (.lib or .a files) or dynamic libraries (.dll on Windows or .so on Unix/Linux).
Linking: During the compilation process, after all source code files are compiled into object files, the linker links these object files with the necessary libraries where the actual implementations of the functions declared in header files reside. This process makes the functions executable as part of your application.
Compiler's Role
Preprocessing: The compiler first processes all preprocessor directives like #include. This step involves textual inclusion of header files into the source code.
Compilation: The compiler then compiles the source code (now including the contents of header files) into object code. During this phase, it uses the declarations in the header files to ensure that functions are used correctly in terms of arguments, return types, etc.
Linking: Finally, the linker combines these object files with the necessary library files that contain the actual executable code of the functions used. This step resolves all the function calls to their respective function implementations.
Where Are the Libraries?
System Libraries: For standard functions like those declared in stdio.h, the implementations are part of the standard C library, which is typically provided by the system or development environment. This library is automatically linked with your program by the compiler unless specified otherwise.
User Libraries: If you are using non-standard libraries, you might need to explicitly tell the compiler where to find the corresponding library files (using linker options) and include their header files in your source code.
So, when you build a C program, the compiler and linker work together using the declarations in header files and the actual implementations in libraries to produce a final executable. The header files themselves are part of the include path that the compiler searches, and the library files are part of the library path that the linker searches. These paths can be part of your system's standard directories or specified manually in your project's configuration or makefile.
