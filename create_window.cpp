#include<iostream>
#define GLEW_STATIC
#include <GL/glew.h>
// GLFW
#include <GLFW/glfw3.h>

using namespace std;
void key_press(GLFWwindow* window, int key, int scancode, int action, int mode){
    
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS){
        
        glfwSetWindowShouldClose(window, GL_TRUE);
    }
    
}
int main(){
    
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    
    GLFWwindow* window = glfwCreateWindow(800, 600, "HELLO WORLD", nullptr, nullptr);
    glfwSetKeyCallback(window, key_press);
    
    if (window == nullptr){
    cout << "Failed to create GLFW window" << endl;
    glfwTerminate();
    return -1;
    }
    
    glfwMakeContextCurrent(window);
    glewExperimental = GL_TRUE;
    
    if (glewInit() != GLEW_OK){
        cout << "Failed to initialize GLEW" << std::endl;
    }

    glViewport(0, 0, 800, 600);
    
    while(!glfwWindowShouldClose(window)){
    glfwPollEvents();
    glfwSwapBuffers(window);
    }
    
    glfwTerminate();
    
    return 0;
}
                                                              

                                                              
                                                              

