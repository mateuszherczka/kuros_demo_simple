#include "HandlingServer.hpp"

HandlingServer::HandlingServer()
{
    //ctor
}

HandlingServer::~HandlingServer()
{
    //dtor
}

void HandlingServer::handleResponse()
{

    cout << "------------------------------------------------" << endl;
    cout << "Response #" << handledCount << endl;

    response.printValues();

    cout << "------------------------------------------------" << endl;

    ++handledCount;
}

void HandlingServer::handleDisconnect()
{
    cout << "------------------------------------------------" << endl;
    cout << "HandlingServer: Ending session." << endl;
    cout << "------------------------------------------------" << endl;
}
