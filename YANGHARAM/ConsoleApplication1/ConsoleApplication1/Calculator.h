#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include "stdlib.h"
#include <ctime>
#include <string>  
#include "Calculator.h"
#include <stdlib.h>
#include "../ConsoleApplication1/Calculator.h"
using namespace std;

class Calculator {
private:
	string op[4] = { "+", "-", "*", "/" };
public:
	Calculator();
	string MakeFormula();
	string Solve(string formula);
};
