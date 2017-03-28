#ifndef INPUTNN_CLASS_HPP
#define INPUTNN_CLASS_HPP
/*****************************************************************************/
/*  Header     : InputNN                                        Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes the input of a Neuronal Network        */
/*                                                                           */
/*                                                                           */
/*  Methodes   : InputNN()			                                         */
/*              ~InputNN()													 */
/*				 get()				                                         */
/*               set()				                                         */
/*									                                         */
/*                                                                           */
/*  Author     : ingmacmech                                                  */
/*                                                                           */
/*  History    : 22.03.2017  IO Created                                      */
/*                                                                           */
/*  File       : InputNN.hpp                                                 */
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


class InputNN {

	// Data
	vec *input;
	// Methods

	
public: 
	// Constructor
	InputNN(int size);
	
	// Copy Constructor
	

	// Destructor
	~InputNN();

	// Methode
	vec get();
	void set(vec);
	void set(double[]);

};

/*****************************************************************************/
/*  End Header  : LineClass                                                  */
/*****************************************************************************/
#endif