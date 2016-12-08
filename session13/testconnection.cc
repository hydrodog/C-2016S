#include "MysqlC/include/mysql_connection.h"
#include <iostream>

using namespace std;
using namespace sql;
int main() {
	mysql::MySQL_Driver* driver = mysql::get_mysql_driver_instance();

	Connection* con = driver->connect("tcp://127.0.0.1:3306", "root", "toolipan");

	delete con;
}
