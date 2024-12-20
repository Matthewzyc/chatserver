/*
    server和client的公共文件
*/
#ifndef PUBLIC_H
#define PUBLIC_H

enum EnMsgType
{
    LOGIN_MSG = 1,  //   登录消息
    LOGIN_MSG_ACK,  //  登录消息响应
    REGIST_MSG,  //  注册消息
    REGIST_MSG_ACK,  //  注册消息响应
    ONE_CHAT_MSG,   //  聊天消息
    ADD_FRIEND_MSG, //  添加好友消息
    CREATE_GROUP_MSG,   //  创建群组
    ADD_GROUP_MSG,  //  加入群组
    GROUP_CHAT_MSG, //  群聊天
    LOGOUT_MSG, //  注销消息
};

#endif