#version 330 core

out vec4 FragColor;

in vec3 vertex;

void main()
{
    FragColor = vec4(vertex, 1.0);
}