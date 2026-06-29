/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * Solver.h
 *
 *  Created on: Jul 24, 2012
 *      Author: mikhail
 */

#ifndef SOLVER_H_
#define SOLVER_H_

#include <iostream>
#include <vector>
using namespace std;

#include "clause.h"

class Solver {

public:
	Solver(int in_num_of_vars, int in_num_of_clauses,	vector<Clause> in_clauses);

	void solve();
	void solveMultithread();

private:
	void cria_tabela_verdade();
	void escreve_saida(vector<int> solucoes);

public:
	int num_of_vars;
	int num_of_clauses;
	long long int num_of_cases;
	vector<Clause> clauses;
	vector<vector<bool> > tabela_verdade;

};

#endif /* SOLVER_H_ */
