#pragma once

#include <string>

// Utitlity class to load, compile and attach a vertex- and fragment shader to a program
class ShaderUtil
{

private:
	

	unsigned int GetCompiledShader(unsigned int shader_type, const std::string& shader_source);

public:
	unsigned int mProgramId;
	ShaderUtil() {}
	~ShaderUtil() {}

	// Load a vertex and a fragment shader from file
	bool Load(const std::string& fragmentShaderFile);

	// Use the program
	void Use();

	// Delete the program
	void Delete();



};

