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
    SHUTDOWN_VM,   //1
    FETCH,          //2
    DESTROY_VM,     //3
    DEFINE_VM,      //4
    SHOW_DETAIL,    //5
    UNDEFINE_VM,    //6
    MONITOR,        //7
    CHANGE,

}requestType;



#endif // COMMON_H

