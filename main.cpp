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

  
