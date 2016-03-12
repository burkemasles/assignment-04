#ifndef Parts123_H
#define Parts123_H

#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <set>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::queue;
using std::string;
using std::set;

// Part 1
void exception(bool canHeThrow, bool canHeCatch);

//Part 2
template<typename T>
void extern howLong(T x)
{
	cout << sizeof x << endl;
}

//Part 3
extern vector<int> v;
extern queue<string> q;
extern set<int> s;

#endif
