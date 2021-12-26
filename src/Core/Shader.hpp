#pragma once

#include <glad/glad.h>
#include <string>
#include "glm/glm.hpp"

class Shader
{
public:
	Shader(const GLchar* vsPath, const GLchar* fsPath);
	virtual ~Shader();

public:
	void Use();
	void SetFloat(const std::string& name, float value) const;
	void SetVec3(const std::string& name, float x, float y, float z) const;
	void SetVec4(const std::string& name, float x, float y, float z, float w) const;
	void SetInt(const std::string& name, int value);
	void SetMat4(const std::string& name, const glm::mat4& mat);

	void Release();

private:
	unsigned int ID;
};