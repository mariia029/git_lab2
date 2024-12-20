﻿#pragma once
#include <iostream>
#include <string>
#include <fstream>

class pipe
{
private:
	static int MaxID;
	int ID;
	std::string name;
	double l; // length;
	int d; // diameter;
	bool in_repair; // 0 False - ready for use, 1 True - under in_repair

public:
	pipe();

	static pipe add_pipe(); 
	static void reset_maxID();

	friend std::ostream& operator << (std::ostream& out, const pipe& p);
	friend std::istream& operator >> (std::istream& in, pipe& p);
	friend std::ofstream& operator << (std::ofstream& fout, const pipe& p);
	friend std::ifstream& operator >> (std::ifstream& fin, pipe& p);

	void edit_pipe();
	int get_ID()
	{
		return ID;
	}
	std::string get_name()
	{
		return name;
	}
	bool get_inrepair()
	{
		return in_repair;
	}
};

