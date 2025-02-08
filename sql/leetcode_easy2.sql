/*
Table: Person

+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| email       | varchar |
+-------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table contains an email. The emails will not contain uppercase letters.

 

Write a solution to report all the duplicate emails. Note that it's guaranteed that the email field is not NULL.

Return the result table in any order.
*/



/* Write your PL/SQL query statement below */
SELECT DISTINCT p1.email Email
FROM Person p1, Person p2
WHERE p1.id <> p2.id AND p1.email = p2.email
