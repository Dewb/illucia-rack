#include <string>
#include <vector>

class SerialImpl;

struct SerialPortInfo
{
    std::string port;
    std::string description;
};

class SerialConnection
{
public:
    SerialConnection();

    bool isConnected() const;
    void connect(std::string portName);
    void disconnect();
    std::string getActivePort() const;

    static std::vector<SerialPortInfo> listSerialPorts();

protected:
    SerialImpl* impl;
    bool connected;
    std::string activePort;
};
