#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>


void framebuffer_size_callback(GLFWwindow* window , int width , int height);

int main(int argc , char** argv){

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR , 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR , 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE , GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow( 800 , 600 , "Learning OpenGL" , nullptr , nullptr );

    if(window == nullptr){

        std::cerr << "failed to create GLFW window.\n";
        glfwTerminate();
        return -1;
    }

    std::cout << "GLFW window created.\n";
    glfwMakeContextCurrent(window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cerr << "Failed to initial glad.\n";
        return -1;
    }

    std::cout << "glad initialize.\n";

    glViewport( 0 , 0 , 800 , 600 );
    
    // tell opengl to call this function when ever window is resized.

    glfwSetFramebufferSizeCallback(window , framebuffer_size_callback);


    while(!glfwWindowShouldClose(window)){

        glfwSwapBuffers(window);
        glfwPollEvents();

    }

    glfwTerminate();



    return 0;
}


void framebuffer_size_callback(GLFWwindow* window , int width , int height){
    glViewport( 0 , 0 , width , height );
}
