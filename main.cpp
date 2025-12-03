#include <iostream>
#ifdef _WIN32
    // #include <windows.h>
    // #define OS_MESSAGE "Hello from Windows!"
    // #define DELAY Sleep(1000)
#else
    #ifdef __linux__
        #include <unistd.h>
        #define OS_MESSAGE "Hello from Linux!"
        #define DELAY sleep(1)
    #else
        #define OS_MESSAGE "Hello from unknown OS!"
        #define DELAY
    #endif
#endif
int main(){
    std::cout << OS_MESSAGE << std::endl;
    DELAY;
    std::cout << "Program completed." << std::endl;
    return 0;
}