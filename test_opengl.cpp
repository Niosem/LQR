//If OS is macOS : disable deprecation message for opengl
#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#endif

#include <GLFW/glfw3.h>

#include <iostream>

int main(int argc, char **argv)
{
    if (!glfwInit()) return -1;

    std::cout << "GLFW lib has been initialized..." << std::endl;

    return 0;
}