Input: 
Insurance table:
+-----+----------+----------+-----+-----+
| pid | tiv_2015 | tiv_2016 | lat | lon |
+-----+----------+----------+-----+-----+
| 1   | 10       | 5        | 10  | 10  |
| 2   | 20       | 20       | 20  | 20  |
| 3   | 10       | 30       | 20  | 20  |
| 4   | 10       | 40       | 40  | 40  |
+-----+----------+----------+-----+-----+
Output: 
+----------+
| tiv_2016 |
+----------+
| 45.00    |
+----------+
Explanation: 
The first record in the table, like the last record, meets both of the two criteria.
The tiv_2015 value 10 is the same as the third and fourth records, and its location is unique.

The second record does not meet any of the two criteria. Its tiv_2015 is not like any other policyholders and its location is the same as the third record, which makes the third record fail, too.
So, the result is the sum of tiv_2016 of the first and last record, which is 45.

/* Write your PL/SQL query statement below */
SELECT SUM(tiv_2016) tiv_2016
FROM insurance
WHERE pid IN (
    SELECT i1.pid
    FROM insurance i1, insurance i2
    WHERE i1.tiv_2015 = i2.tiv_2015 AND i1.pid <> i2.pid
    MINUS
    SELECT i1.pid
    FROM insurance i1, insurance i2
    WHERE i1.lat = i2.lat AND i1.lon=i2.lon AND i1.pid<>i2.pid
);
