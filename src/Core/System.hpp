#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "Shader.hpp"


class System
{
public:
	System();
	~System();

public:
	bool Initialize();
	void Render();
	void Release();

	int ShouldCloseWindow();
	void ProcessInput();

private:
	bool SystemInitialize();

	//Ŭ���� ������� �ӽ�
	unsigned int VAO, VBO, EBO;
	unsigned int texture_1, texture_2;
private:
	GLFWwindow* windowContext;
	Shader* shader;
};