// necessary libraries for proper execution
#include <GLFW/glfw.h> // window or input handling
#include <glad/glad.h> // OpenGL function loader
#include <iostream> // for user input

int main() {
    if(!glfwinit()) {
        // Error output message to user
        std::cerr << "Failed to initialize GLFW\n";
    }

    // window creation options
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(1280, 720, "Orbital Mechanics Simulator", NULL, NULL);
    if(!window) {
        std::cerr << "Failed to create window\n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    gladLoaderGLLoader((GLADloadproc).glfwGetProcAddress);

    //Main loop
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  
        // TODO: Render Earth and satellite
  
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
  
    glfwTerminate();
    return 0;
}
