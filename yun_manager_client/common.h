#ifndef COMMON_H
#define COMMON_H



#define SERVER_ADDRESS "127.0.0.1"
#define SERVER_PORT 6666

typedef enum _messageType{
    REQUEST = 0,
    RESPONSE
}messageType;

typedef enum _requestType{
    START_VM = 0,
    SHUTDOWN_VM,
    FETCH,
    DESTROY_VM,

}requestType;



#endif // COMMON_H

