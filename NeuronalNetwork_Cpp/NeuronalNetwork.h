#ifndef NEURONALNETWORK_CLASS_HPP
#define NEURONALNETWORK_CLASS_HPP
/*****************************************************************************/
/*  Header     : NeuronalNetwork                                Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes the Neuronal Network				     */
/*                                                                           */
/*                                                                           */
/*  Methodes   :					                                         */
/*																			 */
/*									                                         */
/*									                                         */
/*									                                         */
/*                                                                           */
/*  Author     : ingmacmech                                                  */
/*                                                                           */
/*  History    : 23.03.2017  IO Created                                      */
/*                                                                           */
/*  File       : NeuronalNetwork.hpp                                                 */
/*                                                                           */
/*****************************************************************************/
/* Artificial Neuronal Network                                               */
/*****************************************************************************/

/* imports */
#include<armadillo>
#include<array>
using namespace arma;
/* Class constant declaration  */

/* Class Type declaration      */

/* Class data declaration      */
 

/* Class definition            */

class NeuronalNetwork {

	// Data
	int nLayer;
	int *layerSize; // without bias input (bias will be added automaticly)
	
	int nTheta;
	mat *theta;
	
	
	// Methods


public:
	// Constructor
	NeuronalNetwork(int nLayer, int layerSize[]);
	// Copy Constructor


	// Destructor
	~NeuronalNetwork();

	// Methode
	void printLayerSize();
	void printTheta();

};

/*****************************************************************************/
/*  End Header  : LineClass                                                  */
/*****************************************************************************/
#endif