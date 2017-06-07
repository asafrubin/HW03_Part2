#ifndef HW03_PART2_ORDERS_H
#define HW03_PART2_ORDERS_H

#include "EscapeTechnion.h"

typedef enum {
    ORDERS_OUT_OF_MEMORY, // You should exit program after this error
    ORDERS_INVALID_COMMAND_LINE_PARAMETERS, // You should exit program after this error
    ORDERS_CANNOT_OPEN_FILE, // You should exit program after this error
    ORDERS_NULL_PARAMETER,
    ORDERS_INVALID_PARAMETER,
    ORDERS_EMAIL_ALREADY_EXISTS,
    ORDERS_COMPANY_EMAIL_DOES_NOT_EXIST,
    ORDERS_CLIENT_EMAIL_DOES_NOT_EXIST,
    ORDERS_ID_ALREADY_EXIST,
    ORDERS_ID_DOES_NOT_EXIST,
    ORDERS_CLIENT_IN_ROOM,
    ORDERS_ROOM_NOT_AVAILABLE,
    ORDERS_RESERVATION_EXISTS,
    ORDERS_NO_ROOMS_AVAILABLE,
    ORDERS_SUCCESS,
} orderResult;

typedef struct SOrders *Orders;

#endif //HW03_PART2_ORDERS_H
