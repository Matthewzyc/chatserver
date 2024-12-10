#ifndef DB_H
#define DB_H

#include <mysql/mysql.h>
#include <string>

using std::string;

//  数据库操作类
class MySQL
{
public:
    //  初始化数据库连接
    MySQL();
    //  连接数据库
    bool connect();
    //  更新操作
    bool update(string sql);
    //  查询操作
    MYSQL_RES* query(string sql);
    //  获取连接
    MYSQL* getConnection() const;

private:
    MYSQL* _conn;
};

#endif