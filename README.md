# Basic rest API

This includes 2 main controllers (Users,Posts).

It performs some simple CRUD operations on Users and thier posts.

<br>

**Programming Language** - Java 

**Framework** - Hibernate

**Database** - MySQL

**Server** - Apache Tomcat or TomEE


### Installation by steps
1. Configure your `base_url` here **sample\src\main\resources\hibernate.cfg**
2. Create database and setup it here 

		<property name = "hibernate.connection.url">jdbc:mysql://localhost:3306/**database_name**</property>
      
        <property name = "hibernate.connection.username">**username**</property>
      
        <property name = "hibernate.connection.password">**password**</property>


<br>

### URLs available

**Users**

* Register User : http://localhost:8081/sample/webapi/UserService/registerUser
* GetAllUsers : http://localhost:8081/sample/webapi/UserService/getAllUsers
* Validate User : http://localhost:8081/sample/webapi/UserService/validateUser


**Posts**

* InsertPost : http://localhost:8081/sample/webapi/PostsService/insertPost
* DeletePost : http://localhost:8081/sample/webapi/PostsService/deletePost
* UpdatePost : http://localhost:8081/sample/webapi/PostsService/updatePost
* GetAllPosts : http://localhost:8081/sample/webapi/PostsService/getAllPosts

<br>

### Main Files

**Data Access Object Files**
sample\src\main\java\com\padmajeet\sample\dao\PostsDAO
sample\src\main\java\com\padmajeet\sample\dao\UserDAO

**Services**
sample\src\main\java\com\padmajeet\sample\service\PostsService
sample\src\main\java\com\padmajeet\sample\service\UserService

**Models**
sample\src\main\java\com\padmajeet\sample\model\Posts
sample\src\main\java\com\padmajeet\sample\model\User


