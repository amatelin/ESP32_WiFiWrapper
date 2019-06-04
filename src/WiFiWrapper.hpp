//
//  WiFiWrapper.hpp
//  WiFi wrapper over WiFi lib for easier use
//
//  Created by Alexis Matelin on 02/06/2019.
//
//

#ifndef WiFiWrapper_hpp
#define WiFiWrapper_hpp

class WiFiWrapperClass {
private:
public:
    WiFiWrapperClass();
    ~WiFiWrapperClass();

    static void setup(const char* ssid, const char* password);

protected:

};

extern WiFiWrapperClass WiFiWrapper;

#endif /* WiFiWrapper_hpp */
