#include <iostream>
#include <GLFW/glfw3.h>

int main() {
	if (!glfwInit()) {
		std::cout << "Trouble\n";
		return -1;
	};

	GLFWwindow* window = glfwCreateWindow(856, 500, "Endine", nullptr, nullptr);
	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) {
		glClearColor(1, 0, 0, 1);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);

	glfwTerminate();
	return 0;
}