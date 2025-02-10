
Table: Employee

+-------------+------+
| Column Name | Type |
+-------------+------+
| id          | int  |
| salary      | int  |
+-------------+------+
id is the primary key (column with unique values) for this table.
Each row of this table contains information about the salary of an employee.

 

Write a solution to find the second highest distinct salary from the Employee table. If there is no second highest salary, return null (return None in Pandas).

The result format is in the following example.


/* Write your PL/SQL query statement below */
/* THIS IS MY SOLUTION AND I DON'T KNOWN WHY IT IS NOT WORK WHEN RESULT MUST BE 'NONE'
SELECT NVL(TO_CHAR(salary), 'null') SecondHighestSalary
FROM (SELECT salary
      FROM Employee
      WHERE salary < ANY(SELECT salary
                         FROM Employee))
WHERE salary >= ALL(SELECT salary
                    FROM Employee
                    WHERE salary < ANY(SELECT salary
                                       FROM Employee));

                                       */

SELECT max(salary) AS SecondHighestSalary
FROM Employee 
WHERE Salary <> (SELECT max(salary) FROM Employee)
