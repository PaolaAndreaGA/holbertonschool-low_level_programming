# Dynamic Library

## What Does Dynamic Library Mean?

A dynamic library is a programming concept in which shared libraries with special functionalities are launched only during program execution, which minimizes overall program size and facilitates improved application performance for reduced memory consumption. In most software programs, distributing specific functionalities into distinct modules allows loading as needed.

A dynamic library is never part of an executable file or application. During runtime, a link is established between a dynamic library and executable file or application.

## Explains Dynamic Library

Software platforms use different mechanisms for dynamic library implementation. A dynamic library is called and activated based on its software language and operating system (OS).

Dynamic library evolved from the following concept: If multiple applications use certain library functionalities via several lines of code, it is easier to maintain and upgrade different library versions, rather than apply corresponding application changes. Also, because a dynamic library contains several lines of code, establishing a link at compile time helps reduce overall memory and enhance application performance.

A dynamic library is loaded into the address space during execution runtime or launch. When loaded at execution runtime, a dynamic library is known as a "dynamically loaded library" or "dynamically linked library." When loaded at launch, a dynamic library is known as a "dynamic dependent library."