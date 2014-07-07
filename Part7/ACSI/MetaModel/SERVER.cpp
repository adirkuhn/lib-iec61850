///////////////////////////////////////////////////////////
//  SERVER.cpp
//  Implementation of the Class SERVER
//  Created on:      15-Apr-2014 2:52:46 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "SERVER.h"


SERVER::SERVER(){

}



SERVER::~SERVER(){

}





/**
 * Returns name of the server, unambiguously identifying it within an IED.
 * <b>Modelling note</b>: This is not defined in the standard, but is useful in
 * applications that deal with more then one SERVER per IED.
 */
P_VISIBLE_STRING32 SERVER::getName(){

	//return NULL;
}


/**
 * Returns all logical devices within the server. List must not be empty.
 * <b>Modelling note</b>: Corresponds to SERVER.LogicalDevice.
 */
LD SERVER::getLds(){

	//return NULL;
}


/**
 * Returns all files within the server. List may be empty.
 * <b>Modelling note</b>: Corresponds to SERVER.File. 
 */
IECFILE SERVER::getFiles(){

	//return NULL;
}


/**
 * Returns all service access points of the server, unambiguously identifying it
 * within a system.
 * <b>Modelling note 1</b>: Corresponds to SERVER.ServiceAccessPoint.
 * <b>Modelling note 2</b>: Original documentation reads: "Shall identify a SERVER
 * within the scope of a system. NOTE: The ServiceAccessPoint is an abstraction of
 * an address used to identify the server in the underlying SCSM. The type depends
 * on the SCSM and shall be defined there. Although most services require a
 * specific ServiceAccessPoint to address a server, it has not been included
 * explicitly in the service parameter tables throughout this part of the standard.
 * " We define the type IPAddress. 
 */
IPAddress SERVER::getSaps(){

	//return NULL;
}


/**
 * Returns all clients with which the server maintains a two party application
 * association. List may be empty.
 * <b>Modelling note</b>: Corresponds to SERVER.TPAppAssociation. 
 */
TPAA SERVER::getTpaaClients(){

	//return NULL;
}


/**
 * Returns all the clients with which the server maintains a multicast application
 * association. List may be empty.
 * <b>Modelling note</b>: Corresponds to SERVER.MCAppAssociation. 
 */
MCAA SERVER::getMcaaClients(){

	//return NULL;
}
