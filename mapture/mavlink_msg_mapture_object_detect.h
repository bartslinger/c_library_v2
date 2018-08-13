#pragma once
// MESSAGE MAPTURE_OBJECT_DETECT PACKING

#define MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT 10100

MAVPACKED(
typedef struct __mavlink_mapture_object_detect_t {
 float x; /*< [m] X Position*/
 float y; /*< [m] Y Position*/
 float width; /*< [m] Width*/
 float height; /*< [m] Height*/
 float angle; /*< [deg] Angle (North = 0.0)*/
}) mavlink_mapture_object_detect_t;

#define MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN 20
#define MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_MIN_LEN 20
#define MAVLINK_MSG_ID_10100_LEN 20
#define MAVLINK_MSG_ID_10100_MIN_LEN 20

#define MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_CRC 33
#define MAVLINK_MSG_ID_10100_CRC 33



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MAPTURE_OBJECT_DETECT { \
    10100, \
    "MAPTURE_OBJECT_DETECT", \
    5, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_mapture_object_detect_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_mapture_object_detect_t, y) }, \
         { "width", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_mapture_object_detect_t, width) }, \
         { "height", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_mapture_object_detect_t, height) }, \
         { "angle", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_mapture_object_detect_t, angle) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MAPTURE_OBJECT_DETECT { \
    "MAPTURE_OBJECT_DETECT", \
    5, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_mapture_object_detect_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_mapture_object_detect_t, y) }, \
         { "width", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_mapture_object_detect_t, width) }, \
         { "height", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_mapture_object_detect_t, height) }, \
         { "angle", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_mapture_object_detect_t, angle) }, \
         } \
}
#endif

/**
 * @brief Pack a mapture_object_detect message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x [m] X Position
 * @param y [m] Y Position
 * @param width [m] Width
 * @param height [m] Height
 * @param angle [deg] Angle (North = 0.0)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mapture_object_detect_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x, float y, float width, float height, float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, width);
    _mav_put_float(buf, 12, height);
    _mav_put_float(buf, 16, angle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN);
#else
    mavlink_mapture_object_detect_t packet;
    packet.x = x;
    packet.y = y;
    packet.width = width;
    packet.height = height;
    packet.angle = angle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_MIN_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_CRC);
}

/**
 * @brief Pack a mapture_object_detect message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x [m] X Position
 * @param y [m] Y Position
 * @param width [m] Width
 * @param height [m] Height
 * @param angle [deg] Angle (North = 0.0)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mapture_object_detect_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x,float y,float width,float height,float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, width);
    _mav_put_float(buf, 12, height);
    _mav_put_float(buf, 16, angle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN);
#else
    mavlink_mapture_object_detect_t packet;
    packet.x = x;
    packet.y = y;
    packet.width = width;
    packet.height = height;
    packet.angle = angle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_MIN_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_CRC);
}

/**
 * @brief Encode a mapture_object_detect struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mapture_object_detect C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mapture_object_detect_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mapture_object_detect_t* mapture_object_detect)
{
    return mavlink_msg_mapture_object_detect_pack(system_id, component_id, msg, mapture_object_detect->x, mapture_object_detect->y, mapture_object_detect->width, mapture_object_detect->height, mapture_object_detect->angle);
}

/**
 * @brief Encode a mapture_object_detect struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mapture_object_detect C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mapture_object_detect_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mapture_object_detect_t* mapture_object_detect)
{
    return mavlink_msg_mapture_object_detect_pack_chan(system_id, component_id, chan, msg, mapture_object_detect->x, mapture_object_detect->y, mapture_object_detect->width, mapture_object_detect->height, mapture_object_detect->angle);
}

/**
 * @brief Send a mapture_object_detect message
 * @param chan MAVLink channel to send the message
 *
 * @param x [m] X Position
 * @param y [m] Y Position
 * @param width [m] Width
 * @param height [m] Height
 * @param angle [deg] Angle (North = 0.0)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mapture_object_detect_send(mavlink_channel_t chan, float x, float y, float width, float height, float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, width);
    _mav_put_float(buf, 12, height);
    _mav_put_float(buf, 16, angle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT, buf, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_MIN_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_CRC);
#else
    mavlink_mapture_object_detect_t packet;
    packet.x = x;
    packet.y = y;
    packet.width = width;
    packet.height = height;
    packet.angle = angle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT, (const char *)&packet, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_MIN_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_CRC);
#endif
}

/**
 * @brief Send a mapture_object_detect message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mapture_object_detect_send_struct(mavlink_channel_t chan, const mavlink_mapture_object_detect_t* mapture_object_detect)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mapture_object_detect_send(chan, mapture_object_detect->x, mapture_object_detect->y, mapture_object_detect->width, mapture_object_detect->height, mapture_object_detect->angle);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT, (const char *)mapture_object_detect, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_MIN_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_CRC);
#endif
}

#if MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mapture_object_detect_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float width, float height, float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, width);
    _mav_put_float(buf, 12, height);
    _mav_put_float(buf, 16, angle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT, buf, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_MIN_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_CRC);
#else
    mavlink_mapture_object_detect_t *packet = (mavlink_mapture_object_detect_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->width = width;
    packet->height = height;
    packet->angle = angle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT, (const char *)packet, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_MIN_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_CRC);
#endif
}
#endif

#endif

// MESSAGE MAPTURE_OBJECT_DETECT UNPACKING


/**
 * @brief Get field x from mapture_object_detect message
 *
 * @return [m] X Position
 */
static inline float mavlink_msg_mapture_object_detect_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from mapture_object_detect message
 *
 * @return [m] Y Position
 */
static inline float mavlink_msg_mapture_object_detect_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field width from mapture_object_detect message
 *
 * @return [m] Width
 */
static inline float mavlink_msg_mapture_object_detect_get_width(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field height from mapture_object_detect message
 *
 * @return [m] Height
 */
static inline float mavlink_msg_mapture_object_detect_get_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field angle from mapture_object_detect message
 *
 * @return [deg] Angle (North = 0.0)
 */
static inline float mavlink_msg_mapture_object_detect_get_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a mapture_object_detect message into a struct
 *
 * @param msg The message to decode
 * @param mapture_object_detect C-struct to decode the message contents into
 */
static inline void mavlink_msg_mapture_object_detect_decode(const mavlink_message_t* msg, mavlink_mapture_object_detect_t* mapture_object_detect)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mapture_object_detect->x = mavlink_msg_mapture_object_detect_get_x(msg);
    mapture_object_detect->y = mavlink_msg_mapture_object_detect_get_y(msg);
    mapture_object_detect->width = mavlink_msg_mapture_object_detect_get_width(msg);
    mapture_object_detect->height = mavlink_msg_mapture_object_detect_get_height(msg);
    mapture_object_detect->angle = mavlink_msg_mapture_object_detect_get_angle(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN? msg->len : MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN;
        memset(mapture_object_detect, 0, MAVLINK_MSG_ID_MAPTURE_OBJECT_DETECT_LEN);
    memcpy(mapture_object_detect, _MAV_PAYLOAD(msg), len);
#endif
}
