#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

#define WINDOW_WIDTH 500
#define WINDOW_HEIGHT 600

int main() {
    if (!glfwInit()) {
        puts("Erro ao iniciar a janela");
    };

    GLFWwindow *window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT,
                                          "calculadora", NULL, NULL);

    if (!window) {
        puts("Erro ao iniciar GLFWwindow");
        glfwTerminate();
        return 0;
    }

    glfwMakeContextCurrent(window);

    glfwSwapInterval(1);

    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.1f, 0.5f, 0.9f, 0.4f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    return 0;
}