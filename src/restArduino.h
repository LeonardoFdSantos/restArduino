#ifndef restArduino_h
#define restArduino_h

#include <Ethernet.h>

class restArduino : public EthernetClient{

    public:
        virtual int connect(const char *host, uint6_t port);
        void send(const String &name, int value);
        void send(const String &name, float value);
        void send(const __FlashStringHelper *name,   int value);
        void send(const __FlashStringHelper *name, float value);

    private:
  const char*   my_host;

  void printMAC();
  void printHTTP();
  void printHeaders();

};

#endif