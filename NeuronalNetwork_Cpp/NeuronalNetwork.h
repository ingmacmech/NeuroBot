#ifndef NEURONALNETWORK_CLASS_HPP
#define NEURONALNETWORK_CLASS_HPP
/*****************************************************************************/
/*  Header     : NeuronalNetwork                                Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes the Neuronal Network				     */
/*                                                                           */
/*  Author     : ingmacmech                                                  */
/*                                                                           */
/*  History    : 23.03.2017  IO Created                                      */
/*                                                                           */
/*  File       : NeuronalNetwork.hpp                                         */
/*                                                                           */
/*****************************************************************************/
/* Artificial Neuronal Network                                               */
/*****************************************************************************/

/* imports */
#include<armadillo>
#include<array>

/* user imports*/
//#include"InputNN.h"
//#include"OutputNN.h"

/* namespaces */
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

	vec input;
	vec output;
	vec *hiddenLayer;
	
	
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
	void getInput();
	vec compute();
	vec getOutput();


};

/*****************************************************************************/
/*  End Header  : LineClass                                                  */
/*****************************************************************************/
#endif