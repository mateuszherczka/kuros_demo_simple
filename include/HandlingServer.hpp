#ifndef HANDLINGSERVER_HPP
#define HANDLINGSERVER_HPP

#include <kuros.h>

class HandlingServer : public Server
{
    public:
        HandlingServer();
        virtual ~HandlingServer();

        /*
        Handles incoming messages from robot.
        We have access to response object in server.
        */
        void handleResponse() override;
        void handleDisconnect() override;

    protected:
    private:

        int handledCount = 0;
};

#endif // HANDLINGSERVER_HPP