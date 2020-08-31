#include "SerialConnection.hpp"
#include "serial/serial.h"

SerialConnection::SerialConnection()
    : connected(false)
    , activePort("")
{
}

bool SerialConnection::isConnected() const
{
    return connected;
}

void SerialConnection::disconnect()
{
    connected = false;
    activePort = "";
}

std::string SerialConnection::getActivePort() const
{
    return activePort;
}

void SerialConnection::connect(std::string portName)
{
    activePort = portName;
}

std::vector<SerialPortInfo> SerialConnection::listSerialPorts()
{
    std::vector<SerialPortInfo> list;
    auto ports = serial::list_ports();
    for (auto& info : ports)
    {
        struct SerialPortInfo out = { .port = info.port, .description = info.description };
        list.push_back(out);
    }
    return list;
}
