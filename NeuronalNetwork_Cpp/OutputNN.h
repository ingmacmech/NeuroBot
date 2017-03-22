#ifndef OUTPUTNN_CLASS_HPP
#define OUTPUTNN_CLASS_HPP
/*****************************************************************************/
/*  Header     : OUTPUTNN                                       Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes the output of a Neuronal Network       */
/*                                                                           */
/*                                                                           */
/*  Methodes   : OutputNN()													 */
/*				~OutputNN													 */
/*               get()				                                         */
/*               set()				                                         */
/*									                                         */
/*                                                                           */
/*  Author     : ingmacmech                                                  */
/*                                                                           */
/*  History    : 22.03.2017  IO Created                                      */
/*                                                                           */
/*  File       : OutputNN.hpp                                                 */
/*                                                                           */
/*****************************************************************************/
/* Artificial Neuronal Network                                               */
/*****************************************************************************/

/* imports */
#include<armadillo>
using namespace arma;
/* Class constant declaration  */

/* Class Type declaration      */

/* Class data declaration      */

/* Class definition            */


class OutputNN {

	// Data
	vec output;
	int nOutput;
	// Methods


public:
	// Constructor
	OutputNN();

	// Copy Constructor


	// Destructor
	~OutputNN();

	// Methode
	vec get();
	void set(vec);
	void set(double[]);

};

/*****************************************************************************/
/*  End Header  : LineClass                                                  */
/*****************************************************************************/
#endif